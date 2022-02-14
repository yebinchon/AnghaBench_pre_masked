
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct srcu_struct {int srcu_gp_seq_needed_exp; int srcu_gp_seq; } ;


 int FUNC_0 (int ) ;
 unsigned long VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static unsigned long FUNC_2(struct srcu_struct *VAR_1)
{
 if (FUNC_1(FUNC_0(VAR_1->srcu_gp_seq),
    FUNC_0(VAR_1->srcu_gp_seq_needed_exp)))
  return 0;
 return VAR_0;
}
