
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_15__ {int plan; } ;
struct TYPE_14__ {int path; int single_copy; int num_workers; int subpath; } ;
struct TYPE_13__ {TYPE_1__* glob; } ;
struct TYPE_12__ {int parallelModeNeeded; } ;
typedef TYPE_2__ PlannerInfo ;
typedef int Plan ;
typedef int List ;
typedef TYPE_3__ GatherPath ;
typedef TYPE_4__ Gather ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int * FUNC_1 (TYPE_2__*,int *) ;
 int FUNC_2 (int *,int *) ;
 int * FUNC_3 (TYPE_2__*,int ,int ) ;
 TYPE_4__* FUNC_4 (int *,int ,int ,int ,int ,int *) ;

__attribute__((used)) static Gather *
FUNC_5(PlannerInfo *VAR_2, GatherPath *VAR_3)
{
 Gather *VAR_4;
 Plan *VAR_5;
 List *VAR_6;





 VAR_5 = FUNC_3(VAR_2, VAR_3->subpath, VAR_0);

 VAR_6 = FUNC_1(VAR_2, &VAR_3->path);

 VAR_4 = FUNC_4(VAR_6,
         VAR_1,
         VAR_3->num_workers,
         FUNC_0(VAR_2),
         VAR_3->single_copy,
         VAR_5);

 FUNC_2(&VAR_4->plan, &VAR_3->path);


 VAR_2->glob->parallelModeNeeded = 1;

 return VAR_4;
}
