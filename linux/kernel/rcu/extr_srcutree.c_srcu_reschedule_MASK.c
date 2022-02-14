
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct srcu_struct {int work; int srcu_gp_seq; int srcu_gp_seq_needed; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,unsigned long) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct srcu_struct*) ;
 int FUNC_5 (struct srcu_struct*) ;
 int FUNC_6 (struct srcu_struct*) ;

__attribute__((used)) static void FUNC_7(struct srcu_struct *VAR_1, unsigned long VAR_2)
{
 bool VAR_3 = 1;

 FUNC_4(VAR_1);
 if (FUNC_0(VAR_1->srcu_gp_seq, VAR_1->srcu_gp_seq_needed)) {
  if (!FUNC_1(FUNC_3(VAR_1->srcu_gp_seq))) {

   VAR_3 = 0;
  }
 } else if (!FUNC_3(VAR_1->srcu_gp_seq)) {

  FUNC_6(VAR_1);
 }
 FUNC_5(VAR_1);

 if (VAR_3)
  FUNC_2(VAR_0, &VAR_1->work, VAR_2);
}
