
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_12__ ;


struct TYPE_17__ {int query_level; int all_baserels; } ;
struct TYPE_16__ {TYPE_1__* tablesample; } ;
struct TYPE_15__ {int lateral_relids; } ;
struct TYPE_14__ {int tsmhandler; } ;
struct TYPE_13__ {int repeatable_across_scans; } ;
typedef int Relids ;
typedef TYPE_2__ RelOptInfo ;
typedef TYPE_3__ RangeTblEntry ;
typedef TYPE_4__ PlannerInfo ;
typedef int Path ;


 scalar_t__ VAR_0 ;
 TYPE_12__* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,int *) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int *) ;
 int * FUNC_4 (TYPE_4__*,TYPE_2__*,int ) ;

__attribute__((used)) static void
FUNC_5(PlannerInfo *VAR_1, RelOptInfo *VAR_2, RangeTblEntry *VAR_3)
{
 Relids VAR_4;
 Path *VAR_5;






 VAR_4 = VAR_2->lateral_relids;


 VAR_5 = FUNC_4(VAR_1, VAR_2, VAR_4);
 if ((VAR_1->query_level > 1 ||
   FUNC_2(VAR_1->all_baserels) != VAR_0) &&
  !(FUNC_0(VAR_3->tablesample->tsmhandler)->repeatable_across_scans))
 {
  VAR_5 = (Path *) FUNC_3(VAR_2, VAR_5);
 }

 FUNC_1(VAR_2, VAR_5);


}
