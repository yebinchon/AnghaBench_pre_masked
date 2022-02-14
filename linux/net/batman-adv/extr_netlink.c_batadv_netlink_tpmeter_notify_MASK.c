
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct sk_buff {int dummy; } ;
struct batadv_priv {int soft_iface; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*,void*) ;
 int FUNC_2 (struct sk_buff*,void*) ;
 int FUNC_3 (int *,int ,struct sk_buff*,int ,int ,int ) ;
 void* FUNC_4 (struct sk_buff*,int ,int ,int *,int ,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int ,int const*) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int ,int ,int ) ;
 scalar_t__ FUNC_8 (struct sk_buff*,int ,int ) ;
 int FUNC_9 (struct sk_buff*) ;
 struct sk_buff* FUNC_10 (int ,int ) ;

int FUNC_11(struct batadv_priv *VAR_15, const u8 *VAR_16,
      u8 VAR_17, u32 VAR_18, u64 VAR_19,
      u32 VAR_20)
{
 struct sk_buff *VAR_21;
 void *VAR_22;
 int VAR_23;

 VAR_21 = FUNC_10(VAR_13, VAR_12);
 if (!VAR_21)
  return -VAR_10;

 VAR_22 = FUNC_4(VAR_21, 0, 0, &VAR_14, 0,
     VAR_6);
 if (!VAR_22) {
  VAR_23 = -VAR_9;
  goto err_genlmsg;
 }

 if (FUNC_6(VAR_21, VAR_3, VAR_20))
  goto nla_put_failure;

 if (FUNC_6(VAR_21, VAR_5, VAR_18))
  goto nla_put_failure;

 if (FUNC_7(VAR_21, VAR_2, VAR_19,
         VAR_1))
  goto nla_put_failure;

 if (FUNC_8(VAR_21, VAR_4, VAR_17))
  goto nla_put_failure;

 if (FUNC_5(VAR_21, VAR_0, VAR_11, VAR_16))
  goto nla_put_failure;

 FUNC_2(VAR_21, VAR_22);

 FUNC_3(&VAR_14,
    FUNC_0(VAR_15->soft_iface), VAR_21, 0,
    VAR_7, VAR_12);

 return 0;

nla_put_failure:
 FUNC_1(VAR_21, VAR_22);
 VAR_23 = -VAR_8;

err_genlmsg:
 FUNC_9(VAR_21);
 return VAR_23;
}
