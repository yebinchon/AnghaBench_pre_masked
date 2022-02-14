
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tipc_nl_msg {int skb; int seq; int portid; } ;
struct sk_buff {int sk; } ;
struct net {int dummy; } ;
struct genl_info {int snd_seq; int snd_portid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net*,struct tipc_nl_msg*) ;
 int FUNC_1 (int ,struct genl_info*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 struct net* FUNC_4 (int ) ;

int FUNC_5(struct sk_buff *VAR_3, struct genl_info *VAR_4)
{
 struct net *VAR_5 = FUNC_4(VAR_3->sk);
 struct tipc_nl_msg VAR_6;
 int VAR_7;

 VAR_6.skb = FUNC_3(VAR_2, VAR_1);
 if (!VAR_6.skb)
  return -VAR_0;
 VAR_6.portid = VAR_4->snd_portid;
 VAR_6.seq = VAR_4->snd_seq;

 VAR_7 = FUNC_0(VAR_5, &VAR_6);
 if (VAR_7) {
  FUNC_2(VAR_6.skb);
  return VAR_7;
 }

 return FUNC_1(VAR_6.skb, VAR_4);
}
