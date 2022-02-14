
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct sock {int (* sk_state_change ) (struct sock*) ;int sk_err; int sk_state; } ;


 int FUNC_0 (char*,struct sock*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 struct sock* FUNC_3 (int ,struct timer_list*,int ) ;
 int FUNC_4 (struct sock*) ;
 struct sock* VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*) ;

__attribute__((used)) static void FUNC_7(struct timer_list *VAR_3)
{
 struct sock *VAR_4 = FUNC_3(VAR_4, VAR_3, VAR_2);

 FUNC_0("sock %p state %d", VAR_4, VAR_4->sk_state);

 FUNC_1(VAR_4);
 VAR_4->sk_err = VAR_0;
 VAR_4->sk_state_change(VAR_4);
 FUNC_2(VAR_4);

 FUNC_4(VAR_4);
 FUNC_5(VAR_4);
}
