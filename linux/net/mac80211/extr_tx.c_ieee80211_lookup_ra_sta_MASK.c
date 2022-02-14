
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


struct sta_info {int dummy; } ;
struct sk_buff {int data; } ;
struct TYPE_13__ {int bssid; } ;
struct TYPE_10__ {int remote_addr; } ;
struct TYPE_9__ {int sta; } ;
struct TYPE_14__ {TYPE_6__ mgd; TYPE_3__ wds; TYPE_2__ vlan; } ;
struct TYPE_12__ {TYPE_4__* wiphy; int use_4addr; } ;
struct TYPE_8__ {int type; } ;
struct ieee80211_sub_if_data {TYPE_7__ u; TYPE_5__ wdev; TYPE_1__ vif; } ;
struct TYPE_11__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sta_info* FUNC_0 (int ) ;







 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ) ;
 struct sta_info* FUNC_3 (int ) ;
 struct sta_info* FUNC_4 (struct ieee80211_sub_if_data*,int ) ;
 struct sta_info* FUNC_5 (struct ieee80211_sub_if_data*,int ) ;
 int FUNC_6 (struct sta_info*,int ) ;

__attribute__((used)) static int FUNC_7(struct ieee80211_sub_if_data *VAR_6,
       struct sk_buff *VAR_7,
       struct sta_info **VAR_8)
{
 struct sta_info *VAR_9;

 switch (VAR_6->vif.type) {
 case 132:
  VAR_9 = FUNC_3(VAR_6->u.vlan.sta);
  if (VAR_9) {
   *VAR_8 = VAR_9;
   return 0;
  } else if (VAR_6->wdev.use_4addr) {
   return -VAR_2;
  }

 case 133:
 case 130:
 case 134:
  if (FUNC_2(VAR_7->data)) {
   *VAR_8 = FUNC_0(-VAR_1);
   return 0;
  }
  VAR_9 = FUNC_5(VAR_6, VAR_7->data);
  break;
 case 128:
  VAR_9 = FUNC_4(VAR_6, VAR_6->u.wds.remote_addr);
  break;






 case 129:
  if (VAR_6->wdev.wiphy->flags & VAR_3) {
   VAR_9 = FUNC_4(VAR_6, VAR_7->data);
   if (VAR_9 && FUNC_6(VAR_9, VAR_4)) {
    if (FUNC_6(VAR_9,
        VAR_5)) {
     *VAR_8 = VAR_9;
     return 0;
    }
    if (!FUNC_1(VAR_7))
     return -VAR_0;
   }

  }

  VAR_9 = FUNC_4(VAR_6, VAR_6->u.mgd.bssid);
  if (!VAR_9)
   return -VAR_2;
  break;
 default:
  return -VAR_0;
 }

 *VAR_8 = VAR_9 ?: FUNC_0(-VAR_1);
 return 0;
}
