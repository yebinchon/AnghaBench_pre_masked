
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_19__ {int relids; } ;
struct TYPE_18__ {int lhs_strict; int delay_upper_joins; int semi_can_btree; int semi_can_hash; void* semi_rhs_exprs; void* semi_operators; int jointype; int syn_righthand; int syn_lefthand; int min_righthand; int min_lefthand; int type; } ;
typedef TYPE_1__ SpecialJoinInfo ;
typedef int Relids ;
typedef TYPE_2__ RelOptInfo ;
typedef int PlannerInfo ;
typedef int List ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 TYPE_2__* FUNC_4 (int *,int ,TYPE_2__*,TYPE_2__*,TYPE_1__*,int **) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int *,TYPE_2__*,TYPE_2__*,int ,TYPE_1__**,int*) ;
 int FUNC_7 (int *,TYPE_2__*,TYPE_2__*,TYPE_2__*,TYPE_1__*,int *) ;

RelOptInfo *
FUNC_8(PlannerInfo *VAR_3, RelOptInfo *VAR_4, RelOptInfo *VAR_5)
{
 Relids VAR_6;
 SpecialJoinInfo *VAR_7;
 bool VAR_8;
 SpecialJoinInfo VAR_9;
 RelOptInfo *VAR_10;
 List *VAR_11;


 FUNC_0(!FUNC_2(VAR_4->relids, VAR_5->relids));


 VAR_6 = FUNC_3(VAR_4->relids, VAR_5->relids);


 if (!FUNC_6(VAR_3, VAR_4, VAR_5, VAR_6,
        &VAR_7, &VAR_8))
 {

  FUNC_1(VAR_6);
  return ((void*)0);
 }


 if (VAR_8)
 {
  RelOptInfo *VAR_12 = VAR_4;

  VAR_4 = VAR_5;
  VAR_5 = VAR_12;
 }






 if (VAR_7 == ((void*)0))
 {
  VAR_7 = &VAR_9;
  VAR_7->type = VAR_2;
  VAR_7->min_lefthand = VAR_4->relids;
  VAR_7->min_righthand = VAR_5->relids;
  VAR_7->syn_lefthand = VAR_4->relids;
  VAR_7->syn_righthand = VAR_5->relids;
  VAR_7->jointype = VAR_0;

  VAR_7->lhs_strict = 0;
  VAR_7->delay_upper_joins = 0;
  VAR_7->semi_can_btree = 0;
  VAR_7->semi_can_hash = 0;
  VAR_7->semi_operators = VAR_1;
  VAR_7->semi_rhs_exprs = VAR_1;
 }





 VAR_10 = FUNC_4(VAR_3, VAR_6, VAR_4, VAR_5, VAR_7,
        &VAR_11);





 if (FUNC_5(VAR_10))
 {
  FUNC_1(VAR_6);
  return VAR_10;
 }


 FUNC_7(VAR_3, VAR_4, VAR_5, VAR_10, VAR_7,
        VAR_11);

 FUNC_1(VAR_6);

 return VAR_10;
}
