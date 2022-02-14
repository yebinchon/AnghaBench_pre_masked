
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct _cms_typehandler_struct {int dummy; } ;
typedef size_t cmsUInt32Number ;
typedef int cmsIOHANDLER ;
typedef int cmsContext ;
typedef int cmsBool ;
struct TYPE_2__ {int * TheCurves; } ;
typedef TYPE_1__ _cmsStageToneCurvesData ;


 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (size_t) ;

__attribute__((used)) static
cmsBool FUNC_2(cmsContext VAR_0, struct _cms_typehandler_struct* VAR_1,
                      cmsIOHANDLER* VAR_2,
                      void* VAR_3,
                      cmsUInt32Number VAR_4,
                      cmsUInt32Number VAR_5)
{
    _cmsStageToneCurvesData* VAR_6 = (_cmsStageToneCurvesData*) VAR_3;

    return FUNC_0(VAR_0, VAR_2, VAR_6 ->TheCurves[VAR_4]);

    FUNC_1(VAR_5);
    FUNC_1(VAR_1);
}
