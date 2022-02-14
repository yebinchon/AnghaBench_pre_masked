
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tipc_nl_msg {int seq; int portid; struct sk_buff* skb; } ;
struct tipc_bearer {int dummy; } ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct net {int dummy; } ;
struct genl_info {int snd_seq; int snd_portid; int extack; int * attrs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (struct tipc_nl_msg*,struct tipc_bearer*,int ) ;
 struct net* FUNC_1 (struct genl_info*) ;
 int FUNC_2 (struct sk_buff*,struct genl_info*) ;
 char* FUNC_3 (struct nlattr*) ;
 int FUNC_4 (struct nlattr**,int ,int ,int ,int ) ;
 int FUNC_5 (struct sk_buff*) ;
 struct sk_buff* FUNC_6 (int ,int ) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 struct tipc_bearer* FUNC_9 (struct net*,char*) ;
 int VAR_7 ;

int FUNC_10(struct sk_buff *VAR_8, struct genl_info *VAR_9)
{
 int VAR_10;
 char *VAR_11;
 struct sk_buff *VAR_12;
 struct tipc_bearer *VAR_13;
 struct tipc_nl_msg VAR_14;
 struct nlattr *VAR_15[VAR_5 + 1];
 struct net *VAR_16 = FUNC_1(VAR_9);

 if (!VAR_9->attrs[VAR_4])
  return -VAR_0;

 VAR_10 = FUNC_4(VAR_15, VAR_5,
       VAR_9->attrs[VAR_4],
       VAR_7, VAR_9->extack);
 if (VAR_10)
  return VAR_10;

 if (!VAR_15[VAR_6])
  return -VAR_0;
 VAR_11 = FUNC_3(VAR_15[VAR_6]);

 VAR_12 = FUNC_6(VAR_3, VAR_2);
 if (!VAR_12)
  return -VAR_1;

 VAR_14.skb = VAR_12;
 VAR_14.portid = VAR_9->snd_portid;
 VAR_14.seq = VAR_9->snd_seq;

 FUNC_7();
 VAR_13 = FUNC_9(VAR_16, VAR_11);
 if (!VAR_13) {
  VAR_10 = -VAR_0;
  goto err_out;
 }

 VAR_10 = FUNC_0(&VAR_14, VAR_13, 0);
 if (VAR_10)
  goto err_out;
 FUNC_8();

 return FUNC_2(VAR_12, VAR_9);
err_out:
 FUNC_8();
 FUNC_5(VAR_12);

 return VAR_10;
}
