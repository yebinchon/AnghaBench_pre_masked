
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tipc_nl_msg {int seq; int portid; struct sk_buff* skb; } ;
struct tipc_media {int dummy; } ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct genl_info {int snd_seq; int snd_portid; int extack; int * attrs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int FUNC_0 (struct tipc_nl_msg*,struct tipc_media*,int ) ;
 int FUNC_1 (struct sk_buff*,struct genl_info*) ;
 char* FUNC_2 (struct nlattr*) ;
 int FUNC_3 (struct nlattr**,int ,int ,int ,int ) ;
 int FUNC_4 (struct sk_buff*) ;
 struct sk_buff* FUNC_5 (int ,int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 struct tipc_media* FUNC_8 (char*) ;
 int VAR_8 ;

int FUNC_9(struct sk_buff *VAR_9, struct genl_info *VAR_10)
{
 int VAR_11;
 char *VAR_12;
 struct tipc_nl_msg VAR_13;
 struct tipc_media *VAR_14;
 struct sk_buff *VAR_15;
 struct nlattr *VAR_16[VAR_4 + 1];

 if (!VAR_10->attrs[VAR_5])
  return -VAR_0;

 VAR_11 = FUNC_3(VAR_16, VAR_6,
       VAR_10->attrs[VAR_5],
       VAR_8, VAR_10->extack);
 if (VAR_11)
  return VAR_11;

 if (!VAR_16[VAR_7])
  return -VAR_0;
 VAR_12 = FUNC_2(VAR_16[VAR_7]);

 VAR_15 = FUNC_5(VAR_3, VAR_2);
 if (!VAR_15)
  return -VAR_1;

 VAR_13.skb = VAR_15;
 VAR_13.portid = VAR_10->snd_portid;
 VAR_13.seq = VAR_10->snd_seq;

 FUNC_6();
 VAR_14 = FUNC_8(VAR_12);
 if (!VAR_14) {
  VAR_11 = -VAR_0;
  goto err_out;
 }

 VAR_11 = FUNC_0(&VAR_13, VAR_14, 0);
 if (VAR_11)
  goto err_out;
 FUNC_7();

 return FUNC_1(VAR_15, VAR_10);
err_out:
 FUNC_7();
 FUNC_4(VAR_15);

 return VAR_11;
}
