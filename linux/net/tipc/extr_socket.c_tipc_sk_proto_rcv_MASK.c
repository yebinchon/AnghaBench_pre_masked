
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tipc_sock {struct tipc_group* group; int cong_link_cnt; int cong_links; } ;
struct tipc_msg {int dummy; } ;
struct tipc_group {int dummy; } ;
struct sock {int (* sk_write_space ) (struct sock*) ;int sk_rcvbuf; } ;
struct sk_buff_head {int dummy; } ;
struct sk_buff {int dummy; } ;






 struct sk_buff* FUNC_0 (struct sk_buff_head*) ;
 struct tipc_msg* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct tipc_msg*) ;
 int FUNC_4 (struct tipc_msg*) ;
 int FUNC_5 () ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (int *,int ,int ) ;
 int FUNC_8 (struct tipc_group*,int*,int *,struct tipc_msg*,struct sk_buff_head*,struct sk_buff_head*) ;
 int FUNC_9 (struct tipc_group*,int*,struct tipc_msg*,struct sk_buff_head*,struct sk_buff_head*) ;
 struct tipc_sock* FUNC_10 (struct sock*) ;
 int FUNC_11 (struct tipc_sock*,struct sk_buff*,struct sk_buff_head*,struct sk_buff_head*) ;

__attribute__((used)) static void FUNC_12(struct sock *VAR_0,
         struct sk_buff_head *VAR_1,
         struct sk_buff_head *VAR_2)
{
 struct sk_buff *VAR_3 = FUNC_0(VAR_1);
 struct tipc_sock *VAR_4 = FUNC_10(VAR_0);
 struct tipc_msg *VAR_5 = FUNC_1(VAR_3);
 struct tipc_group *VAR_6 = VAR_4->group;
 bool VAR_7 = 0;

 switch (FUNC_4(VAR_5)) {
 case 131:
  FUNC_11(VAR_4, VAR_3, VAR_1, VAR_2);
  return;
 case 129:
  FUNC_7(&VAR_4->cong_links, FUNC_3(VAR_5), 0);

  FUNC_5();
  VAR_4->cong_link_cnt--;
  VAR_7 = 1;
  break;
 case 130:
  FUNC_9(VAR_6, &VAR_7, VAR_5, VAR_1, VAR_2);
  break;
 case 128:
  FUNC_8(VAR_4->group, &VAR_7, &VAR_0->sk_rcvbuf,
          VAR_5, VAR_1, VAR_2);
  break;
 default:
  break;
 }

 if (VAR_7)
  VAR_0->sk_write_space(VAR_0);

 FUNC_2(VAR_3);
}
