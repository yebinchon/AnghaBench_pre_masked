
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ cmsStageSignature ;
struct TYPE_5__ {scalar_t__ Implements; struct TYPE_5__* Next; } ;
typedef TYPE_1__ cmsStage ;
struct TYPE_6__ {TYPE_1__* Elements; } ;
typedef TYPE_2__ cmsPipeline ;
typedef int cmsContext ;
typedef int cmsBool ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_1__**) ;

__attribute__((used)) static
cmsBool FUNC_1(cmsContext VAR_2, cmsPipeline* VAR_3, cmsStageSignature VAR_4, cmsStageSignature VAR_5)
{
    cmsStage** VAR_6;
    cmsStage** VAR_7;
    cmsBool VAR_8 = VAR_0;

    VAR_6 = &VAR_3 ->Elements;
    if (*VAR_6 == ((void*)0)) return VAR_8;

    while (*VAR_6 != ((void*)0)) {

        VAR_7 = &((*VAR_6) -> Next);
        if (*VAR_7 == ((void*)0)) return VAR_8;

        if ((*VAR_6) ->Implements == VAR_4 && (*VAR_7) ->Implements == VAR_5) {
            FUNC_0(VAR_2, VAR_7);
            FUNC_0(VAR_2, VAR_6);
            VAR_8 = VAR_1;
        }
        else
            VAR_6 = &((*VAR_6) -> Next);
    }

    return VAR_8;
}
