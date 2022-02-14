
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct _cms_typehandler_struct {int dummy; } ;
typedef struct _cms_typehandler_struct* cmsUInt32Number ;
struct TYPE_2__ {scalar_t__ len; } ;
typedef TYPE_1__ cmsICCData ;
typedef int cmsContext ;


 void* FUNC_0 (int ,void const*,scalar_t__) ;
 int FUNC_1 (struct _cms_typehandler_struct*) ;

__attribute__((used)) static
void* FUNC_2(cmsContext VAR_0, struct _cms_typehandler_struct* VAR_1, const void *VAR_2, cmsUInt32Number VAR_3)
{
    cmsICCData* VAR_4 = (cmsICCData*) VAR_2;

    return FUNC_0(VAR_0, VAR_2, sizeof(cmsICCData) + VAR_4 ->len - 1);

    FUNC_1(VAR_1);
    FUNC_1(VAR_3);
}
