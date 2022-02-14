
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct _cms_typehandler_struct {int dummy; } ;
struct TYPE_11__ {int * Desc; TYPE_2__* Bg; TYPE_1__* Ucr; } ;
typedef TYPE_3__ cmsUcrBg ;
typedef int cmsUInt32Number ;
typedef int cmsUInt16Number ;
struct TYPE_12__ {int (* Read ) (int ,TYPE_4__*,char*,int,int) ;} ;
typedef TYPE_4__ cmsIOHANDLER ;
typedef int cmsContext ;
struct TYPE_10__ {int Table16; } ;
struct TYPE_9__ {int Table16; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int ,int) ;
 int FUNC_3 (int ,TYPE_4__*,int,int ) ;
 int FUNC_4 (int ,TYPE_4__*,int*) ;
 void* FUNC_5 (int ,int,int *) ;
 int * FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int *,int ,int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_8 (struct _cms_typehandler_struct*) ;
 int FUNC_9 (int ,TYPE_4__*,char*,int,int) ;

__attribute__((used)) static
void *FUNC_10(cmsContext VAR_3, struct _cms_typehandler_struct* VAR_4, cmsIOHANDLER* VAR_5, cmsUInt32Number* VAR_6, cmsUInt32Number VAR_7)
{
    cmsUcrBg* VAR_8 = (cmsUcrBg*) FUNC_2(VAR_3, sizeof(cmsUcrBg));
    cmsUInt32Number VAR_9, VAR_10;
    char* VAR_11;
    FUNC_8(VAR_4);

    *VAR_6 = 0;
    if (VAR_8 == ((void*)0)) return ((void*)0);


    if (!FUNC_4(VAR_3, VAR_5, &VAR_9)) return ((void*)0);
    if (VAR_7 < sizeof(cmsUInt32Number)) return ((void*)0);
    VAR_7 -= sizeof(cmsUInt32Number);

    VAR_8 ->Ucr = FUNC_5(VAR_3, VAR_9, ((void*)0));
    if (VAR_8 ->Ucr == ((void*)0)) return ((void*)0);

    if (!FUNC_3(VAR_3, VAR_5, VAR_9, VAR_8 ->Ucr->Table16)) return ((void*)0);
    if (VAR_7 < sizeof(cmsUInt32Number)) return ((void*)0);
    VAR_7 -= VAR_9 * sizeof(cmsUInt16Number);


    if (!FUNC_4(VAR_3, VAR_5, &VAR_10)) return ((void*)0);
    if (VAR_7 < sizeof(cmsUInt32Number)) return ((void*)0);
    VAR_7 -= sizeof(cmsUInt32Number);

    VAR_8 ->Bg = FUNC_5(VAR_3, VAR_10, ((void*)0));
    if (VAR_8 ->Bg == ((void*)0)) return ((void*)0);
    if (!FUNC_3(VAR_3, VAR_5, VAR_10, VAR_8 ->Bg->Table16)) return ((void*)0);
    if (VAR_7 < VAR_10 * sizeof(cmsUInt16Number)) return ((void*)0);
    VAR_7 -= VAR_10 * sizeof(cmsUInt16Number);
    if (VAR_7 == VAR_0) return ((void*)0);


    VAR_8 ->Desc = FUNC_6(VAR_3, 1);
    if (VAR_8 ->Desc == ((void*)0)) return ((void*)0);

    VAR_11 = (char*) FUNC_1(VAR_3, VAR_7 + 1);
    if (VAR_5 ->Read(VAR_3, VAR_5,VAR_11, sizeof(char), VAR_7) != VAR_7) return ((void*)0);
    VAR_11[VAR_7] = 0;
    FUNC_7(VAR_3, VAR_8 ->Desc, VAR_2, VAR_1, VAR_11);
    FUNC_0(VAR_3, VAR_11);

    *VAR_6 = 1;
    return (void*) VAR_8;
}
