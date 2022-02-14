
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int total_cost; int param_info; scalar_t__ parallel_workers; int pathkeys; int pathtarget; TYPE_1__* parent; int pathtype; int type; } ;
struct TYPE_8__ {TYPE_4__ path; int * bitmapqual; } ;
struct TYPE_7__ {int relid; int reltarget; } ;
typedef int Relids ;
typedef TYPE_1__ RelOptInfo ;
typedef int PlannerInfo ;
typedef int Path ;
typedef int Cost ;
typedef TYPE_2__ BitmapHeapPath ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_4__*,int *,TYPE_1__*,int ,int *,int ) ;
 int FUNC_1 (int *,TYPE_1__*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ) ;

__attribute__((used)) static Cost
FUNC_4(PlannerInfo *VAR_3, RelOptInfo *VAR_4, Path *VAR_5)
{
 BitmapHeapPath VAR_6;
 Relids VAR_7;


 VAR_7 = FUNC_2(VAR_5);


 VAR_6.path.type = VAR_1;
 VAR_6.path.pathtype = VAR_2;
 VAR_6.path.parent = VAR_4;
 VAR_6.path.pathtarget = VAR_4->reltarget;
 VAR_6.path.param_info = FUNC_1(VAR_3, VAR_4,
               VAR_7);
 VAR_6.path.pathkeys = VAR_0;
 VAR_6.bitmapqual = VAR_5;





 VAR_6.path.parallel_workers = 0;
 FUNC_0(&VAR_6.path, VAR_3, VAR_4,
        VAR_6.path.param_info,
        VAR_5,
        FUNC_3(VAR_3, VAR_4->relid, VAR_7));

 return VAR_6.path.total_cost;
}
