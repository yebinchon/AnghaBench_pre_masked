
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_17__ {int plan; } ;
struct TYPE_18__ {TYPE_2__ scan; } ;
typedef TYPE_3__ WorkTableScan ;
struct TYPE_21__ {scalar_t__ param_info; TYPE_1__* parent; } ;
struct TYPE_20__ {scalar_t__ wt_param_id; struct TYPE_20__* parent_root; } ;
struct TYPE_19__ {scalar_t__ rtekind; int self_reference; scalar_t__ ctelevelsup; int ctename; } ;
struct TYPE_16__ {scalar_t__ relid; } ;
typedef TYPE_4__ RangeTblEntry ;
typedef TYPE_5__ PlannerInfo ;
typedef TYPE_6__ Path ;
typedef int Node ;
typedef int List ;
typedef scalar_t__ Index ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,TYPE_6__*) ;
 int FUNC_2 (int ,char*,int ) ;
 int * FUNC_3 (int *,int) ;
 TYPE_3__* FUNC_4 (int *,int *,scalar_t__,scalar_t__) ;
 int * FUNC_5 (TYPE_5__*,int *) ;
 TYPE_4__* FUNC_6 (scalar_t__,TYPE_5__*) ;
 scalar_t__ FUNC_7 (TYPE_5__*,int *) ;

__attribute__((used)) static WorkTableScan *
FUNC_8(PlannerInfo *VAR_2, Path *VAR_3,
        List *VAR_4, List *VAR_5)
{
 WorkTableScan *VAR_6;
 Index VAR_7 = VAR_3->parent->relid;
 RangeTblEntry *VAR_8;
 Index VAR_9;
 PlannerInfo *VAR_10;

 FUNC_0(VAR_7 > 0);
 VAR_8 = FUNC_6(VAR_7, VAR_2);
 FUNC_0(VAR_8->rtekind == VAR_1);
 FUNC_0(VAR_8->self_reference);






 VAR_9 = VAR_8->ctelevelsup;
 if (VAR_9 == 0)
  FUNC_2(VAR_0, "bad levelsup for CTE \"%s\"", VAR_8->ctename);
 VAR_9--;
 VAR_10 = VAR_2;
 while (VAR_9-- > 0)
 {
  VAR_10 = VAR_10->parent_root;
  if (!VAR_10)
   FUNC_2(VAR_0, "bad levelsup for CTE \"%s\"", VAR_8->ctename);
 }
 if (VAR_10->wt_param_id < 0)
  FUNC_2(VAR_0, "could not find param ID for CTE \"%s\"", VAR_8->ctename);


 VAR_5 = FUNC_5(VAR_2, VAR_5);


 VAR_5 = FUNC_3(VAR_5, 0);


 if (VAR_3->param_info)
 {
  VAR_5 = (List *)
   FUNC_7(VAR_2, (Node *) VAR_5);
 }

 VAR_6 = FUNC_4(VAR_4, VAR_5, VAR_7,
           VAR_10->wt_param_id);

 FUNC_1(&VAR_6->scan.plan, VAR_3);

 return VAR_6;
}
