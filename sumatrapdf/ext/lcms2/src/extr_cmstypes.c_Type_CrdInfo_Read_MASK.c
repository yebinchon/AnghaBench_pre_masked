
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _cms_typehandler_struct {int dummy; } ;
typedef int cmsUInt32Number ;
typedef int cmsMLU ;
typedef int cmsIOHANDLER ;
typedef int cmsContext ;


 int FUNC_0 (int ,struct _cms_typehandler_struct*,int *,int *,int*,char*) ;
 int * FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static
void *FUNC_3(cmsContext VAR_0, struct _cms_typehandler_struct* VAR_1, cmsIOHANDLER* VAR_2, cmsUInt32Number* VAR_3, cmsUInt32Number VAR_4)
{
    cmsMLU* VAR_5 = FUNC_1(VAR_0, 5);

    *VAR_3 = 0;
    if (!FUNC_0(VAR_0, VAR_1, VAR_2, VAR_5, &VAR_4, "nm")) goto Error;
    if (!FUNC_0(VAR_0, VAR_1, VAR_2, VAR_5, &VAR_4, "#0")) goto Error;
    if (!FUNC_0(VAR_0, VAR_1, VAR_2, VAR_5, &VAR_4, "#1")) goto Error;
    if (!FUNC_0(VAR_0, VAR_1, VAR_2, VAR_5, &VAR_4, "#2")) goto Error;
    if (!FUNC_0(VAR_0, VAR_1, VAR_2, VAR_5, &VAR_4, "#3")) goto Error;

    *VAR_3 = 1;
    return (void*) VAR_5;

Error:
    FUNC_2(VAR_0, VAR_5);
    return ((void*)0);

}
