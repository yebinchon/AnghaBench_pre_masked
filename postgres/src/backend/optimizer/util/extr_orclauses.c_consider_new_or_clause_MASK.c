
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int relids; int baserestrict_min_security; int baserestrictinfo; } ;
struct TYPE_10__ {double norm_selec; int clause_relids; int security_level; } ;
struct TYPE_9__ {int lhs_strict; int delay_upper_joins; int semi_can_btree; int semi_can_hash; void* semi_rhs_exprs; void* semi_operators; int jointype; int min_righthand; int syn_righthand; int min_lefthand; int syn_lefthand; int type; } ;
typedef TYPE_1__ SpecialJoinInfo ;
typedef double Selectivity ;
typedef TYPE_2__ RestrictInfo ;
typedef TYPE_3__ RelOptInfo ;
typedef int PlannerInfo ;
typedef int Node ;
typedef int Expr ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 void* VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 double FUNC_2 (int *,int *,int ,int ,TYPE_1__*) ;
 int FUNC_3 (int ,TYPE_2__*) ;
 TYPE_2__* FUNC_4 (int *,int,int,int,int ,int *,int *,int *) ;

__attribute__((used)) static void
FUNC_5(PlannerInfo *VAR_3, RelOptInfo *VAR_4,
        Expr *VAR_5, RestrictInfo *VAR_6)
{
 RestrictInfo *VAR_7;
 Selectivity VAR_8,
    VAR_9;





 VAR_7 = FUNC_4(VAR_5,
         1,
         0,
         0,
         VAR_6->security_level,
         ((void*)0),
         ((void*)0),
         ((void*)0));






 VAR_8 = FUNC_2(VAR_3, (Node *) VAR_7,
          0, VAR_0, ((void*)0));
 if (VAR_8 > 0.9)
  return;




 VAR_4->baserestrictinfo = FUNC_3(VAR_4->baserestrictinfo, VAR_7);
 VAR_4->baserestrict_min_security = FUNC_0(VAR_4->baserestrict_min_security,
           VAR_7->security_level);
 if (VAR_8 > 0)
 {
  SpecialJoinInfo VAR_10;





  VAR_10.type = VAR_2;
  VAR_10.min_lefthand = FUNC_1(VAR_6->clause_relids,
            VAR_4->relids);
  VAR_10.min_righthand = VAR_4->relids;
  VAR_10.syn_lefthand = VAR_10.min_lefthand;
  VAR_10.syn_righthand = VAR_10.min_righthand;
  VAR_10.jointype = VAR_0;

  VAR_10.lhs_strict = 0;
  VAR_10.delay_upper_joins = 0;
  VAR_10.semi_can_btree = 0;
  VAR_10.semi_can_hash = 0;
  VAR_10.semi_operators = VAR_1;
  VAR_10.semi_rhs_exprs = VAR_1;


  VAR_9 = FUNC_2(VAR_3, (Node *) VAR_6,
          0, VAR_0, &VAR_10);


  VAR_6->norm_selec = VAR_9 / VAR_8;

  if (VAR_6->norm_selec > 1)
   VAR_6->norm_selec = 1;

 }
}
