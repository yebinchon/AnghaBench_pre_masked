
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct wireless_dev {int iftype; TYPE_1__* current_bss; int const* ssid; int const ssid_len; int use_4addr; struct net_device* netdev; } ;
struct sk_buff {int dummy; } ;
struct net_device {int ifindex; int name; } ;
struct cfg80211_txq_stats {int dummy; } ;
struct cfg80211_registered_device {int wiphy_idx; int devlist_generation; TYPE_2__* ops; } ;
struct cfg80211_chan_def {int dummy; } ;
typedef enum nl80211_commands { ____Placeholder_nl80211_commands } nl80211_commands ;
struct TYPE_4__ {scalar_t__ get_txq_stats; scalar_t__ get_tx_power; scalar_t__ get_channel; } ;
struct TYPE_3__ {int pub; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int const VAR_1 ;
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
 int VAR_15 ;
 int VAR_16 ;




 int FUNC_1 (int) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_2 (struct sk_buff*,void*) ;
 int FUNC_3 (struct sk_buff*,void*) ;
 int * FUNC_4 (int *,int ) ;
 int FUNC_5 (struct sk_buff*,struct cfg80211_txq_stats*,int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*,struct cfg80211_chan_def*) ;
 void* FUNC_7 (struct sk_buff*,int ,int ,int,int) ;
 scalar_t__ FUNC_8 (struct sk_buff*,int ,int const,int const*) ;
 scalar_t__ FUNC_9 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_10 (struct sk_buff*,int ,int) ;
 scalar_t__ FUNC_11 (struct sk_buff*,int ,int ,int ) ;
 scalar_t__ FUNC_12 (struct sk_buff*,int ,int ) ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 (struct cfg80211_registered_device*,struct wireless_dev*,struct cfg80211_chan_def*) ;
 int FUNC_16 (struct cfg80211_registered_device*,struct wireless_dev*,int*) ;
 int FUNC_17 (struct cfg80211_registered_device*,struct wireless_dev*,struct cfg80211_txq_stats*) ;
 int const* FUNC_18 (struct wireless_dev*) ;
 int FUNC_19 (struct wireless_dev*) ;
 int FUNC_20 (struct wireless_dev*) ;
 int FUNC_21 (struct wireless_dev*) ;

__attribute__((used)) static int FUNC_22(struct sk_buff *VAR_19, u32 VAR_20, u32 VAR_21, int VAR_22,
         struct cfg80211_registered_device *VAR_23,
         struct wireless_dev *VAR_24,
         enum nl80211_commands VAR_25)
{
 struct net_device *VAR_26 = VAR_24->netdev;
 void *VAR_27;

 FUNC_1(VAR_25 != VAR_15 &&
  VAR_25 != VAR_14 &&
  VAR_25 != VAR_16);

 VAR_27 = FUNC_7(VAR_19, VAR_20, VAR_21, VAR_22, VAR_25);
 if (!VAR_27)
  return -1;

 if (VAR_26 &&
     (FUNC_10(VAR_19, VAR_4, VAR_26->ifindex) ||
      FUNC_9(VAR_19, VAR_5, VAR_26->name)))
  goto nla_put_failure;

 if (FUNC_10(VAR_19, VAR_12, VAR_23->wiphy_idx) ||
     FUNC_10(VAR_19, VAR_6, VAR_24->iftype) ||
     FUNC_11(VAR_19, VAR_11, FUNC_19(VAR_24),
         VAR_8) ||
     FUNC_8(VAR_19, VAR_7, VAR_1, FUNC_18(VAR_24)) ||
     FUNC_10(VAR_19, VAR_3,
   VAR_23->devlist_generation ^
   (VAR_18 << 2)) ||
     FUNC_12(VAR_19, VAR_2, VAR_24->use_4addr))
  goto nla_put_failure;

 if (VAR_23->ops->get_channel) {
  int VAR_28;
  struct cfg80211_chan_def VAR_29 = {};

  VAR_28 = FUNC_15(VAR_23, VAR_24, &VAR_29);
  if (VAR_28 == 0) {
   if (FUNC_6(VAR_19, &VAR_29))
    goto nla_put_failure;
  }
 }

 if (VAR_23->ops->get_tx_power) {
  int VAR_30, VAR_31;

  VAR_31 = FUNC_16(VAR_23, VAR_24, &VAR_30);
  if (VAR_31 == 0 &&
      FUNC_10(VAR_19, VAR_13,
    FUNC_0(VAR_30)))
   goto nla_put_failure;
 }

 FUNC_20(VAR_24);
 switch (VAR_24->iftype) {
 case 130:
  if (VAR_24->ssid_len &&
      FUNC_8(VAR_19, VAR_9, VAR_24->ssid_len, VAR_24->ssid))
   goto nla_put_failure_locked;
  break;
 case 128:
 case 129:
 case 131: {
  const u8 *VAR_32;
  if (!VAR_24->current_bss)
   break;
  FUNC_13();
  VAR_32 = FUNC_4(&VAR_24->current_bss->pub,
            VAR_17);
  if (VAR_32 &&
      FUNC_8(VAR_19, VAR_9, VAR_32[1], VAR_32 + 2))
   goto nla_put_failure_rcu_locked;
  FUNC_14();
  break;
  }
 default:

  break;
 }
 FUNC_21(VAR_24);

 if (VAR_23->ops->get_txq_stats) {
  struct cfg80211_txq_stats VAR_33 = {};
  int VAR_34 = FUNC_17(VAR_23, VAR_24, &VAR_33);

  if (VAR_34 == 0 &&
      !FUNC_5(VAR_19, &VAR_33,
        VAR_10))
   goto nla_put_failure;
 }

 FUNC_3(VAR_19, VAR_27);
 return 0;

 nla_put_failure_rcu_locked:
 FUNC_14();
 nla_put_failure_locked:
 FUNC_21(VAR_24);
 nla_put_failure:
 FUNC_2(VAR_19, VAR_27);
 return -VAR_0;
}
