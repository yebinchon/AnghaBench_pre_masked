
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int timer; } ;
struct llc_sock {TYPE_1__ pf_cycle_timer; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct sock*,int ) ;
 struct llc_sock* FUNC_2 (struct sock*) ;

int FUNC_3(struct sock *VAR_0, struct sk_buff *VAR_1)
{
 struct llc_sock *VAR_2 = FUNC_2(VAR_0);

 FUNC_0(&VAR_2->pf_cycle_timer.timer);
 FUNC_1(VAR_0, 0);
 return 0;
}
