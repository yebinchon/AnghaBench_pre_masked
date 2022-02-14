
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_18__ {TYPE_1__* list; } ;
struct TYPE_17__ {int mmgr; int attr; } ;
struct TYPE_16__ {TYPE_4__* fonts; } ;
struct TYPE_15__ {scalar_t__ count; } ;
typedef TYPE_2__* HPDF_PageAttr ;
typedef TYPE_3__* HPDF_Page ;
typedef TYPE_4__* HPDF_Font ;
typedef TYPE_4__* HPDF_Dict ;


 scalar_t__ FUNC_0 (TYPE_4__*,char*,TYPE_4__*) ;
 char* FUNC_1 (TYPE_4__*,TYPE_4__*) ;
 TYPE_4__* FUNC_2 (int ) ;
 int FUNC_3 (char*,scalar_t__,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (char*) ;
 TYPE_4__* FUNC_5 (TYPE_3__*,char*,int ) ;
 scalar_t__ FUNC_6 (char*,char*,char*) ;

const char*
FUNC_7 (HPDF_Page VAR_3,
                             HPDF_Font VAR_4)
{
    HPDF_PageAttr VAR_5 = (HPDF_PageAttr )VAR_3->attr;
    const char *VAR_6;

    FUNC_4((" HPDF_Page_GetLocalFontName\n"));





    if (!VAR_5->fonts) {
        HPDF_Dict VAR_7;
        HPDF_Dict VAR_8;

        VAR_7 = FUNC_5 (VAR_3, "Resources",
                        VAR_1);
        if (!VAR_7)
            return ((void*)0);

        VAR_8 = FUNC_2 (VAR_3->mmgr);
        if (!VAR_8)
            return ((void*)0);

        if (FUNC_0 (VAR_7, "Font", VAR_8) != VAR_2)
            return ((void*)0);

        VAR_5->fonts = VAR_8;
    }


    VAR_6 = FUNC_1 (VAR_5->fonts, VAR_4);
    if (!VAR_6) {



        char VAR_9[VAR_0 + 1];
        char *VAR_10;
        char *VAR_11 = VAR_9 + VAR_0;

        VAR_10 = (char *)FUNC_6 (VAR_9, "F", VAR_11);
        FUNC_3 (VAR_10, VAR_5->fonts->list->count + 1, VAR_11);

        if (FUNC_0 (VAR_5->fonts, VAR_9, VAR_4) != VAR_2)
            return ((void*)0);

        VAR_6 = FUNC_1 (VAR_5->fonts, VAR_4);
    }

    return VAR_6;
}
