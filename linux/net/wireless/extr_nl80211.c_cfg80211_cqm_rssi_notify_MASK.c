
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wireless_dev {TYPE_1__* cqm_config; int wiphy; } ;
struct sk_buff {int dummy; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct cfg80211_registered_device {int dummy; } ;
typedef int s32 ;
typedef int gfp_t ;
typedef enum nl80211_cqm_rssi_threshold_event { ____Placeholder_nl80211_cqm_rssi_threshold_event } nl80211_cqm_rssi_threshold_event ;
struct TYPE_2__ {int last_rssi_event_value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct cfg80211_registered_device*,struct net_device*) ;
 struct sk_buff* FUNC_2 (struct net_device*,int *,int ) ;
 int FUNC_3 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct net_device*,int,int ) ;
 struct cfg80211_registered_device* FUNC_8 (int ) ;

void FUNC_9(struct net_device *VAR_4,
         enum nl80211_cqm_rssi_threshold_event VAR_5,
         s32 VAR_6, gfp_t VAR_7)
{
 struct sk_buff *VAR_8;
 struct wireless_dev *VAR_9 = VAR_4->ieee80211_ptr;
 struct cfg80211_registered_device *VAR_10 = FUNC_8(VAR_9->wiphy);

 FUNC_7(VAR_4, VAR_5, VAR_6);

 if (FUNC_0(VAR_5 != VAR_3 &&
      VAR_5 != VAR_2))
  return;

 if (VAR_9->cqm_config) {
  VAR_9->cqm_config->last_rssi_event_value = VAR_6;

  FUNC_1(VAR_10, VAR_4);

  if (VAR_6 == 0)
   VAR_6 = VAR_9->cqm_config->last_rssi_event_value;
 }

 VAR_8 = FUNC_2(VAR_4, ((void*)0), VAR_7);
 if (!VAR_8)
  return;

 if (FUNC_5(VAR_8, VAR_1,
   VAR_5))
  goto nla_put_failure;

 if (VAR_6 && FUNC_4(VAR_8, VAR_0,
          VAR_6))
  goto nla_put_failure;

 FUNC_3(VAR_8, VAR_7);

 return;

 nla_put_failure:
 FUNC_6(VAR_8);
}
