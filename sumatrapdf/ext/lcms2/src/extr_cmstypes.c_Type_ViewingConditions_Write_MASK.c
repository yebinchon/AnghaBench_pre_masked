
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct _cms_typehandler_struct {int dummy; } ;
typedef struct _cms_typehandler_struct* cmsUInt32Number ;
typedef int cmsIOHANDLER ;
struct TYPE_2__ {int IlluminantType; int SurroundXYZ; int IlluminantXYZ; } ;
typedef TYPE_1__ cmsICCViewingConditions ;
typedef int cmsContext ;
typedef int cmsBool ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int ,int *,int *) ;
 int FUNC_2 (struct _cms_typehandler_struct*) ;

__attribute__((used)) static
cmsBool FUNC_3(cmsContext VAR_2, struct _cms_typehandler_struct* VAR_3, cmsIOHANDLER* VAR_4, void* VAR_5, cmsUInt32Number VAR_6)
{
    cmsICCViewingConditions* VAR_7 = (cmsICCViewingConditions* ) VAR_5;

    if (!FUNC_1(VAR_2, VAR_4, &VAR_7 ->IlluminantXYZ)) return VAR_0;
    if (!FUNC_1(VAR_2, VAR_4, &VAR_7 ->SurroundXYZ)) return VAR_0;
    if (!FUNC_0(VAR_2, VAR_4, VAR_7 ->IlluminantType)) return VAR_0;

    return VAR_1;

    FUNC_2(VAR_6);
    FUNC_2(VAR_3);
}
