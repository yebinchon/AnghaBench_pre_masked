
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct wireless_dev {int iftype; struct cfg80211_internal_bss* current_bss; TYPE_1__* netdev; } ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct netlink_callback {int skb; } ;
struct TYPE_7__ {int signal_type; } ;
struct cfg80211_registered_device {TYPE_3__ wiphy; int bss_generation; } ;
struct cfg80211_bss {int signal; int chain_signal; int chains; int scan_width; TYPE_2__* channel; scalar_t__ capability; scalar_t__ beacon_interval; int beacon_ies; int ies; int proberesp_ies; int bssid; } ;
struct cfg80211_internal_bss {struct cfg80211_bss pub; scalar_t__ ts_boottime; int parent_bssid; scalar_t__ parent_tsf; scalar_t__ ts; } ;
struct cfg80211_bss_ies {int data; scalar_t__ len; scalar_t__ tsf; scalar_t__ from_beacon; } ;
struct TYPE_8__ {int portid; } ;
struct TYPE_6__ {int center_freq; } ;
struct TYPE_5__ {int ifindex; } ;


 int FUNC_0 (struct wireless_dev*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_4__ FUNC_1 (int ) ;
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
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;



 int FUNC_2 (struct netlink_callback*,void*) ;
 int FUNC_3 (struct sk_buff*,void*) ;
 int FUNC_4 (struct sk_buff*,void*) ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_29 ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct sk_buff*,int ,int ,int ) ;
 void* FUNC_8 (struct sk_buff*,int ,int ,int,int ) ;
 int FUNC_9 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_10 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_11 (struct sk_buff*,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_12 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_13 (struct sk_buff*,int ,scalar_t__) ;
 scalar_t__ FUNC_14 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_15 (struct sk_buff*,int ,scalar_t__,int ) ;
 int FUNC_16 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_17 (int ) ;
 struct cfg80211_bss_ies* FUNC_18 (int ) ;
 int FUNC_19 () ;
 int FUNC_20 () ;
 scalar_t__ FUNC_21 (struct wireless_dev*) ;

__attribute__((used)) static int FUNC_22(struct sk_buff *VAR_30, struct netlink_callback *VAR_31,
       u32 VAR_32, int VAR_33,
       struct cfg80211_registered_device *VAR_34,
       struct wireless_dev *VAR_35,
       struct cfg80211_internal_bss *VAR_36)
{
 struct cfg80211_bss *VAR_37 = &VAR_36->pub;
 const struct cfg80211_bss_ies *VAR_38;
 void *VAR_39;
 struct nlattr *VAR_40;

 FUNC_0(VAR_35);

 VAR_39 = FUNC_8(VAR_30, FUNC_1(VAR_31->skb).portid, VAR_32, VAR_33,
        VAR_28);
 if (!VAR_39)
  return -1;

 FUNC_2(VAR_31, VAR_39);

 if (FUNC_14(VAR_30, VAR_3, VAR_34->bss_generation))
  goto nla_put_failure;
 if (VAR_35->netdev &&
     FUNC_14(VAR_30, VAR_4, VAR_35->netdev->ifindex))
  goto nla_put_failure;
 if (FUNC_15(VAR_30, VAR_6, FUNC_21(VAR_35),
         VAR_5))
  goto nla_put_failure;

 VAR_40 = FUNC_10(VAR_30, VAR_2);
 if (!VAR_40)
  goto nla_put_failure;
 if ((!FUNC_5(VAR_37->bssid) &&
      FUNC_11(VAR_30, VAR_10, VAR_1, VAR_37->bssid)))
  goto nla_put_failure;

 FUNC_19();

 if (FUNC_17(VAR_37->proberesp_ies) &&
     FUNC_12(VAR_30, VAR_20))
  goto fail_unlock_rcu;




 VAR_38 = FUNC_18(VAR_37->ies);
 if (VAR_38) {
  if (FUNC_15(VAR_30, VAR_27, VAR_38->tsf,
          VAR_17))
   goto fail_unlock_rcu;
  if (VAR_38->len && FUNC_11(VAR_30, VAR_15,
     VAR_38->len, VAR_38->data))
   goto fail_unlock_rcu;
 }


 VAR_38 = FUNC_18(VAR_37->beacon_ies);
 if (VAR_38 && VAR_38->from_beacon) {
  if (FUNC_15(VAR_30, VAR_9, VAR_38->tsf,
          VAR_17))
   goto fail_unlock_rcu;
  if (VAR_38->len && FUNC_11(VAR_30, VAR_7,
     VAR_38->len, VAR_38->data))
   goto fail_unlock_rcu;
 }
 FUNC_20();

 if (VAR_37->beacon_interval &&
     FUNC_13(VAR_30, VAR_8, VAR_37->beacon_interval))
  goto nla_put_failure;
 if (FUNC_13(VAR_30, VAR_11, VAR_37->capability) ||
     FUNC_14(VAR_30, VAR_14, VAR_37->channel->center_freq) ||
     FUNC_14(VAR_30, VAR_13, VAR_37->scan_width) ||
     FUNC_14(VAR_30, VAR_21,
   FUNC_6(VAR_29 - VAR_36->ts)))
  goto nla_put_failure;

 if (VAR_36->parent_tsf &&
     (FUNC_15(VAR_30, VAR_19,
          VAR_36->parent_tsf, VAR_17) ||
      FUNC_11(VAR_30, VAR_18, VAR_1,
       VAR_36->parent_bssid)))
  goto nla_put_failure;

 if (VAR_36->ts_boottime &&
     FUNC_15(VAR_30, VAR_16,
         VAR_36->ts_boottime, VAR_17))
  goto nla_put_failure;

 if (!FUNC_7(VAR_30, VAR_36->pub.chains,
    VAR_36->pub.chain_signal,
    VAR_12))
  goto nla_put_failure;

 switch (VAR_34->wiphy.signal_type) {
 case 132:
  if (FUNC_14(VAR_30, VAR_22, VAR_37->signal))
   goto nla_put_failure;
  break;
 case 131:
  if (FUNC_16(VAR_30, VAR_23, VAR_37->signal))
   goto nla_put_failure;
  break;
 default:
  break;
 }

 switch (VAR_35->iftype) {
 case 129:
 case 128:
  if (VAR_36 == VAR_35->current_bss &&
      FUNC_14(VAR_30, VAR_24,
    VAR_25))
   goto nla_put_failure;
  break;
 case 130:
  if (VAR_36 == VAR_35->current_bss &&
      FUNC_14(VAR_30, VAR_24,
    VAR_26))
   goto nla_put_failure;
  break;
 default:
  break;
 }

 FUNC_9(VAR_30, VAR_40);

 FUNC_4(VAR_30, VAR_39);
 return 0;

 fail_unlock_rcu:
 FUNC_20();
 nla_put_failure:
 FUNC_3(VAR_30, VAR_39);
 return -VAR_0;
}
