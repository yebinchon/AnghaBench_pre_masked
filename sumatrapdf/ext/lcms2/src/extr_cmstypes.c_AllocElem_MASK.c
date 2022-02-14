
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int cmsUInt32Number ;
typedef int cmsContext ;
typedef int cmsBool ;
struct TYPE_3__ {int * Offsets; int * Sizes; } ;
typedef TYPE_1__ _cmsDICelem ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static
cmsBool FUNC_2(cmsContext VAR_2, _cmsDICelem* VAR_3, cmsUInt32Number VAR_4)
{
    VAR_3->Offsets = (cmsUInt32Number *) FUNC_0(VAR_2, VAR_4, sizeof(cmsUInt32Number));
    if (VAR_3->Offsets == ((void*)0)) return VAR_0;

    VAR_3->Sizes = (cmsUInt32Number *) FUNC_0(VAR_2, VAR_4, sizeof(cmsUInt32Number));
    if (VAR_3->Sizes == ((void*)0)) {

        FUNC_1(VAR_2, VAR_3 -> Offsets);
        return VAR_0;
    }

    return VAR_1;
}
