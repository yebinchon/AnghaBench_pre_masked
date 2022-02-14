
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * InterpolatorsFactory; } ;
typedef TYPE_1__ cmsPluginInterpolation ;
typedef int cmsPluginBase ;
typedef int cmsContext ;
typedef int cmsBool ;
struct TYPE_4__ {int * Interpolators; } ;
typedef TYPE_2__ _cmsInterpPluginChunkType ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;

cmsBool FUNC_1(cmsContext VAR_2, cmsPluginBase* VAR_3)
{
    cmsPluginInterpolation* VAR_4 = (cmsPluginInterpolation*) VAR_3;
    _cmsInterpPluginChunkType* VAR_5 = (_cmsInterpPluginChunkType*) FUNC_0(VAR_2, VAR_0);

    if (VAR_3 == ((void*)0)) {

        VAR_5 ->Interpolators = ((void*)0);
        return VAR_1;
    }


    VAR_5 ->Interpolators = VAR_4 ->InterpolatorsFactory;
    return VAR_1;
}
