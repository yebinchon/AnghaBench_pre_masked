
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ ec_broken; int ec_relids; int ec_members; scalar_t__ ec_has_const; } ;
struct TYPE_14__ {int eq_classes; } ;
struct TYPE_13__ {int relids; int top_parent_relids; } ;
typedef int Relids ;
typedef TYPE_1__ RelOptInfo ;
typedef TYPE_2__ PlannerInfo ;
typedef int List ;
typedef TYPE_3__ EquivalenceClass ;
typedef int Bitmapset ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int * VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int * FUNC_6 (TYPE_2__*,TYPE_3__*,int ,int ,int ,TYPE_1__*) ;
 int * FUNC_7 (TYPE_2__*,TYPE_3__*,int ,int ,int ) ;
 int * FUNC_8 (TYPE_2__*,int ,int ) ;
 int * FUNC_9 (int *,int *) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ,int) ;

List *
FUNC_12(PlannerInfo *VAR_1,
         Relids VAR_2,
         Relids VAR_3,
         RelOptInfo *VAR_4)
{
 List *VAR_5 = VAR_0;
 Relids VAR_6 = VAR_4->relids;
 Relids VAR_7;
 Relids VAR_8;
 Bitmapset *VAR_9;
 int VAR_10;


 if (FUNC_1(VAR_4))
 {
  FUNC_0(!FUNC_2(VAR_4->top_parent_relids));


  VAR_7 = VAR_4->top_parent_relids;

  VAR_8 = FUNC_5(VAR_3, VAR_7);
 }
 else
 {
  VAR_7 = VAR_6;
  VAR_8 = VAR_2;
 }




 VAR_9 = FUNC_8(VAR_1, VAR_4->relids,
            VAR_3);

 VAR_10 = -1;
 while ((VAR_10 = FUNC_3(VAR_9, VAR_10)) >= 0)
 {
  EquivalenceClass *VAR_11 = (EquivalenceClass *) FUNC_11(VAR_1->eq_classes, VAR_10);
  List *VAR_12 = VAR_0;


  if (VAR_11->ec_has_const)
   continue;


  if (FUNC_10(VAR_11->ec_members) <= 1)
   continue;


  FUNC_0(FUNC_4(VAR_11->ec_relids, VAR_8));

  if (!VAR_11->ec_broken)
   VAR_12 = FUNC_7(VAR_1,
                 VAR_11,
                 VAR_2,
                 VAR_3,
                 VAR_6);


  if (VAR_11->ec_broken)
   VAR_12 = FUNC_6(VAR_1,
                 VAR_11,
                 VAR_8,
                 VAR_3,
                 VAR_7,
                 VAR_4);

  VAR_5 = FUNC_9(VAR_5, VAR_12);
 }

 return VAR_5;
}
