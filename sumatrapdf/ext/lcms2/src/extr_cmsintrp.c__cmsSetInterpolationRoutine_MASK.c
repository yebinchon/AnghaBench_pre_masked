
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int * Lerp16; } ;
struct TYPE_6__ {TYPE_3__ Interpolation; int dwFlags; int nOutputs; int nInputs; } ;
typedef TYPE_1__ cmsInterpParams ;
typedef int cmsContext ;
typedef int cmsBool ;
struct TYPE_7__ {TYPE_3__ (* Interpolators ) (int ,int ,int ,int ) ;} ;
typedef TYPE_2__ _cmsInterpPluginChunkType ;


 TYPE_3__ FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 TYPE_3__ FUNC_2 (int ,int ,int ,int ) ;

cmsBool FUNC_3(cmsContext VAR_3, cmsInterpParams* VAR_4)
{
    _cmsInterpPluginChunkType* VAR_5 = (_cmsInterpPluginChunkType*) FUNC_1(VAR_3, VAR_1);

    VAR_4 ->Interpolation.Lerp16 = ((void*)0);


    if (VAR_5 ->Interpolators != ((void*)0))
        VAR_4 ->Interpolation = VAR_5->Interpolators(VAR_3, VAR_4 -> nInputs, VAR_4 ->nOutputs, VAR_4 ->dwFlags);



    if (VAR_4 ->Interpolation.Lerp16 == ((void*)0))
        VAR_4 ->Interpolation = FUNC_0(VAR_4 ->nInputs, VAR_4 ->nOutputs, VAR_4 ->dwFlags);


    if (VAR_4 ->Interpolation.Lerp16 == ((void*)0)) {
            return VAR_0;
    }

    return VAR_2;
}
