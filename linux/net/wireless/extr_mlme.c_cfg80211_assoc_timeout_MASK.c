
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wireless_dev {struct wiphy* wiphy; } ;
struct wiphy {int dummy; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct cfg80211_registered_device {int dummy; } ;
struct cfg80211_bss {int bssid; } ;


 int VAR_0 ;
 int FUNC_0 (struct cfg80211_bss*) ;
 int FUNC_1 (struct wiphy*,struct cfg80211_bss*) ;
 int FUNC_2 (struct wireless_dev*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct cfg80211_registered_device*,struct net_device*,int ,int ) ;
 int FUNC_5 (struct net_device*,int ) ;
 struct cfg80211_registered_device* FUNC_6 (struct wiphy*) ;

void FUNC_7(struct net_device *VAR_1, struct cfg80211_bss *VAR_2)
{
 struct wireless_dev *VAR_3 = VAR_1->ieee80211_ptr;
 struct wiphy *VAR_4 = VAR_3->wiphy;
 struct cfg80211_registered_device *VAR_5 = FUNC_6(VAR_4);

 FUNC_5(VAR_1, VAR_2->bssid);

 FUNC_4(VAR_5, VAR_1, VAR_2->bssid, VAR_0);
 FUNC_2(VAR_3);

 FUNC_3(FUNC_0(VAR_2));
 FUNC_1(VAR_4, VAR_2);
}
