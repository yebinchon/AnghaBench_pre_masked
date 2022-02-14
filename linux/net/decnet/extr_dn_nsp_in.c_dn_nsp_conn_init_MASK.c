
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int (* sk_state_change ) (struct sock*) ;int sk_receive_queue; int sk_ack_backlog; } ;
struct sk_buff {int dummy; } ;


 int FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (struct sock*) ;
 int FUNC_2 (int *,struct sk_buff*) ;
 int FUNC_3 (struct sock*) ;

__attribute__((used)) static void FUNC_4(struct sock *VAR_0, struct sk_buff *VAR_1)
{
 if (FUNC_1(VAR_0)) {
  FUNC_0(VAR_1);
  return;
 }

 VAR_0->sk_ack_backlog++;
 FUNC_2(&VAR_0->sk_receive_queue, VAR_1);
 VAR_0->sk_state_change(VAR_0);
}
