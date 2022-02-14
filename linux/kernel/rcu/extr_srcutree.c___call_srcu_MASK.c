
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct srcu_struct {int srcu_gp_seq; int sda; } ;
struct srcu_data {unsigned long srcu_gp_seq_needed; unsigned long srcu_gp_seq_needed_exp; int mynode; int srcu_cblist; } ;
struct rcu_head {int func; } ;
typedef int rcu_callback_t ;


 scalar_t__ FUNC_0 (unsigned long,unsigned long) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct srcu_struct*) ;
 scalar_t__ FUNC_4 (struct rcu_head*) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,struct rcu_head*,int) ;
 int FUNC_9 (int *) ;
 unsigned long FUNC_10 (int *) ;
 int FUNC_11 (struct srcu_data*) ;
 int FUNC_12 (struct srcu_data*,unsigned long) ;
 int FUNC_13 (struct srcu_struct*,int ,unsigned long) ;
 int FUNC_14 (struct srcu_struct*,struct srcu_data*,unsigned long,int) ;
 int VAR_0 ;
 int FUNC_15 (struct srcu_struct*) ;
 int FUNC_16 (struct srcu_struct*,int) ;
 struct srcu_data* FUNC_17 (int ) ;

__attribute__((used)) static void FUNC_18(struct srcu_struct *VAR_1, struct rcu_head *VAR_2,
   rcu_callback_t VAR_3, bool VAR_4)
{
 unsigned long VAR_5;
 int VAR_6;
 bool VAR_7 = 0;
 bool VAR_8 = 0;
 unsigned long VAR_9;
 struct srcu_data *VAR_10;

 FUNC_3(VAR_1);
 if (FUNC_4(VAR_2)) {

  FUNC_2(VAR_2->func, VAR_0);
  FUNC_1(1, "call_srcu(): Leaked duplicate callback\n");
  return;
 }
 VAR_2->func = VAR_3;
 VAR_6 = FUNC_15(VAR_1);
 FUNC_5(VAR_5);
 VAR_10 = FUNC_17(VAR_1->sda);
 FUNC_11(VAR_10);
 FUNC_8(&VAR_10->srcu_cblist, VAR_2, 0);
 FUNC_7(&VAR_10->srcu_cblist,
         FUNC_9(&VAR_1->srcu_gp_seq));
 VAR_9 = FUNC_10(&VAR_1->srcu_gp_seq);
 (void)FUNC_6(&VAR_10->srcu_cblist, VAR_9);
 if (FUNC_0(VAR_10->srcu_gp_seq_needed, VAR_9)) {
  VAR_10->srcu_gp_seq_needed = VAR_9;
  VAR_8 = 1;
 }
 if (!VAR_4 && FUNC_0(VAR_10->srcu_gp_seq_needed_exp, VAR_9)) {
  VAR_10->srcu_gp_seq_needed_exp = VAR_9;
  VAR_7 = 1;
 }
 FUNC_12(VAR_10, VAR_5);
 if (VAR_8)
  FUNC_14(VAR_1, VAR_10, VAR_9, VAR_4);
 else if (VAR_7)
  FUNC_13(VAR_1, VAR_10->mynode, VAR_9);
 FUNC_16(VAR_1, VAR_6);
}
