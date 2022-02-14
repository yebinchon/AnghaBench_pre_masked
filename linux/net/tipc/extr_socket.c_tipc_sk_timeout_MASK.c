
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tipc_sock {int cong_link_cnt; int cong_links; int portid; } ;
struct timer_list {int dummy; } ;
struct sock {scalar_t__ sk_state; int sk_timer; } ;
struct sk_buff_head {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct sk_buff_head*) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 struct sock* FUNC_3 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_4 ;
 struct sock* VAR_5 ;
 int FUNC_4 (struct sock*,int *,scalar_t__) ;
 int VAR_6 ;
 int FUNC_5 (struct sk_buff_head*) ;
 int FUNC_6 (struct sock*) ;
 scalar_t__ FUNC_7 (struct sock*) ;
 int FUNC_8 (struct sock*) ;
 int FUNC_9 (int *,int ,int ) ;
 int FUNC_10 (int ,struct sk_buff_head*,int ,int ) ;
 struct tipc_sock* FUNC_11 (struct sock*) ;
 int FUNC_12 (struct sock*,struct sk_buff_head*) ;
 int FUNC_13 (struct sock*,struct sk_buff_head*) ;
 int FUNC_14 (struct tipc_sock*) ;

__attribute__((used)) static void FUNC_15(struct timer_list *VAR_7)
{
 struct sock *VAR_8 = FUNC_3(VAR_8, VAR_7, VAR_6);
 struct tipc_sock *VAR_9 = FUNC_11(VAR_8);
 u32 VAR_10 = FUNC_14(VAR_9);
 struct sk_buff_head VAR_11;
 int VAR_12 = 0;

 FUNC_0(&VAR_11);
 FUNC_1(VAR_8);


 if (FUNC_7(VAR_8)) {
  FUNC_4(VAR_8, &VAR_8->sk_timer, VAR_4 + VAR_1 / 20);
  FUNC_2(VAR_8);
  return;
 }

 if (VAR_8->sk_state == VAR_3)
  FUNC_12(VAR_8, &VAR_11);
 else if (VAR_8->sk_state == VAR_2)
  FUNC_13(VAR_8, &VAR_11);

 FUNC_2(VAR_8);

 if (!FUNC_5(&VAR_11))
  VAR_12 = FUNC_10(FUNC_6(VAR_8), &VAR_11, VAR_10, VAR_9->portid);


 if (VAR_12 == -VAR_0) {
  FUNC_9(&VAR_9->cong_links, VAR_10, 0);
  VAR_9->cong_link_cnt = 1;
 }
 FUNC_8(VAR_8);
}
