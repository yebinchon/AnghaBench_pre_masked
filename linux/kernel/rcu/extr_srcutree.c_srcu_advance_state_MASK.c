
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct srcu_struct {int srcu_idx; int srcu_gp_mutex; int srcu_gp_seq; int srcu_gp_seq_needed; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct srcu_struct*) ;
 int FUNC_9 (struct srcu_struct*) ;
 int FUNC_10 (struct srcu_struct*) ;
 int FUNC_11 (struct srcu_struct*) ;
 int FUNC_12 (struct srcu_struct*) ;
 int FUNC_13 (struct srcu_struct*,int,int) ;

__attribute__((used)) static void FUNC_14(struct srcu_struct *VAR_3)
{
 int VAR_4;

 FUNC_3(&VAR_3->srcu_gp_mutex);
 VAR_4 = FUNC_6(FUNC_7(&VAR_3->srcu_gp_seq));
 if (VAR_4 == VAR_0) {
  FUNC_8(VAR_3);
  if (FUNC_1(VAR_3->srcu_gp_seq, VAR_3->srcu_gp_seq_needed)) {
   FUNC_2(FUNC_6(VAR_3->srcu_gp_seq));
   FUNC_9(VAR_3);
   FUNC_4(&VAR_3->srcu_gp_mutex);
   return;
  }
  VAR_4 = FUNC_6(FUNC_0(VAR_3->srcu_gp_seq));
  if (VAR_4 == VAR_0)
   FUNC_12(VAR_3);
  FUNC_9(VAR_3);
  if (VAR_4 != VAR_0) {
   FUNC_4(&VAR_3->srcu_gp_mutex);
   return;
  }
 }

 if (FUNC_6(FUNC_0(VAR_3->srcu_gp_seq)) == VAR_1) {
  VAR_4 = 1 ^ (VAR_3->srcu_idx & 1);
  if (!FUNC_13(VAR_3, VAR_4, 1)) {
   FUNC_4(&VAR_3->srcu_gp_mutex);
   return;
  }
  FUNC_10(VAR_3);
  FUNC_5(&VAR_3->srcu_gp_seq, VAR_2);
 }

 if (FUNC_6(FUNC_0(VAR_3->srcu_gp_seq)) == VAR_2) {





  VAR_4 = 1 ^ (VAR_3->srcu_idx & 1);
  if (!FUNC_13(VAR_3, VAR_4, 2)) {
   FUNC_4(&VAR_3->srcu_gp_mutex);
   return;
  }
  FUNC_11(VAR_3);
 }
}
