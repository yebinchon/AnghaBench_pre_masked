
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int dummy; } ;
struct cfg80211_registered_device {struct wiphy wiphy; } ;


 int FUNC_0 () ;
 struct cfg80211_registered_device* FUNC_1 (int) ;

struct wiphy *FUNC_2(int VAR_0)
{
 struct cfg80211_registered_device *VAR_1;

 FUNC_0();

 VAR_1 = FUNC_1(VAR_0);
 if (!VAR_1)
  return ((void*)0);
 return &VAR_1->wiphy;
}
