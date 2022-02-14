
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct sock {int (* sk_state_change ) (struct sock*) ;int sk_shutdown; scalar_t__ sk_err; int sk_state; } ;
struct nr_sock {int state; scalar_t__ n2count; struct sock sock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 struct nr_sock* FUNC_2 (int ,struct timer_list*,int ) ;
 int VAR_5 ;
 struct nr_sock* VAR_6 ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (struct sock*,int ) ;
 int FUNC_8 (struct sock*,int ) ;
 int FUNC_9 (struct sock*,int ) ;
 int FUNC_10 (struct sock*) ;

__attribute__((used)) static void FUNC_11(struct timer_list *VAR_7)
{
 struct nr_sock *VAR_8 = FUNC_2(VAR_8, VAR_7, VAR_5);
 struct sock *VAR_9 = &VAR_8->sock;

 FUNC_0(VAR_9);

 FUNC_3(VAR_9);

 VAR_8->n2count = 0;
 FUNC_7(VAR_9, VAR_0);
 VAR_8->state = VAR_1;

 FUNC_4(VAR_9);
 FUNC_5(VAR_9);
 FUNC_6(VAR_9);

 VAR_9->sk_state = VAR_4;
 VAR_9->sk_err = 0;
 VAR_9->sk_shutdown |= VAR_2;

 if (!FUNC_8(VAR_9, VAR_3)) {
  VAR_9->sk_state_change(VAR_9);
  FUNC_9(VAR_9, VAR_3);
 }
 FUNC_1(VAR_9);
}
