
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int cmsUInt32Number ;
typedef int cmsContext ;
typedef int cmsBool ;
struct TYPE_5__ {int DisplayValue; int DisplayName; int Value; int Name; } ;
typedef TYPE_1__ _cmsDICarray ;


 int FUNC_0 (int ,int *,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

__attribute__((used)) static
cmsBool FUNC_3(cmsContext VAR_2, _cmsDICarray* VAR_3, cmsUInt32Number VAR_4, cmsUInt32Number VAR_5)
{

    FUNC_2(VAR_3, 0, sizeof(_cmsDICarray));


    if (!FUNC_0(VAR_2, &VAR_3 ->Name, VAR_4)) goto Error;
    if (!FUNC_0(VAR_2, &VAR_3 ->Value, VAR_4)) goto Error;

    if (VAR_5 > 16) {
        if (!FUNC_0(VAR_2, &VAR_3 -> DisplayName, VAR_4)) goto Error;

    }
    if (VAR_5 > 24) {
        if (!FUNC_0(VAR_2, &VAR_3 ->DisplayValue, VAR_4)) goto Error;
    }
    return VAR_1;

Error:
    FUNC_1(VAR_2, VAR_3);
    return VAR_0;
}
