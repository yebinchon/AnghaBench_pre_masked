
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int cmsUInt32Number ;
struct TYPE_4__ {int nFunctions; int ParameterCount; int FunctionTypes; int Evaluator; } ;
typedef TYPE_1__ cmsPluginParametricCurves ;
typedef int cmsPluginBase ;
typedef int cmsContext ;
typedef int cmsBool ;
struct TYPE_5__ {int nFunctions; struct TYPE_5__* Next; int ParameterCount; int FunctionTypes; int Evaluator; } ;
typedef TYPE_2__ _cmsParametricCurvesCollection ;
struct TYPE_6__ {TYPE_2__* ParametricCurves; } ;
typedef TYPE_3__ _cmsCurvesPluginChunkType ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ,int) ;

cmsBool FUNC_3(cmsContext VAR_4, cmsPluginBase* VAR_5)
{
    _cmsCurvesPluginChunkType* VAR_6 = ( _cmsCurvesPluginChunkType*) FUNC_0(VAR_4, VAR_0);
    cmsPluginParametricCurves* VAR_7 = (cmsPluginParametricCurves*) VAR_5;
    _cmsParametricCurvesCollection* VAR_8;

    if (VAR_5 == ((void*)0)) {

          VAR_6 -> ParametricCurves = ((void*)0);
          return VAR_3;
    }

    VAR_8 = (_cmsParametricCurvesCollection*) FUNC_1(VAR_4, sizeof(_cmsParametricCurvesCollection));
    if (VAR_8 == ((void*)0)) return VAR_1;


    VAR_8 ->Evaluator = VAR_7 ->Evaluator;
    VAR_8 ->nFunctions = VAR_7 ->nFunctions;


    if (VAR_8 ->nFunctions > VAR_2)
        VAR_8 ->nFunctions = VAR_2;


    FUNC_2(VAR_8->FunctionTypes, VAR_7 ->FunctionTypes, VAR_8->nFunctions * sizeof(cmsUInt32Number));
    FUNC_2(VAR_8->ParameterCount, VAR_7 ->ParameterCount, VAR_8->nFunctions * sizeof(cmsUInt32Number));


    VAR_8 ->Next = VAR_6->ParametricCurves;
    VAR_6->ParametricCurves = VAR_8;


    return VAR_3;
}
