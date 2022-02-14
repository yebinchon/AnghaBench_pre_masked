
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct wiphy {int dummy; } ;
struct vif_params {scalar_t__ use_4addr; } ;
struct net_device {int dummy; } ;
struct TYPE_8__ {scalar_t__ type; } ;
struct TYPE_6__ {scalar_t__ use_4addr; } ;
struct TYPE_5__ {int sta; } ;
struct TYPE_7__ {TYPE_2__ mgd; TYPE_1__ vlan; } ;
struct ieee80211_sub_if_data {TYPE_4__ vif; TYPE_3__ u; } ;
typedef enum nl80211_iftype { ____Placeholder_nl80211_iftype } nl80211_iftype ;


 struct ieee80211_sub_if_data* FUNC_0 (struct net_device*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct ieee80211_sub_if_data*) ;
 int FUNC_3 (struct ieee80211_sub_if_data*,int) ;
 int FUNC_4 (struct ieee80211_sub_if_data*,struct vif_params*) ;

__attribute__((used)) static int FUNC_5(struct wiphy *VAR_3,
      struct net_device *VAR_4,
      enum nl80211_iftype VAR_5,
      struct vif_params *VAR_6)
{
 struct ieee80211_sub_if_data *VAR_7 = FUNC_0(VAR_4);
 int VAR_8;

 VAR_8 = FUNC_3(VAR_7, VAR_5);
 if (VAR_8)
  return VAR_8;

 if (VAR_5 == VAR_0 && VAR_6->use_4addr == 0) {
  FUNC_1(VAR_7->u.vlan.sta, ((void*)0));
  FUNC_2(VAR_7);
 } else if (VAR_5 == VAR_2 && VAR_6->use_4addr >= 0) {
  VAR_7->u.mgd.use_4addr = VAR_6->use_4addr;
 }

 if (VAR_7->vif.type == VAR_1) {
  VAR_8 = FUNC_4(VAR_7, VAR_6);
  if (VAR_8)
   return VAR_8;
 }

 return 0;
}
