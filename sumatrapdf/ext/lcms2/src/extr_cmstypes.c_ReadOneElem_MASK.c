
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t cmsUInt32Number ;
typedef int cmsIOHANDLER ;
typedef int cmsContext ;
typedef int cmsBool ;
struct TYPE_3__ {scalar_t__* Offsets; scalar_t__* Sizes; } ;
typedef TYPE_1__ _cmsDICelem ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,scalar_t__*) ;

__attribute__((used)) static
cmsBool FUNC_1(cmsContext VAR_2, cmsIOHANDLER* VAR_3, _cmsDICelem* VAR_4, cmsUInt32Number VAR_5, cmsUInt32Number VAR_6)
{
    if (!FUNC_0(VAR_2, VAR_3, &VAR_4->Offsets[VAR_5])) return VAR_0;
    if (!FUNC_0(VAR_2, VAR_3, &VAR_4 ->Sizes[VAR_5])) return VAR_0;


    if (VAR_4 ->Offsets[VAR_5] > 0)
        VAR_4 ->Offsets[VAR_5] += VAR_6;
    return VAR_1;
}
