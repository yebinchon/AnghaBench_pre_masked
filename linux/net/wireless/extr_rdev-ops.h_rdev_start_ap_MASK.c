
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct cfg80211_registered_device {int wiphy; TYPE_1__* ops; } ;
struct cfg80211_ap_settings {int dummy; } ;
struct TYPE_2__ {int (* start_ap ) (int *,struct net_device*,struct cfg80211_ap_settings*) ;} ;


 int FUNC_0 (int *,struct net_device*,struct cfg80211_ap_settings*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,struct net_device*,struct cfg80211_ap_settings*) ;

__attribute__((used)) static inline int FUNC_3(struct cfg80211_registered_device *VAR_0,
    struct net_device *VAR_1,
    struct cfg80211_ap_settings *VAR_2)
{
 int VAR_3;
 FUNC_2(&VAR_0->wiphy, VAR_1, VAR_2);
 VAR_3 = VAR_0->ops->start_ap(&VAR_0->wiphy, VAR_1, VAR_2);
 FUNC_1(&VAR_0->wiphy, VAR_3);
 return VAR_3;
}
