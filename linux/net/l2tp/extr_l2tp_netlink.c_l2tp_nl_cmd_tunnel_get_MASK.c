
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct net {int dummy; } ;
struct l2tp_tunnel {int dummy; } ;
struct genl_info {int snd_portid; int snd_seq; int * attrs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct net* FUNC_0 (struct genl_info*) ;
 int FUNC_1 (struct net*,struct sk_buff*,int ) ;
 int FUNC_2 (struct sk_buff*,int ,int ,int ,struct l2tp_tunnel*,int ) ;
 int FUNC_3 (struct l2tp_tunnel*) ;
 struct l2tp_tunnel* FUNC_4 (struct net*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct sk_buff*) ;
 struct sk_buff* FUNC_7 (int ,int ) ;

__attribute__((used)) static int FUNC_8(struct sk_buff *VAR_9, struct genl_info *VAR_10)
{
 struct l2tp_tunnel *VAR_11;
 struct sk_buff *VAR_12;
 u32 VAR_13;
 int VAR_14 = -VAR_1;
 struct net *VAR_15 = FUNC_0(VAR_10);

 if (!VAR_10->attrs[VAR_5]) {
  VAR_14 = -VAR_0;
  goto err;
 }

 VAR_13 = FUNC_5(VAR_10->attrs[VAR_5]);

 VAR_12 = FUNC_7(VAR_7, VAR_4);
 if (!VAR_12) {
  VAR_14 = -VAR_3;
  goto err;
 }

 VAR_11 = FUNC_4(VAR_15, VAR_13);
 if (!VAR_11) {
  VAR_14 = -VAR_2;
  goto err_nlmsg;
 }

 VAR_14 = FUNC_2(VAR_12, VAR_10->snd_portid, VAR_10->snd_seq,
      VAR_8, VAR_11, VAR_6);
 if (VAR_14 < 0)
  goto err_nlmsg_tunnel;

 FUNC_3(VAR_11);

 return FUNC_1(VAR_15, VAR_12, VAR_10->snd_portid);

err_nlmsg_tunnel:
 FUNC_3(VAR_11);
err_nlmsg:
 FUNC_6(VAR_12);
err:
 return VAR_14;
}
