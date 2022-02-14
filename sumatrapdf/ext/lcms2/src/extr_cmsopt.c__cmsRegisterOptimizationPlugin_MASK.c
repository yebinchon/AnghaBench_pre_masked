
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * OptimizePtr; } ;
typedef TYPE_1__ cmsPluginOptimization ;
typedef int cmsPluginBase ;
typedef int cmsContext ;
typedef int cmsBool ;
struct TYPE_5__ {TYPE_3__* OptimizationCollection; } ;
typedef TYPE_2__ _cmsOptimizationPluginChunkType ;
struct TYPE_6__ {struct TYPE_6__* Next; int * OptimizePtr; } ;
typedef TYPE_3__ _cmsOptimizationCollection ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int) ;

cmsBool FUNC_2(cmsContext VAR_3, cmsPluginBase* VAR_4)
{
    cmsPluginOptimization* VAR_5 = (cmsPluginOptimization*) VAR_4;
    _cmsOptimizationPluginChunkType* VAR_6 = ( _cmsOptimizationPluginChunkType*) FUNC_0(VAR_3, VAR_1);
    _cmsOptimizationCollection* VAR_7;

    if (VAR_4 == ((void*)0)) {

        VAR_6->OptimizationCollection = ((void*)0);
        return VAR_2;
    }


    if (VAR_5 ->OptimizePtr == ((void*)0)) return VAR_0;

    VAR_7 = (_cmsOptimizationCollection*) FUNC_1(VAR_3, sizeof(_cmsOptimizationCollection));
    if (VAR_7 == ((void*)0)) return VAR_0;


    VAR_7 ->OptimizePtr = VAR_5 ->OptimizePtr;


    VAR_7 ->Next = VAR_6->OptimizationCollection;


    VAR_6 ->OptimizationCollection = VAR_7;


    return VAR_2;
}
