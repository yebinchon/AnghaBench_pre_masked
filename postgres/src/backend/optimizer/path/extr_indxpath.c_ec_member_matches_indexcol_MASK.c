
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int indexcol; TYPE_2__* index; } ;
typedef TYPE_1__ ec_member_matches_arg ;
struct TYPE_11__ {int ec_collation; int ec_opfamilies; } ;
struct TYPE_10__ {scalar_t__ em_expr; } ;
struct TYPE_9__ {int nkeycolumns; scalar_t__ relam; int * indexcollations; int * opfamily; } ;
typedef int RelOptInfo ;
typedef int PlannerInfo ;
typedef int Oid ;
typedef int Node ;
typedef TYPE_2__ IndexOptInfo ;
typedef TYPE_3__ EquivalenceMember ;
typedef TYPE_4__ EquivalenceClass ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,int,TYPE_2__*) ;

__attribute__((used)) static bool
FUNC_4(PlannerInfo *VAR_1, RelOptInfo *VAR_2,
         EquivalenceClass *VAR_3, EquivalenceMember *VAR_4,
         void *VAR_5)
{
 IndexOptInfo *VAR_6 = ((ec_member_matches_arg *) VAR_5)->index;
 int VAR_7 = ((ec_member_matches_arg *) VAR_5)->indexcol;
 Oid VAR_8;
 Oid VAR_9;

 FUNC_0(VAR_7 < VAR_6->nkeycolumns);

 VAR_8 = VAR_6->opfamily[VAR_7];
 VAR_9 = VAR_6->indexcollations[VAR_7];
 if (VAR_6->relam == VAR_0 &&
  !FUNC_2(VAR_3->ec_opfamilies, VAR_8))
  return 0;


 if (!FUNC_1(VAR_9, VAR_3->ec_collation))
  return 0;

 return FUNC_3((Node *) VAR_4->em_expr, VAR_7, VAR_6);
}
