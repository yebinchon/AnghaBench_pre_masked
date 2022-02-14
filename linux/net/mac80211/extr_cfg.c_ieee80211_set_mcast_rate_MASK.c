
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wiphy {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {int mcast_rate; } ;
struct TYPE_4__ {TYPE_1__ bss_conf; } ;
struct ieee80211_sub_if_data {TYPE_2__ vif; } ;


 int VAR_0 ;
 struct ieee80211_sub_if_data* FUNC_0 (struct net_device*) ;
 int VAR_1 ;
 int FUNC_1 (struct ieee80211_sub_if_data*,int ) ;
 int FUNC_2 (int ,int*,int) ;

__attribute__((used)) static int FUNC_3(struct wiphy *VAR_2, struct net_device *VAR_3,
        int VAR_4[VAR_1])
{
 struct ieee80211_sub_if_data *VAR_5 = FUNC_0(VAR_3);

 FUNC_2(VAR_5->vif.bss_conf.mcast_rate, VAR_4,
        sizeof(int) * VAR_1);

 FUNC_1(VAR_5, VAR_0);

 return 0;
}
