
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _cms_typehandler_struct {int dummy; } ;
typedef int cmsUInt32Number ;
typedef int cmsFloat64Number ;
typedef int cmsContext ;


 void* FUNC_0 (int ,void const*,int) ;
 int FUNC_1 (struct _cms_typehandler_struct*) ;

__attribute__((used)) static
void* FUNC_2(cmsContext VAR_0, struct _cms_typehandler_struct* VAR_1, const void *VAR_2, cmsUInt32Number VAR_3)
{
    FUNC_1(VAR_1);
    return FUNC_0(VAR_0, VAR_2, VAR_3 * sizeof(cmsFloat64Number));
}
