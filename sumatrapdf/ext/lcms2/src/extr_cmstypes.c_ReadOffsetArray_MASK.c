
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ cmsUInt32Number ;
typedef int cmsIOHANDLER ;
typedef int cmsContext ;
typedef int cmsBool ;
struct TYPE_3__ {int DisplayValue; int DisplayName; int Value; int Name; } ;
typedef TYPE_1__ _cmsDICarray ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int *,scalar_t__,scalar_t__) ;
 int VAR_1 ;

__attribute__((used)) static
cmsBool FUNC_1(cmsContext VAR_2, cmsIOHANDLER* VAR_3, _cmsDICarray* VAR_4, cmsUInt32Number VAR_5, cmsUInt32Number VAR_6, cmsUInt32Number VAR_7)
{
    cmsUInt32Number VAR_8;


    for (VAR_8=0; VAR_8 < VAR_5; VAR_8++) {

        if (!FUNC_0(VAR_2, VAR_3, &VAR_4 -> Name, VAR_8, VAR_7)) return VAR_0;
        if (!FUNC_0(VAR_2, VAR_3, &VAR_4 -> Value, VAR_8, VAR_7)) return VAR_0;

        if (VAR_6 > 16) {

            if (!FUNC_0(VAR_2, VAR_3, &VAR_4 ->DisplayName, VAR_8, VAR_7)) return VAR_0;

        }

        if (VAR_6 > 24) {

            if (!FUNC_0(VAR_2, VAR_3, & VAR_4 -> DisplayValue, VAR_8, VAR_7)) return VAR_0;
        }
    }
    return VAR_1;
}
