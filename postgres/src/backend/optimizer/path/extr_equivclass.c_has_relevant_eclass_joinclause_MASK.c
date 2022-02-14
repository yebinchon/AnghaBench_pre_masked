
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int ec_relids; int ec_members; } ;
struct TYPE_8__ {int eq_classes; } ;
struct TYPE_7__ {int relids; } ;
typedef TYPE_1__ RelOptInfo ;
typedef TYPE_2__ PlannerInfo ;
typedef TYPE_3__ EquivalenceClass ;
typedef int Bitmapset ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int) ;
 int * FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int) ;

bool
FUNC_5(PlannerInfo *VAR_0, RelOptInfo *VAR_1)
{
 Bitmapset *VAR_2;
 int VAR_3;


 VAR_2 = FUNC_2(VAR_0, VAR_1->relids);

 VAR_3 = -1;
 while ((VAR_3 = FUNC_1(VAR_2, VAR_3)) >= 0)
 {
  EquivalenceClass *VAR_4 = (EquivalenceClass *) FUNC_4(VAR_0->eq_classes,
                VAR_3);





  if (FUNC_3(VAR_4->ec_members) <= 1)
   continue;





  if (!FUNC_0(VAR_4->ec_relids, VAR_1->relids))
   return 1;
 }

 return 0;
}
