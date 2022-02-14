
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int * steps; scalar_t__ contradictory; } ;
struct TYPE_11__ {int partnatts; scalar_t__ nparts; int * exprstates; int * planstate; int ppccontext; int * stepcmpfuncs; int partsupfunc; int partcollation; int boundinfo; int strategy; } ;
struct TYPE_10__ {scalar_t__ nparts; TYPE_1__* part_scheme; int boundinfo; int * baserestrictinfo; } ;
struct TYPE_9__ {int partnatts; int partsupfunc; int partcollation; int strategy; } ;
typedef TYPE_2__ RelOptInfo ;
typedef TYPE_3__ PartitionPruneContext ;
typedef int List ;
typedef TYPE_4__ GeneratePruningStepsContext ;
typedef int FmgrInfo ;
typedef int Bitmapset ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (int *,int ,scalar_t__) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_2__*,int *,int ,TYPE_4__*) ;
 int * FUNC_3 (TYPE_3__*,int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int) ;

Bitmapset *
FUNC_6(RelOptInfo *VAR_4)
{
 List *VAR_5 = VAR_4->baserestrictinfo;
 List *VAR_6;
 GeneratePruningStepsContext VAR_7;
 PartitionPruneContext VAR_8;

 FUNC_0(VAR_4->part_scheme != ((void*)0));


 if (VAR_4->nparts == 0)
  return ((void*)0);





 if (!VAR_3 || VAR_5 == VAR_1)
  return FUNC_1(((void*)0), 0, VAR_4->nparts - 1);






 FUNC_2(VAR_4, VAR_5, VAR_2,
      &VAR_7);
 if (VAR_7.contradictory)
  return ((void*)0);
 VAR_6 = VAR_7.steps;


 if (VAR_6 == VAR_1)
  return FUNC_1(((void*)0), 0, VAR_4->nparts - 1);


 VAR_8.strategy = VAR_4->part_scheme->strategy;
 VAR_8.partnatts = VAR_4->part_scheme->partnatts;
 VAR_8.nparts = VAR_4->nparts;
 VAR_8.boundinfo = VAR_4->boundinfo;
 VAR_8.partcollation = VAR_4->part_scheme->partcollation;
 VAR_8.partsupfunc = VAR_4->part_scheme->partsupfunc;
 VAR_8.stepcmpfuncs = (FmgrInfo *) FUNC_5(sizeof(FmgrInfo) *
            VAR_8.partnatts *
            FUNC_4(VAR_6));
 VAR_8.ppccontext = VAR_0;


 VAR_8.planstate = ((void*)0);
 VAR_8.exprstates = ((void*)0);


 return FUNC_3(&VAR_8, VAR_6);
}
