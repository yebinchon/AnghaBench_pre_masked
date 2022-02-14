
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct ncsi_dev_priv {int dummy; } ;
struct genl_info {int * attrs; int snd_seq; int snd_portid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct genl_info*) ;
 int FUNC_1 (struct sk_buff*,void*) ;
 struct sk_buff* FUNC_2 (int ,int ) ;
 void* FUNC_3 (struct sk_buff*,int ,int ,int *,int ,int ) ;
 int FUNC_4 (struct sk_buff*,struct genl_info*) ;
 int FUNC_5 (struct sk_buff*) ;
 int VAR_10 ;
 int FUNC_6 (struct sk_buff*,struct ncsi_dev_priv*,unsigned int) ;
 struct ncsi_dev_priv* FUNC_7 (int ,unsigned int) ;
 unsigned int FUNC_8 (int ) ;
 int FUNC_9 (struct sk_buff*,struct nlattr*) ;
 int FUNC_10 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_11 (struct sk_buff*,int ) ;

__attribute__((used)) static int FUNC_12(struct sk_buff *VAR_11, struct genl_info *VAR_12)
{
 struct ncsi_dev_priv *VAR_13;
 unsigned int VAR_14;
 struct sk_buff *VAR_15;
 struct nlattr *VAR_16;
 void *VAR_17;
 int VAR_18;

 if (!VAR_12 || !VAR_12->attrs)
  return -VAR_0;

 if (!VAR_12->attrs[VAR_5])
  return -VAR_0;

 if (!VAR_12->attrs[VAR_6])
  return -VAR_0;

 VAR_13 = FUNC_7(FUNC_0(VAR_12),
          FUNC_8(VAR_12->attrs[VAR_5]));
 if (!VAR_13)
  return -VAR_2;

 VAR_15 = FUNC_2(VAR_9, VAR_4);
 if (!VAR_15)
  return -VAR_3;

 VAR_17 = FUNC_3(VAR_15, VAR_12->snd_portid, VAR_12->snd_seq,
     &VAR_10, 0, VAR_8);
 if (!VAR_17) {
  FUNC_5(VAR_15);
  return -VAR_1;
 }

 VAR_14 = FUNC_8(VAR_12->attrs[VAR_6]);

 VAR_16 = FUNC_11(VAR_15, VAR_7);
 if (!VAR_16) {
  FUNC_5(VAR_15);
  return -VAR_1;
 }
 VAR_18 = FUNC_6(VAR_15, VAR_13, VAR_14);

 if (VAR_18) {
  FUNC_9(VAR_15, VAR_16);
  goto err;
 }

 FUNC_10(VAR_15, VAR_16);

 FUNC_1(VAR_15, VAR_17);
 return FUNC_4(VAR_15, VAR_12);

err:
 FUNC_5(VAR_15);
 return VAR_18;
}
