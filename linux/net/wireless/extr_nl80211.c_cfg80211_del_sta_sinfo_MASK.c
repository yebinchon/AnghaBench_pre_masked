
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wiphy {int dummy; } ;
struct station_info {int dummy; } ;
struct sk_buff {int dummy; } ;
struct net_device {TYPE_1__* ieee80211_ptr; } ;
struct cfg80211_registered_device {int wiphy; } ;
typedef int gfp_t ;
struct TYPE_2__ {struct wiphy* wiphy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct station_info*) ;
 int FUNC_1 (int *,int ,struct sk_buff*,int ,int ,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ,int ,int ,int ,struct cfg80211_registered_device*,struct net_device*,int const*,struct station_info*) ;
 int FUNC_3 (struct sk_buff*) ;
 struct sk_buff* FUNC_4 (int ,int ) ;
 int FUNC_5 (struct net_device*,int const*) ;
 int FUNC_6 (int *) ;
 struct cfg80211_registered_device* FUNC_7 (struct wiphy*) ;

void FUNC_8(struct net_device *VAR_4, const u8 *VAR_5,
       struct station_info *VAR_6, gfp_t VAR_7)
{
 struct wiphy *VAR_8 = VAR_4->ieee80211_ptr->wiphy;
 struct cfg80211_registered_device *VAR_9 = FUNC_7(VAR_8);
 struct sk_buff *VAR_10;
 struct station_info VAR_11 = {};

 if (!VAR_6)
  VAR_6 = &VAR_11;

 FUNC_5(VAR_4, VAR_5);

 VAR_10 = FUNC_4(VAR_2, VAR_7);
 if (!VAR_10) {
  FUNC_0(VAR_6);
  return;
 }

 if (FUNC_2(VAR_10, VAR_0, 0, 0, 0,
     VAR_9, VAR_4, VAR_5, VAR_6) < 0) {
  FUNC_3(VAR_10);
  return;
 }

 FUNC_1(&VAR_3, FUNC_6(&VAR_9->wiphy), VAR_10, 0,
    VAR_1, VAR_7);
}
