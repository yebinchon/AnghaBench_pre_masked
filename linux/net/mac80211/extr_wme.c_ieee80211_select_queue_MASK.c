
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int const u8 ;
typedef int u16 ;
struct sta_info {int dummy; } ;
struct sk_buff {int len; int const* data; scalar_t__ priority; } ;
struct TYPE_13__ {int const* bssid; } ;
struct TYPE_12__ {int const* remote_addr; } ;
struct TYPE_11__ {int sta; } ;
struct TYPE_14__ {TYPE_6__ mgd; TYPE_5__ wds; TYPE_4__ vlan; } ;
struct TYPE_10__ {int type; } ;
struct ieee80211_sub_if_data {TYPE_7__ u; TYPE_3__ vif; struct ieee80211_local* local; } ;
struct TYPE_9__ {scalar_t__ queues; } ;
struct ieee80211_local {TYPE_2__ hw; TYPE_1__* ops; } ;
struct TYPE_8__ {scalar_t__ wake_tx_queue; } ;


 scalar_t__ VAR_0 ;





 int FUNC_0 (struct ieee80211_sub_if_data*,struct sta_info*,struct sk_buff*) ;
 int FUNC_1 (int const*) ;
 struct sta_info* FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 struct sta_info* FUNC_5 (struct ieee80211_sub_if_data*,int const*) ;

u16 FUNC_6(struct ieee80211_sub_if_data *VAR_1,
      struct sk_buff *VAR_2)
{
 struct ieee80211_local *VAR_3 = VAR_1->local;
 struct sta_info *VAR_4 = ((void*)0);
 const u8 *VAR_5 = ((void*)0);
 u16 VAR_6;


 if (VAR_3->ops->wake_tx_queue)
  return 0;

 if (VAR_3->hw.queues < VAR_0 || VAR_2->len < 6) {
  VAR_2->priority = 0;
  return 0;
 }

 FUNC_3();
 switch (VAR_1->vif.type) {
 case 130:
  VAR_4 = FUNC_2(VAR_1->u.vlan.sta);
  if (VAR_4)
   break;

 case 131:
  VAR_5 = VAR_2->data;
  break;
 case 128:
  VAR_5 = VAR_1->u.wds.remote_addr;
  break;
 case 129:

  VAR_4 = FUNC_5(VAR_1, VAR_2->data);
  if (VAR_4)
   break;

  VAR_5 = VAR_1->u.mgd.bssid;
  break;
 case 132:
  VAR_5 = VAR_2->data;
  break;
 default:
  break;
 }

 if (!VAR_4 && VAR_5 && !FUNC_1(VAR_5))
  VAR_4 = FUNC_5(VAR_1, VAR_5);

 VAR_6 = FUNC_0(VAR_1, VAR_4, VAR_2);

 FUNC_4();
 return VAR_6;
}
