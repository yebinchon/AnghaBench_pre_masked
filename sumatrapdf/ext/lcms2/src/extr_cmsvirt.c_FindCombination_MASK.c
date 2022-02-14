
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ cmsUInt32Number ;
typedef scalar_t__ cmsTagSignature ;
typedef int cmsPipeline ;
typedef int cmsContext ;
typedef int cmsBool ;
struct TYPE_5__ {int IsV4; scalar_t__ RequiredTag; } ;
typedef TYPE_1__ cmsAllowedLUT ;


 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_0 (int ,TYPE_1__ const*,int const*) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static
const cmsAllowedLUT* FUNC_1(cmsContext VAR_2, const cmsPipeline* VAR_3, cmsBool VAR_4, cmsTagSignature VAR_5)
{
    cmsUInt32Number VAR_6;

    for (VAR_6=0; VAR_6 < VAR_1; VAR_6++) {

        const cmsAllowedLUT* VAR_7 = VAR_0 + VAR_6;

        if (VAR_4 ^ VAR_7 -> IsV4) continue;
        if ((VAR_7 ->RequiredTag != 0) && (VAR_7 ->RequiredTag != VAR_5)) continue;

        if (FUNC_0(VAR_2, VAR_7, VAR_3)) return VAR_7;
    }

    return ((void*)0);
}
