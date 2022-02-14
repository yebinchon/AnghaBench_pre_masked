
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct x25_sock {struct sock sk; } ;
struct timer_list {int dummy; } ;
struct TYPE_2__ {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 struct x25_sock* FUNC_2 (int ,struct timer_list*,int ) ;
 scalar_t__ FUNC_3 (struct sock*) ;
 int VAR_1 ;
 struct x25_sock* VAR_2 ;
 int FUNC_4 (struct sock*) ;
 TYPE_1__* FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*) ;

__attribute__((used)) static void FUNC_7(struct timer_list *VAR_3)
{
 struct x25_sock *VAR_4 = FUNC_2(VAR_4, VAR_3, VAR_1);
 struct sock *VAR_5 = &VAR_4->sk;

 FUNC_0(VAR_5);
 if (FUNC_3(VAR_5)) {
  if (FUNC_5(VAR_5)->state == VAR_0)
   FUNC_6(VAR_5);
 } else
  FUNC_4(VAR_5);
 FUNC_1(VAR_5);
}
