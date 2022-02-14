
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct sk_buff {int dummy; } ;
struct TYPE_4__ {int flags; } ;
struct net_device {int ifindex; TYPE_2__ wiphy; TYPE_1__* ops; } ;
struct get_key_cookie {scalar_t__ error; int idx; struct sk_buff* msg; } ;
struct genl_info {int snd_seq; int snd_portid; scalar_t__* attrs; struct net_device** user_ptr; } ;
struct cfg80211_registered_device {int ifindex; TYPE_2__ wiphy; TYPE_1__* ops; } ;
struct TYPE_3__ {int get_key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (struct sk_buff*,void*) ;
 int FUNC_1 (struct sk_buff*,struct genl_info*) ;
 int VAR_16 ;
 void* FUNC_2 (struct sk_buff*,int ,int ,int ,int ) ;
 int * FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (struct sk_buff*,size_t,int ,int const*) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_8 (struct sk_buff*,size_t,int ) ;
 int FUNC_9 (struct sk_buff*) ;
 struct sk_buff* FUNC_10 (int ,int ) ;
 int FUNC_11 (struct net_device*,struct net_device*,int ,int,int const*,struct get_key_cookie*,int ) ;

__attribute__((used)) static int FUNC_12(struct sk_buff *VAR_17, struct genl_info *VAR_18)
{
 struct cfg80211_registered_device *VAR_19 = VAR_18->user_ptr[0];
 int VAR_20;
 struct net_device *VAR_21 = VAR_18->user_ptr[1];
 u8 VAR_22 = 0;
 const u8 *VAR_23 = ((void*)0);
 bool VAR_24;
 struct get_key_cookie VAR_25 = {
  .error = 0,
 };
 void *VAR_26;
 struct sk_buff *VAR_27;

 if (VAR_18->attrs[VAR_8])
  VAR_22 = FUNC_5(VAR_18->attrs[VAR_8]);

 if (VAR_18->attrs[VAR_10])
  VAR_23 = FUNC_3(VAR_18->attrs[VAR_10]);

 VAR_24 = !!VAR_23;
 if (VAR_18->attrs[VAR_9]) {
  u32 VAR_28 = FUNC_4(VAR_18->attrs[VAR_9]);

  if (VAR_28 != VAR_12 &&
      VAR_28 != VAR_13)
   return -VAR_0;
  VAR_24 = VAR_28 == VAR_13;
 }

 if (!VAR_19->ops->get_key)
  return -VAR_4;

 if (!VAR_24 && VAR_23 && !(VAR_19->wiphy.flags & VAR_15))
  return -VAR_2;

 VAR_27 = FUNC_10(VAR_14, VAR_6);
 if (!VAR_27)
  return -VAR_3;

 VAR_26 = FUNC_2(VAR_27, VAR_18->snd_portid, VAR_18->snd_seq, 0,
        VAR_11);
 if (!VAR_26)
  goto nla_put_failure;

 VAR_25.msg = VAR_27;
 VAR_25.idx = VAR_22;

 if (FUNC_7(VAR_27, VAR_7, VAR_21->ifindex) ||
     FUNC_8(VAR_27, VAR_8, VAR_22))
  goto nla_put_failure;
 if (VAR_23 &&
     FUNC_6(VAR_27, VAR_10, VAR_5, VAR_23))
  goto nla_put_failure;

 VAR_20 = FUNC_11(VAR_19, VAR_21, VAR_22, VAR_24, VAR_23, &VAR_25,
      VAR_16);

 if (VAR_20)
  goto free_msg;

 if (VAR_25.error)
  goto nla_put_failure;

 FUNC_0(VAR_27, VAR_26);
 return FUNC_1(VAR_27, VAR_18);

 nla_put_failure:
 VAR_20 = -VAR_1;
 free_msg:
 FUNC_9(VAR_27);
 return VAR_20;
}
