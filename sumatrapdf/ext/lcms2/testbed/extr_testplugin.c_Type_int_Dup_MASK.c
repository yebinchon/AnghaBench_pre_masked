
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _cms_typehandler_struct {int dummy; } ;
typedef int cmsUInt32Number ;
typedef int cmsContext ;


 void* FUNC_0 (int ,void const*,int) ;

__attribute__((used)) static
void* FUNC_1(cmsContext VAR_0, struct _cms_typehandler_struct* VAR_1,
                   const void *VAR_2, cmsUInt32Number VAR_3)
{
    return FUNC_0(VAR_0, VAR_2, VAR_3 * sizeof(cmsUInt32Number));
}
