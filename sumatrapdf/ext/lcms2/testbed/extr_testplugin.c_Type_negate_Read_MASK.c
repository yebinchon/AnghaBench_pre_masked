
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _cms_typehandler_struct {int dummy; } ;
typedef int cmsUInt32Number ;
typedef int cmsUInt16Number ;
typedef int cmsIOHANDLER ;
typedef int cmsContext ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int*) ;

__attribute__((used)) static
void *FUNC_2(cmsContext VAR_0, struct _cms_typehandler_struct* VAR_1,
        cmsIOHANDLER* VAR_2,
                cmsUInt32Number* VAR_3,
                cmsUInt32Number VAR_4)
{
    cmsUInt16Number VAR_5;
    if (!FUNC_1(VAR_0, VAR_2, &VAR_5)) return ((void*)0);
    if (VAR_5 != 3) return ((void*)0);

    *VAR_3 = 1;
    return FUNC_0(VAR_0);
}
