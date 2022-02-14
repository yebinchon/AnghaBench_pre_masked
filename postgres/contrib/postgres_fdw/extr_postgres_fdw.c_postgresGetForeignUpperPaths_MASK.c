
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int UpperRelationKind ;
struct TYPE_12__ {int pushdown_safe; int stage; } ;
struct TYPE_11__ {TYPE_2__* fdw_private; } ;
typedef TYPE_1__ RelOptInfo ;
typedef int PlannerInfo ;
typedef TYPE_2__ PgFdwRelationInfo ;
typedef int GroupPathExtraData ;
typedef int FinalPathExtraData ;


 int VAR_0 ;



 int FUNC_0 (int *,TYPE_1__*,TYPE_1__*,int *) ;
 int FUNC_1 (int *,TYPE_1__*,TYPE_1__*,int *) ;
 int FUNC_2 (int *,TYPE_1__*,TYPE_1__*) ;
 int FUNC_3 (int ,char*,int) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static void
FUNC_5(PlannerInfo *VAR_1, UpperRelationKind VAR_2,
        RelOptInfo *VAR_3, RelOptInfo *VAR_4,
        void *VAR_5)
{
 PgFdwRelationInfo *VAR_6;





 if (!VAR_3->fdw_private ||
  !((PgFdwRelationInfo *) VAR_3->fdw_private)->pushdown_safe)
  return;


 if ((VAR_2 != 129 &&
   VAR_2 != 128 &&
   VAR_2 != 130) ||
  VAR_4->fdw_private)
  return;

 VAR_6 = (PgFdwRelationInfo *) FUNC_4(sizeof(PgFdwRelationInfo));
 VAR_6->pushdown_safe = 0;
 VAR_6->stage = VAR_2;
 VAR_4->fdw_private = VAR_6;

 switch (VAR_2)
 {
  case 129:
   FUNC_1(VAR_1, VAR_3, VAR_4,
            (GroupPathExtraData *) VAR_5);
   break;
  case 128:
   FUNC_2(VAR_1, VAR_3, VAR_4);
   break;
  case 130:
   FUNC_0(VAR_1, VAR_3, VAR_4,
         (FinalPathExtraData *) VAR_5);
   break;
  default:
   FUNC_3(VAR_0, "unexpected upper relation: %d", (int) VAR_2);
   break;
 }
}
