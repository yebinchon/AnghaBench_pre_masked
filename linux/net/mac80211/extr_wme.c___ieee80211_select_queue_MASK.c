
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {int wme; } ;
struct sta_info {TYPE_1__ sta; } ;
struct sk_buff {int priority; scalar_t__ protocol; } ;
struct mac80211_qos_map {int qos_map; } ;
struct TYPE_4__ {scalar_t__ type; } ;
struct ieee80211_sub_if_data {scalar_t__ control_port_protocol; int qos_map; TYPE_2__ vif; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct sk_buff*,int *) ;
 int FUNC_1 (struct ieee80211_sub_if_data*,struct sta_info*,struct sk_buff*) ;
 struct mac80211_qos_map* FUNC_2 (int ) ;

u16 FUNC_3(struct ieee80211_sub_if_data *VAR_3,
        struct sta_info *VAR_4, struct sk_buff *VAR_5)
{
 struct mac80211_qos_map *VAR_6;
 bool VAR_7;


 if (VAR_3->vif.type == VAR_1 ||
     VAR_3->vif.type == VAR_2)
  VAR_7 = 1;
 else if (VAR_4)
  VAR_7 = VAR_4->sta.wme;
 else
  VAR_7 = 0;

 if (!VAR_7) {
  VAR_5->priority = 0;
  return VAR_0;
 }

 if (VAR_5->protocol == VAR_3->control_port_protocol) {
  VAR_5->priority = 7;
  goto downgrade;
 }



 VAR_6 = FUNC_2(VAR_3->qos_map);
 VAR_5->priority = FUNC_0(VAR_5, VAR_6 ?
            &VAR_6->qos_map : ((void*)0));

 downgrade:
 return FUNC_1(VAR_3, VAR_4, VAR_5);
}
