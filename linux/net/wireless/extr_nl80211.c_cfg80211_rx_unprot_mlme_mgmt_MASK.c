
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct wireless_dev {struct wiphy* wiphy; } ;
struct wiphy {int dummy; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct ieee80211_mgmt {int frame_control; } ;
struct cfg80211_registered_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct cfg80211_registered_device*,struct net_device*,int const*,size_t,int ,int ,int,int *,int ) ;
 int FUNC_3 (struct net_device*,int const*,size_t) ;
 struct cfg80211_registered_device* FUNC_4 (struct wiphy*) ;

void FUNC_5(struct net_device *VAR_3, const u8 *VAR_4,
      size_t VAR_5)
{
 struct wireless_dev *VAR_6 = VAR_3->ieee80211_ptr;
 struct wiphy *VAR_7 = VAR_6->wiphy;
 struct cfg80211_registered_device *VAR_8 = FUNC_4(VAR_7);
 const struct ieee80211_mgmt *VAR_9 = (void *)VAR_4;
 u32 VAR_10;

 if (FUNC_0(VAR_5 < 2))
  return;

 if (FUNC_1(VAR_9->frame_control))
  VAR_10 = VAR_1;
 else
  VAR_10 = VAR_2;

 FUNC_3(VAR_3, VAR_4, VAR_5);
 FUNC_2(VAR_8, VAR_3, VAR_4, VAR_5, VAR_10, VAR_0, -1,
    ((void*)0), 0);
}
