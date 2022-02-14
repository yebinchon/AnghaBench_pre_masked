
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wiphy {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {int multicast_to_unicast; } ;
struct TYPE_4__ {TYPE_1__ ap; } ;
struct ieee80211_sub_if_data {TYPE_2__ u; } ;


 struct ieee80211_sub_if_data* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct wiphy *VAR_0,
           struct net_device *VAR_1,
           const bool VAR_2)
{
 struct ieee80211_sub_if_data *VAR_3 = FUNC_0(VAR_1);

 VAR_3->u.ap.multicast_to_unicast = VAR_2;

 return 0;
}
