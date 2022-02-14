
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct srcu_struct {unsigned long srcu_gp_seq_needed_exp; int srcu_gp_seq; struct srcu_struct* srcu_parent; } ;
struct srcu_node {unsigned long srcu_gp_seq_needed_exp; int srcu_gp_seq; struct srcu_node* srcu_parent; } ;


 unsigned long FUNC_0 (unsigned long) ;
 scalar_t__ FUNC_1 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_2 (unsigned long,unsigned long) ;
 int FUNC_3 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct srcu_struct*,unsigned long) ;
 int FUNC_6 (struct srcu_struct*,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct srcu_struct *VAR_0, struct srcu_node *VAR_1,
      unsigned long VAR_2)
{
 unsigned long VAR_3;

 for (; VAR_1 != ((void*)0); VAR_1 = VAR_1->srcu_parent) {
  if (FUNC_4(&VAR_0->srcu_gp_seq, VAR_2) ||
      FUNC_1(FUNC_0(VAR_1->srcu_gp_seq_needed_exp), VAR_2))
   return;
  FUNC_5(VAR_1, VAR_3);
  if (FUNC_1(VAR_1->srcu_gp_seq_needed_exp, VAR_2)) {
   FUNC_6(VAR_1, VAR_3);
   return;
  }
  FUNC_3(VAR_1->srcu_gp_seq_needed_exp, VAR_2);
  FUNC_6(VAR_1, VAR_3);
 }
 FUNC_5(VAR_0, VAR_3);
 if (FUNC_2(VAR_0->srcu_gp_seq_needed_exp, VAR_2))
  VAR_0->srcu_gp_seq_needed_exp = VAR_2;
 FUNC_6(VAR_0, VAR_3);
}
