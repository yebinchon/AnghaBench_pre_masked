
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int * indexclauses; } ;
struct TYPE_11__ {int nkeycolumns; } ;
typedef int RelOptInfo ;
typedef int PlannerInfo ;
typedef int List ;
typedef TYPE_1__ IndexOptInfo ;
typedef TYPE_2__ IndexClauseSet ;


 int * VAR_0 ;
 int FUNC_0 (int *,int *,TYPE_1__*,TYPE_2__*,TYPE_2__*,TYPE_2__*,int **,int ,int,int **) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(PlannerInfo *VAR_1, RelOptInfo *VAR_2,
       IndexOptInfo *VAR_3,
       IndexClauseSet *VAR_4,
       IndexClauseSet *VAR_5,
       IndexClauseSet *VAR_6,
       List **VAR_7)
{
 int VAR_8 = 0;
 List *VAR_9 = VAR_0;
 int VAR_10;
 for (VAR_10 = 0; VAR_10 < VAR_3->nkeycolumns; VAR_10++)
 {

  VAR_8 += FUNC_1(VAR_5->indexclauses[VAR_10]);
  FUNC_0(VAR_1, VAR_2, VAR_3,
            VAR_4, VAR_5, VAR_6,
            VAR_7,
            VAR_5->indexclauses[VAR_10],
            VAR_8,
            &VAR_9);

  VAR_8 += FUNC_1(VAR_6->indexclauses[VAR_10]);
  FUNC_0(VAR_1, VAR_2, VAR_3,
            VAR_4, VAR_5, VAR_6,
            VAR_7,
            VAR_6->indexclauses[VAR_10],
            VAR_8,
            &VAR_9);
 }
}
