
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wireless_dev {int dummy; } ;
struct sk_buff {int dummy; } ;
struct net_device {int ifindex; struct wireless_dev* ieee80211_ptr; } ;
struct cfg80211_registered_device {int wiphy_idx; int wiphy; } ;
struct cfg80211_chan_def {int dummy; } ;
typedef int gfp_t ;
typedef enum nl80211_radar_event { ____Placeholder_nl80211_radar_event } nl80211_radar_event ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct sk_buff*,void*) ;
 int FUNC_1 (int *,int ,struct sk_buff*,int ,int ,int ) ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (struct sk_buff*,struct cfg80211_chan_def const*) ;
 void* FUNC_3 (struct sk_buff*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int ,int ) ;
 int FUNC_6 (struct sk_buff*) ;
 struct sk_buff* FUNC_7 (int ,int ) ;
 int FUNC_8 (struct wireless_dev*) ;
 int FUNC_9 (int *) ;

void
FUNC_10(struct cfg80211_registered_device *VAR_9,
       const struct cfg80211_chan_def *VAR_10,
       enum nl80211_radar_event VAR_11,
       struct net_device *VAR_12, gfp_t VAR_13)
{
 struct sk_buff *VAR_14;
 void *VAR_15;

 VAR_14 = FUNC_7(VAR_7, VAR_13);
 if (!VAR_14)
  return;

 VAR_15 = FUNC_3(VAR_14, 0, 0, 0, VAR_5);
 if (!VAR_15) {
  FUNC_6(VAR_14);
  return;
 }

 if (FUNC_4(VAR_14, VAR_4, VAR_9->wiphy_idx))
  goto nla_put_failure;


 if (VAR_12) {
  struct wireless_dev *VAR_16 = VAR_12->ieee80211_ptr;

  if (FUNC_4(VAR_14, VAR_0, VAR_12->ifindex) ||
      FUNC_5(VAR_14, VAR_3, FUNC_8(VAR_16),
          VAR_1))
   goto nla_put_failure;
 }

 if (FUNC_4(VAR_14, VAR_2, VAR_11))
  goto nla_put_failure;

 if (FUNC_2(VAR_14, VAR_10))
  goto nla_put_failure;

 FUNC_0(VAR_14, VAR_15);

 FUNC_1(&VAR_8, FUNC_9(&VAR_9->wiphy), VAR_14, 0,
    VAR_6, VAR_13);
 return;

 nla_put_failure:
 FUNC_6(VAR_14);
}
