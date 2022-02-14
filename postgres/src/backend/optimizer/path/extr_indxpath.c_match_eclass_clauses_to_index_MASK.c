
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int indexcol; TYPE_2__* index; } ;
typedef TYPE_1__ ec_member_matches_arg ;
struct TYPE_8__ {int lateral_referencers; int has_eclass_joins; } ;
struct TYPE_7__ {int nkeycolumns; TYPE_5__* rel; } ;
typedef int PlannerInfo ;
typedef int List ;
typedef TYPE_2__ IndexOptInfo ;
typedef int IndexClauseSet ;


 int VAR_0 ;
 int * FUNC_0 (int *,TYPE_5__*,int ,void*,int ) ;
 int FUNC_1 (int *,int *,TYPE_2__*,int *) ;

__attribute__((used)) static void
FUNC_2(PlannerInfo *VAR_1, IndexOptInfo *VAR_2,
         IndexClauseSet *VAR_3)
{
 int VAR_4;


 if (!VAR_2->rel->has_eclass_joins)
  return;

 for (VAR_4 = 0; VAR_4 < VAR_2->nkeycolumns; VAR_4++)
 {
  ec_member_matches_arg VAR_5;
  List *VAR_6;


  VAR_5.index = VAR_2;
  VAR_5.indexcol = VAR_4;
  VAR_6 = FUNC_0(VAR_1,
               VAR_2->rel,
               VAR_0,
               (void *) &VAR_5,
               VAR_2->rel->lateral_referencers);






  FUNC_1(VAR_1, VAR_6, VAR_2, VAR_3);
 }
}
