
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
cmsBool FUNC_1(cmsContext VAR_2, cmsPipeline* VAR_3, cmsStageSignature VAR_4)
{
    cmsStage** VAR_5 = &VAR_3 ->Elements;
    cmsBool VAR_6 = VAR_0;

    while (*VAR_5 != ((void*)0)) {

        if ((*VAR_5) ->Implements == VAR_4) {
            FUNC_0(VAR_2, VAR_5);
            VAR_6 = VAR_1;
        }
        else
            VAR_5 = &((*VAR_5) -> Next);
    }

    return VAR_6;
}
