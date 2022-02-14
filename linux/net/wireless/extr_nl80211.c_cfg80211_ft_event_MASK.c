
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wiphy {int dummy; } ;
struct sk_buff {int dummy; } ;
struct net_device {int ifindex; TYPE_1__* ieee80211_ptr; } ;
struct cfg80211_registered_device {int wiphy; int wiphy_idx; } ;
struct cfg80211_ft_event_params {scalar_t__ ric_ies; scalar_t__ ric_ies_len; scalar_t__ ies; scalar_t__ ies_len; scalar_t__ target_ap; } ;
struct TYPE_2__ {struct wiphy* wiphy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct sk_buff*,void*) ;
 int FUNC_1 (int *,int ,struct sk_buff*,int ,int ,int ) ;
 int VAR_9 ;
 void* FUNC_2 (struct sk_buff*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ) ;
 int FUNC_5 (struct sk_buff*) ;
 struct sk_buff* FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (struct wiphy*,struct net_device*,struct cfg80211_ft_event_params*) ;
 int FUNC_8 (int *) ;
 struct cfg80211_registered_device* FUNC_9 (struct wiphy*) ;

void FUNC_10(struct net_device *VAR_10,
         struct cfg80211_ft_event_params *VAR_11)
{
 struct wiphy *VAR_12 = VAR_10->ieee80211_ptr->wiphy;
 struct cfg80211_registered_device *VAR_13 = FUNC_9(VAR_12);
 struct sk_buff *VAR_14;
 void *VAR_15;

 FUNC_7(VAR_12, VAR_10, VAR_11);

 if (!VAR_11->target_ap)
  return;

 VAR_14 = FUNC_6(100 + VAR_11->ies_len + VAR_11->ric_ies_len,
   VAR_1);
 if (!VAR_14)
  return;

 VAR_15 = FUNC_2(VAR_14, 0, 0, 0, VAR_7);
 if (!VAR_15)
  goto out;

 if (FUNC_4(VAR_14, VAR_6, VAR_13->wiphy_idx) ||
     FUNC_4(VAR_14, VAR_4, VAR_10->ifindex) ||
     FUNC_3(VAR_14, VAR_5, VAR_0, VAR_11->target_ap))
  goto out;

 if (VAR_11->ies &&
     FUNC_3(VAR_14, VAR_2, VAR_11->ies_len, VAR_11->ies))
  goto out;
 if (VAR_11->ric_ies &&
     FUNC_3(VAR_14, VAR_3, VAR_11->ric_ies_len,
      VAR_11->ric_ies))
  goto out;

 FUNC_0(VAR_14, VAR_15);

 FUNC_1(&VAR_9, FUNC_8(&VAR_13->wiphy), VAR_14, 0,
    VAR_8, VAR_1);
 return;
 out:
 FUNC_5(VAR_14);
}
