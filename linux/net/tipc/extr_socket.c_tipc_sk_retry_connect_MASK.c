
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tipc_sock {scalar_t__ cong_link_cnt; } ;
struct sock {int sk_write_queue; int sk_timer; } ;
struct sk_buff_head {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct sock*,int *,int ) ;
 int FUNC_2 (int *,struct sk_buff_head*) ;
 struct tipc_sock* FUNC_3 (struct sock*) ;

__attribute__((used)) static void FUNC_4(struct sock *VAR_0, struct sk_buff_head *VAR_1)
{
 struct tipc_sock *VAR_2 = FUNC_3(VAR_0);


 if (VAR_2->cong_link_cnt) {
  FUNC_1(VAR_0, &VAR_0->sk_timer, FUNC_0(100));
  return;
 }

 FUNC_2(&VAR_0->sk_write_queue, VAR_1);
}
