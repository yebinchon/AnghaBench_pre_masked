
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wireless_dev {struct wiphy* wiphy; } ;
struct wiphy {int dummy; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct cfg80211_registered_device {int dummy; } ;
typedef int gfp_t ;


 int FUNC_0 (struct cfg80211_registered_device*,struct net_device*,int,int const*,int,int ) ;
 int FUNC_1 (struct net_device*,int,int const*,int) ;
 struct cfg80211_registered_device* FUNC_2 (struct wiphy*) ;

void FUNC_3(struct net_device *VAR_0, int VAR_1,
         const u8 *VAR_2, bool VAR_3, gfp_t VAR_4)
{
 struct wireless_dev *VAR_5 = VAR_0->ieee80211_ptr;
 struct wiphy *VAR_6 = VAR_5->wiphy;
 struct cfg80211_registered_device *VAR_7 = FUNC_2(VAR_6);

 FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
 FUNC_0(VAR_7, VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
}
