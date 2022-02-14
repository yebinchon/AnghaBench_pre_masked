
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct srcu_struct {int srcu_gp_seq_needed; } ;


 int FUNC_0 (struct srcu_struct*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct srcu_struct*,unsigned long) ;
 int FUNC_4 (struct srcu_struct*,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct srcu_struct *VAR_0)
{
 unsigned long VAR_1;


 if (!FUNC_1(FUNC_2(&VAR_0->srcu_gp_seq_needed)))
  return;
 FUNC_3(VAR_0, VAR_1);
 if (!FUNC_1(VAR_0->srcu_gp_seq_needed)) {
  FUNC_4(VAR_0, VAR_1);
  return;
 }
 FUNC_0(VAR_0, 1);
 FUNC_4(VAR_0, VAR_1);
}
