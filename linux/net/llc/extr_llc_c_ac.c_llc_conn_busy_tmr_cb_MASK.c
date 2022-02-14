
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct llc_sock {int sk; } ;
struct TYPE_2__ {int timer; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 struct llc_sock* FUNC_0 (int ,struct timer_list*,int ) ;
 struct llc_sock* VAR_2 ;
 int FUNC_1 (int *,int ) ;

void FUNC_2(struct timer_list *VAR_3)
{
 struct llc_sock *VAR_4 = FUNC_0(VAR_4, VAR_3, VAR_1.timer);

 FUNC_1(&VAR_4->sk, VAR_0);
}
