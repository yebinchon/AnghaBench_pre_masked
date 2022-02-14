
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int ec_members; int ec_relids; } ;
struct TYPE_9__ {int eq_classes; } ;
struct TYPE_8__ {int relids; } ;
typedef TYPE_1__ RelOptInfo ;
typedef TYPE_2__ PlannerInfo ;
typedef TYPE_3__ EquivalenceClass ;
typedef int Bitmapset ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int ,int ) ;
 int * FUNC_3 (TYPE_2__*,int ,int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int) ;

bool
FUNC_6(PlannerInfo *VAR_0,
        RelOptInfo *VAR_1, RelOptInfo *VAR_2)
{
 Bitmapset *VAR_3;
 int VAR_4;


 VAR_3 = FUNC_3(VAR_0, VAR_1->relids,
            VAR_2->relids);

 VAR_4 = -1;
 while ((VAR_4 = FUNC_1(VAR_3, VAR_4)) >= 0)
 {
  EquivalenceClass *VAR_5 = (EquivalenceClass *) FUNC_5(VAR_0->eq_classes,
                VAR_4);





  FUNC_0(FUNC_2(VAR_1->relids, VAR_5->ec_relids));
  FUNC_0(FUNC_2(VAR_2->relids, VAR_5->ec_relids));





  if (FUNC_4(VAR_5->ec_members) <= 1)
   continue;
  return 1;
 }

 return 0;
}
