
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {int total_cost; int param_info; scalar_t__ parallel_workers; void* pathkeys; int pathtarget; TYPE_2__* parent; int pathtype; int type; } ;
struct TYPE_10__ {void* pathkeys; int * param_info; int pathtarget; TYPE_2__* parent; int pathtype; int type; } ;
struct TYPE_13__ {int * bitmapquals; TYPE_1__ path; } ;
struct TYPE_12__ {TYPE_6__ path; int * bitmapqual; } ;
struct TYPE_11__ {int relid; int reltarget; } ;
typedef int Relids ;
typedef TYPE_2__ RelOptInfo ;
typedef int PlannerInfo ;
typedef int Path ;
typedef int List ;
typedef int Cost ;
typedef TYPE_3__ BitmapHeapPath ;
typedef TYPE_4__ BitmapAndPath ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_4__*,int *) ;
 int FUNC_1 (TYPE_6__*,int *,TYPE_2__*,int ,int *,int ) ;
 int FUNC_2 (int *,TYPE_2__*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int ) ;

__attribute__((used)) static Cost
FUNC_5(PlannerInfo *VAR_5, RelOptInfo *VAR_6, List *VAR_7)
{
 BitmapAndPath VAR_8;
 BitmapHeapPath VAR_9;
 Relids VAR_10;


 VAR_8.path.type = VAR_2;
 VAR_8.path.pathtype = VAR_1;
 VAR_8.path.parent = VAR_6;
 VAR_8.path.pathtarget = VAR_6->reltarget;
 VAR_8.path.param_info = ((void*)0);
 VAR_8.path.pathkeys = VAR_0;
 VAR_8.bitmapquals = VAR_7;
 FUNC_0(&VAR_8, VAR_5);


 VAR_10 = FUNC_3((Path *) &VAR_8);


 VAR_9.path.type = VAR_3;
 VAR_9.path.pathtype = VAR_4;
 VAR_9.path.parent = VAR_6;
 VAR_9.path.pathtarget = VAR_6->reltarget;
 VAR_9.path.param_info = FUNC_2(VAR_5, VAR_6,
               VAR_10);
 VAR_9.path.pathkeys = VAR_0;
 VAR_9.bitmapqual = (Path *) &VAR_8;





 VAR_9.path.parallel_workers = 0;


 FUNC_1(&VAR_9.path, VAR_5, VAR_6,
        VAR_9.path.param_info,
        (Path *) &VAR_8,
        FUNC_4(VAR_5, VAR_6->relid, VAR_10));

 return VAR_9.path.total_cost;
}
