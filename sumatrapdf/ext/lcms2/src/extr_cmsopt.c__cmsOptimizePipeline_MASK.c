
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int cmsUInt32Number ;
struct TYPE_11__ {int * Elements; } ;
typedef TYPE_1__ cmsPipeline ;
typedef int cmsContext ;
typedef int cmsBool ;
struct TYPE_12__ {TYPE_3__* OptimizationCollection; } ;
typedef TYPE_2__ _cmsOptimizationPluginChunkType ;
struct TYPE_13__ {scalar_t__ (* OptimizePtr ) (int ,TYPE_1__**,int,int*,int*,int*) ;struct TYPE_13__* Next; } ;
typedef TYPE_3__ _cmsOptimizationCollection ;


 TYPE_3__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,TYPE_1__**,int,int*,int*,int*) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,TYPE_1__*,int ,void*,int *,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_4 (int ,TYPE_1__**,int,int*,int*,int*) ;
 scalar_t__ FUNC_5 (int ,TYPE_1__**,int,int*,int*,int*) ;

cmsBool FUNC_6(cmsContext VAR_7,
                             cmsPipeline** VAR_8,
                             cmsUInt32Number VAR_9,
                             cmsUInt32Number* VAR_10,
                             cmsUInt32Number* VAR_11,
                             cmsUInt32Number* VAR_12)
{
    _cmsOptimizationPluginChunkType* VAR_13 = ( _cmsOptimizationPluginChunkType*) FUNC_2(VAR_7, VAR_3);
    _cmsOptimizationCollection* VAR_14;
    cmsBool VAR_15 = VAR_1;


    if (*VAR_12 & VAR_5) {

        FUNC_1(VAR_7, *VAR_8);
        return FUNC_0(VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12);
    }


    if ((*VAR_8) ->Elements == ((void*)0)) {
        FUNC_3(VAR_7, *VAR_8, VAR_2, (void*) *VAR_8, ((void*)0), ((void*)0));
        return VAR_4;
    }


    VAR_15 = FUNC_1(VAR_7, *VAR_8);


    if ((*VAR_8) ->Elements == ((void*)0)) {
        FUNC_3(VAR_7, *VAR_8, VAR_2, (void*) *VAR_8, ((void*)0), ((void*)0));
        return VAR_4;
    }


    if (*VAR_12 & VAR_6)
        return VAR_1;


    for (VAR_14 = VAR_13->OptimizationCollection;
         VAR_14 != ((void*)0);
         VAR_14 = VAR_14 ->Next) {


            if (VAR_14 ->OptimizePtr(VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12)) {

                return VAR_4;
            }
    }


    for (VAR_14 = VAR_0;
         VAR_14 != ((void*)0);
         VAR_14 = VAR_14 ->Next) {

            if (VAR_14 ->OptimizePtr(VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12)) {

                return VAR_4;
            }
    }


    return VAR_15;
}
