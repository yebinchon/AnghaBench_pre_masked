
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_16__ {int rows; } ;
struct TYPE_15__ {TYPE_4__* non_recursive_path; struct TYPE_15__* parent_root; } ;
struct TYPE_14__ {scalar_t__ ctelevelsup; int ctename; } ;
struct TYPE_13__ {int lateral_relids; } ;
typedef int Relids ;
typedef TYPE_1__ RelOptInfo ;
typedef TYPE_2__ RangeTblEntry ;
typedef TYPE_3__ PlannerInfo ;
typedef TYPE_4__ Path ;
typedef scalar_t__ Index ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_3__*,TYPE_1__*,int ) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (TYPE_3__*,TYPE_1__*,int ) ;

__attribute__((used)) static void
FUNC_4(PlannerInfo *VAR_1, RelOptInfo *VAR_2, RangeTblEntry *VAR_3)
{
 Path *VAR_4;
 PlannerInfo *VAR_5;
 Index VAR_6;
 Relids VAR_7;






 VAR_6 = VAR_3->ctelevelsup;
 if (VAR_6 == 0)
  FUNC_2(VAR_0, "bad levelsup for CTE \"%s\"", VAR_3->ctename);
 VAR_6--;
 VAR_5 = VAR_1;
 while (VAR_6-- > 0)
 {
  VAR_5 = VAR_5->parent_root;
  if (!VAR_5)
   FUNC_2(VAR_0, "bad levelsup for CTE \"%s\"", VAR_3->ctename);
 }
 VAR_4 = VAR_5->non_recursive_path;
 if (!VAR_4)
  FUNC_2(VAR_0, "could not find path for CTE \"%s\"", VAR_3->ctename);


 FUNC_3(VAR_1, VAR_2, VAR_4->rows);







 VAR_7 = VAR_2->lateral_relids;


 FUNC_0(VAR_2, FUNC_1(VAR_1, VAR_2, VAR_7));
}
