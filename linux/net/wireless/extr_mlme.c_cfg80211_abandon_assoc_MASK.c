
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wireless_dev {struct wiphy* wiphy; } ;
struct wiphy {int dummy; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct cfg80211_bss {int dummy; } ;


 int FUNC_0 (struct cfg80211_bss*) ;
 int FUNC_1 (struct wiphy*,struct cfg80211_bss*) ;
 int FUNC_2 (struct wireless_dev*) ;
 int FUNC_3 (int ) ;

void FUNC_4(struct net_device *VAR_0, struct cfg80211_bss *VAR_1)
{
 struct wireless_dev *VAR_2 = VAR_0->ieee80211_ptr;
 struct wiphy *VAR_3 = VAR_2->wiphy;

 FUNC_2(VAR_2);

 FUNC_3(FUNC_0(VAR_1));
 FUNC_1(VAR_3, VAR_1);
}
