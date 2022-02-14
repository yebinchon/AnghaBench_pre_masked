
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct _cms_typehandler_struct {int dummy; } ;
typedef int cmsUInt32Number ;
typedef int cmsMLU ;
struct TYPE_4__ {int (* Read ) (int ,TYPE_1__*,char*,int,int) ;} ;
typedef TYPE_1__ cmsIOHANDLER ;
typedef int cmsContext ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int ,int) ;
 int * FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *,int ,int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (struct _cms_typehandler_struct*) ;
 int FUNC_6 (int ,TYPE_1__*,char*,int,int) ;

__attribute__((used)) static
void *FUNC_7(cmsContext VAR_3, struct _cms_typehandler_struct* VAR_4, cmsIOHANDLER* VAR_5, cmsUInt32Number* VAR_6, cmsUInt32Number VAR_7)
{
    char* VAR_8 = ((void*)0);
    cmsMLU* VAR_9 = ((void*)0);
    FUNC_5(VAR_4);


    VAR_9 = FUNC_2(VAR_3, 1);
    if (VAR_9 == ((void*)0)) return ((void*)0);

    *VAR_6 = 0;


    if (VAR_7 == VAR_0) goto Error;

    VAR_8 = (char*) FUNC_1(VAR_3, VAR_7 + 1);
    if (VAR_8 == ((void*)0)) goto Error;

    if (VAR_5 -> Read(VAR_3, VAR_5, VAR_8, sizeof(char), VAR_7) != VAR_7) goto Error;


    VAR_8[VAR_7] = 0;
    *VAR_6 = 1;


    if (!FUNC_4(VAR_3, VAR_9, VAR_2, VAR_1, VAR_8)) goto Error;

    FUNC_0(VAR_3, VAR_8);
    return (void*) VAR_9;

Error:
    if (VAR_9 != ((void*)0))
        FUNC_3(VAR_3, VAR_9);
    if (VAR_8 != ((void*)0))
        FUNC_0(VAR_3, VAR_8);

    return ((void*)0);
}
