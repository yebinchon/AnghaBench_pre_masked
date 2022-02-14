
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int plan; } ;
struct TYPE_6__ {int firstFlag; int flagColIdx; int distinctList; int strategy; int cmd; int numGroups; int subpath; } ;
typedef TYPE_1__ SetOpPath ;
typedef TYPE_2__ SetOp ;
typedef int PlannerInfo ;
typedef int Plan ;
typedef int Path ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,double) ;
 int FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *,int ,int) ;
 TYPE_2__* FUNC_3 (int ,int ,int *,int ,int ,int ,long) ;

__attribute__((used)) static SetOp *
FUNC_4(PlannerInfo *VAR_2, SetOpPath *VAR_3, int VAR_4)
{
 SetOp *VAR_5;
 Plan *VAR_6;
 long VAR_7;





 VAR_6 = FUNC_2(VAR_2, VAR_3->subpath,
          VAR_4 | VAR_0);


 VAR_7 = (long) FUNC_0(VAR_3->numGroups, (double) VAR_1);

 VAR_5 = FUNC_3(VAR_3->cmd,
       VAR_3->strategy,
       VAR_6,
       VAR_3->distinctList,
       VAR_3->flagColIdx,
       VAR_3->firstFlag,
       VAR_7);

 FUNC_1(&VAR_5->plan, (Path *) VAR_3);

 return VAR_5;
}
