
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct srcu_struct {int srcu_gp_seq; } ;
typedef enum rcutorture_type { ____Placeholder_rcutorture_type } rcutorture_type ;


 int VAR_0 ;
 unsigned long FUNC_0 (int *) ;

void FUNC_1(enum rcutorture_type VAR_1,
        struct srcu_struct *VAR_2, int *VAR_3,
        unsigned long *VAR_4)
{
 if (VAR_1 != VAR_0)
  return;
 *VAR_3 = 0;
 *VAR_4 = FUNC_0(&VAR_2->srcu_gp_seq);
}
