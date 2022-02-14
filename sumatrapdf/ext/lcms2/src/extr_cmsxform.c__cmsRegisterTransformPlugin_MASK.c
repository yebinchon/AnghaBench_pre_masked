
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int * xform; } ;
struct TYPE_6__ {int ExpectedVersion; } ;
struct TYPE_8__ {TYPE_2__ factories; TYPE_1__ base; } ;
typedef TYPE_3__ cmsPluginTransform ;
typedef int cmsPluginBase ;
typedef int cmsContext ;
typedef void* cmsBool ;
struct TYPE_9__ {TYPE_5__* TransformCollection; } ;
typedef TYPE_4__ _cmsTransformPluginChunkType ;
struct TYPE_10__ {struct TYPE_10__* Next; int * Factory; void* OldXform; } ;
typedef TYPE_5__ _cmsTransformCollection ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int) ;

cmsBool FUNC_2(cmsContext VAR_3, cmsPluginBase* VAR_4)
{
    cmsPluginTransform* VAR_5 = (cmsPluginTransform*) VAR_4;
    _cmsTransformCollection* VAR_6;
    _cmsTransformPluginChunkType* VAR_7 = ( _cmsTransformPluginChunkType*) FUNC_0(VAR_3,VAR_2);

    if (VAR_4 == ((void*)0)) {


        VAR_7->TransformCollection = ((void*)0);
        return VAR_1;
    }


    if (VAR_5->factories.xform == ((void*)0)) return VAR_0;


    VAR_6 = (_cmsTransformCollection*) FUNC_1(VAR_3, sizeof(_cmsTransformCollection));
    if (VAR_6 == ((void*)0)) return VAR_0;


    if (VAR_5->base.ExpectedVersion < 2080) {

           VAR_6->OldXform = VAR_1;
    }
    else
           VAR_6->OldXform = VAR_0;


    VAR_6->Factory = VAR_5->factories.xform;


    VAR_6 ->Next = VAR_7->TransformCollection;
    VAR_7->TransformCollection = VAR_6;


    return VAR_1;
}
