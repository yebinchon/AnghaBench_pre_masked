
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {TYPE_3__* locinfo; } ;
struct TYPE_8__ {TYPE_2__* lc_category; int * lc_handle; TYPE_1__* lc_id; } ;
struct TYPE_7__ {int* locale; int* refcount; } ;
struct TYPE_6__ {int wLanguage; char wCountry; unsigned short wCodePage; } ;
typedef TYPE_4__* MSVCRT__locale_t ;
typedef int LCID ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int,char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int*) ;
 void* FUNC_2 (int) ;
 int VAR_5 ;
 int FUNC_3 (int*,char*,int) ;
 int FUNC_4 (char*,char*,unsigned short) ;
 scalar_t__ FUNC_5 (char*) ;

__attribute__((used)) static BOOL FUNC_6(LCID VAR_6, unsigned short VAR_7,
        MSVCRT__locale_t VAR_8, int VAR_9)
{
    char VAR_10[256], *VAR_11;
    int VAR_12;

    if(FUNC_0(VAR_6, VAR_1|VAR_2, VAR_10, 256)) {
        VAR_11 = VAR_10;

        VAR_8->locinfo->lc_id[VAR_9].wLanguage = 0;
        while(*VAR_11) {
            VAR_8->locinfo->lc_id[VAR_9].wLanguage *= 16;

            if(*VAR_11 <= '9')
                VAR_8->locinfo->lc_id[VAR_9].wLanguage += *VAR_11-'0';
            else
                VAR_8->locinfo->lc_id[VAR_9].wLanguage += *VAR_11-'a'+10;

            VAR_11++;
        }

        VAR_8->locinfo->lc_id[VAR_9].wCountry =
            VAR_8->locinfo->lc_id[VAR_9].wLanguage;
    }

    VAR_8->locinfo->lc_id[VAR_9].wCodePage = VAR_7;

    VAR_8->locinfo->lc_handle[VAR_9] = VAR_6;

    VAR_12 = 0;
    VAR_12 += FUNC_0(VAR_6, VAR_4
            |VAR_2, VAR_10, 256);
    VAR_10[VAR_12-1] = '_';
    VAR_12 += FUNC_0(VAR_6, VAR_3
            |VAR_2, &VAR_10[VAR_12], 256-VAR_12);
    VAR_10[VAR_12-1] = '.';
    FUNC_4(VAR_10+VAR_12, "%u", VAR_7);
    VAR_12 += FUNC_5(VAR_10+VAR_12)+1;

    VAR_8->locinfo->lc_category[VAR_9].locale = FUNC_2(VAR_12);
    VAR_8->locinfo->lc_category[VAR_9].refcount = FUNC_2(sizeof(int));
    if(!VAR_8->locinfo->lc_category[VAR_9].locale
            || !VAR_8->locinfo->lc_category[VAR_9].refcount) {
        FUNC_1(VAR_8->locinfo->lc_category[VAR_9].locale);
        FUNC_1(VAR_8->locinfo->lc_category[VAR_9].refcount);
        VAR_8->locinfo->lc_category[VAR_9].locale = ((void*)0);
        VAR_8->locinfo->lc_category[VAR_9].refcount = ((void*)0);
        return VAR_5;
    }
    FUNC_3(VAR_8->locinfo->lc_category[VAR_9].locale, VAR_10, VAR_12);
    *VAR_8->locinfo->lc_category[VAR_9].refcount = 1;

    return VAR_0;
}
