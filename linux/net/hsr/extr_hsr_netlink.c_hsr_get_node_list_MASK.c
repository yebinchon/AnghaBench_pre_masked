
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct net_device {int ifindex; } ;
struct hsr_priv {int dummy; } ;
struct genl_info {int snd_portid; int snd_seq; struct nlattr** attrs; } ;
struct TYPE_2__ {int portid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__ FUNC_0 (struct sk_buff*) ;
 int VAR_7 ;
 struct net_device* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct genl_info*) ;
 int FUNC_3 (struct sk_buff*,void*) ;
 struct sk_buff* FUNC_4 (int ,int ) ;
 void* FUNC_5 (struct sk_buff*,int ,int ,int *,int ,int ) ;
 int FUNC_6 (int ,struct sk_buff*,int ) ;
 int VAR_8 ;
 void* FUNC_7 (struct hsr_priv*,void*,unsigned char*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct sk_buff*) ;
 struct hsr_priv* FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct sk_buff*,int ,int ,int *) ;
 int FUNC_12 (struct nlattr*) ;
 int FUNC_13 (struct sk_buff*,int ,int,unsigned char*) ;
 int FUNC_14 (struct sk_buff*,size_t,int ) ;
 int FUNC_15 (struct sk_buff*) ;
 int FUNC_16 () ;
 int FUNC_17 () ;

__attribute__((used)) static int FUNC_18(struct sk_buff *VAR_9, struct genl_info *VAR_10)
{

 struct nlattr *VAR_11;
 struct net_device *VAR_12;


 struct sk_buff *VAR_13;
 void *VAR_14;
 struct hsr_priv *VAR_15;
 void *VAR_16;
 unsigned char VAR_17[VAR_2];
 int VAR_18;

 if (!VAR_10)
  goto invalid;

 VAR_11 = VAR_10->attrs[VAR_4];
 if (!VAR_11)
  goto invalid;

 VAR_12 = FUNC_1(FUNC_2(VAR_10),
         FUNC_12(VAR_10->attrs[VAR_4]));
 if (!VAR_12)
  goto invalid;
 if (!FUNC_8(VAR_12))
  goto invalid;


 VAR_13 = FUNC_4(VAR_7, VAR_3);
 if (!VAR_13) {
  VAR_18 = -VAR_1;
  goto fail;
 }

 VAR_14 = FUNC_5(VAR_13, FUNC_0(VAR_9).portid,
          VAR_10->snd_seq, &VAR_8, 0,
          VAR_6);
 if (!VAR_14) {
  VAR_18 = -VAR_1;
  goto nla_put_failure;
 }

 VAR_18 = FUNC_14(VAR_13, VAR_4, VAR_12->ifindex);
 if (VAR_18 < 0)
  goto nla_put_failure;

 VAR_15 = FUNC_10(VAR_12);

 FUNC_16();
 VAR_16 = FUNC_7(VAR_15, ((void*)0), VAR_17);
 while (VAR_16) {
  VAR_18 = FUNC_13(VAR_13, VAR_5, VAR_2, VAR_17);
  if (VAR_18 < 0) {
   FUNC_17();
   goto nla_put_failure;
  }
  VAR_16 = FUNC_7(VAR_15, VAR_16, VAR_17);
 }
 FUNC_17();

 FUNC_3(VAR_13, VAR_14);
 FUNC_6(FUNC_2(VAR_10), VAR_13, VAR_10->snd_portid);

 return 0;

invalid:
 FUNC_11(VAR_9, FUNC_15(VAR_9), -VAR_0, ((void*)0));
 return 0;

nla_put_failure:
 FUNC_9(VAR_13);


fail:
 return VAR_18;
}
