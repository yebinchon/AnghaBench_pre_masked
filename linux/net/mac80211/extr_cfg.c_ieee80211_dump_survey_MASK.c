
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int dummy; } ;
struct survey_info {int dummy; } ;
struct net_device {int ieee80211_ptr; } ;
struct ieee80211_local {int dummy; } ;


 int FUNC_0 (struct ieee80211_local*,int,struct survey_info*) ;
 struct ieee80211_local* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct wiphy *VAR_0, struct net_device *VAR_1,
     int VAR_2, struct survey_info *VAR_3)
{
 struct ieee80211_local *VAR_4 = FUNC_1(VAR_1->ieee80211_ptr);

 return FUNC_0(VAR_4, VAR_2, VAR_3);
}
