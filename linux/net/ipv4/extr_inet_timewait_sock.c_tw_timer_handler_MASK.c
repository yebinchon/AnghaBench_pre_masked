
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct inet_timewait_sock {scalar_t__ tw_kill; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 struct inet_timewait_sock* FUNC_1 (int ,struct timer_list*,int ) ;
 int FUNC_2 (struct inet_timewait_sock*) ;
 struct inet_timewait_sock* VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct inet_timewait_sock*) ;

__attribute__((used)) static void FUNC_4(struct timer_list *VAR_4)
{
 struct inet_timewait_sock *VAR_5 = FUNC_1(VAR_5, VAR_4, VAR_3);

 if (VAR_5->tw_kill)
  FUNC_0(FUNC_3(VAR_5), VAR_1);
 else
  FUNC_0(FUNC_3(VAR_5), VAR_0);
 FUNC_2(VAR_5);
}
