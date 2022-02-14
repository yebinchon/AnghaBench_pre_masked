
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct wireless_dev {scalar_t__ iftype; } ;
struct sk_buff {int dummy; } ;
struct net_device {TYPE_1__* ops; struct wireless_dev* ieee80211_ptr; } ;
struct genl_info {int * attrs; int snd_seq; int snd_portid; struct net_device** user_ptr; } ;
struct cfg80211_registered_device {TYPE_1__* ops; struct wireless_dev* ieee80211_ptr; } ;
struct TYPE_2__ {int probe_client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct sk_buff*,void*) ;
 int FUNC_1 (struct sk_buff*,struct genl_info*) ;
 void* FUNC_2 (struct sk_buff*,int ,int ,int ,int ) ;
 int * FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ,int ) ;
 int FUNC_5 (struct sk_buff*) ;
 struct sk_buff* FUNC_6 (int ,int ) ;
 int FUNC_7 (struct net_device*,struct net_device*,int const*,int *) ;

__attribute__((used)) static int FUNC_8(struct sk_buff *VAR_12,
    struct genl_info *VAR_13)
{
 struct cfg80211_registered_device *VAR_14 = VAR_13->user_ptr[0];
 struct net_device *VAR_15 = VAR_13->user_ptr[1];
 struct wireless_dev *VAR_16 = VAR_15->ieee80211_ptr;
 struct sk_buff *VAR_17;
 void *VAR_18;
 const u8 *VAR_19;
 u64 VAR_20;
 int VAR_21;

 if (VAR_16->iftype != VAR_9 &&
     VAR_16->iftype != VAR_10)
  return -VAR_3;

 if (!VAR_13->attrs[VAR_6])
  return -VAR_0;

 if (!VAR_14->ops->probe_client)
  return -VAR_3;

 VAR_17 = FUNC_6(VAR_11, VAR_4);
 if (!VAR_17)
  return -VAR_2;

 VAR_18 = FUNC_2(VAR_17, VAR_13->snd_portid, VAR_13->snd_seq, 0,
        VAR_8);
 if (!VAR_18) {
  VAR_21 = -VAR_1;
  goto free_msg;
 }

 VAR_19 = FUNC_3(VAR_13->attrs[VAR_6]);

 VAR_21 = FUNC_7(VAR_14, VAR_15, VAR_19, &VAR_20);
 if (VAR_21)
  goto free_msg;

 if (FUNC_4(VAR_17, VAR_5, VAR_20,
         VAR_7))
  goto nla_put_failure;

 FUNC_0(VAR_17, VAR_18);

 return FUNC_1(VAR_17, VAR_13);

 nla_put_failure:
 VAR_21 = -VAR_1;
 free_msg:
 FUNC_5(VAR_17);
 return VAR_21;
}
