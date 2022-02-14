
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ gp_kthread; int gp_wq; int gp_seq; int gp_wake_seq; int gp_wake_time; int gp_flags; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(void)
{
 if ((VAR_0 == VAR_2.gp_kthread &&
      !FUNC_2() && !FUNC_3()) ||
     !FUNC_0(VAR_2.gp_flags) ||
     !VAR_2.gp_kthread)
  return;
 FUNC_1(VAR_2.gp_wake_time, VAR_1);
 FUNC_1(VAR_2.gp_wake_seq, FUNC_0(VAR_2.gp_seq));
 FUNC_4(&VAR_2.gp_wq);
}
