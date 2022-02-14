
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int len; scalar_t__ data; } ;
struct TYPE_11__ {int * remote_addr; } ;
struct TYPE_8__ {int * bssid; } ;
struct TYPE_7__ {int use_4addr; } ;
struct TYPE_12__ {TYPE_5__ wds; TYPE_2__ ibss; TYPE_1__ mgd; } ;
struct TYPE_10__ {int type; int * addr; } ;
struct ieee80211_sub_if_data {TYPE_6__ u; TYPE_4__ vif; TYPE_3__* dev; } ;
struct ieee80211_rx_status {int rate_idx; int encoding; } ;
struct ieee80211_rx_data {int sta; struct sk_buff* skb; struct ieee80211_sub_if_data* sdata; } ;
struct ieee80211_hdr {int frame_control; int addr2; int addr1; } ;
struct TYPE_9__ {int * dev_addr; } ;


 int FUNC_0 (int) ;
 struct ieee80211_rx_status* FUNC_1 (struct sk_buff*) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int *) ;
 int * FUNC_5 (struct ieee80211_hdr*,int ,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct ieee80211_sub_if_data*,int *,int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct ieee80211_hdr*,int ) ;
 int FUNC_15 (struct sk_buff*) ;
 int FUNC_16 (struct ieee80211_sub_if_data*,int *,int ,int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int ) ;

__attribute__((used)) static bool FUNC_19(struct ieee80211_rx_data *VAR_1)
{
 struct ieee80211_sub_if_data *VAR_2 = VAR_1->sdata;
 struct sk_buff *VAR_3 = VAR_1->skb;
 struct ieee80211_hdr *VAR_4 = (void *)VAR_3->data;
 struct ieee80211_rx_status *VAR_5 = FUNC_1(VAR_3);
 u8 *VAR_6 = FUNC_5(VAR_4, VAR_3->len, VAR_2->vif.type);
 bool VAR_7 = FUNC_18(VAR_4->addr1);

 switch (VAR_2->vif.type) {
 case 129:
  if (!VAR_6 && !VAR_2->u.mgd.use_4addr)
   return 0;
  if (FUNC_15(VAR_3) && !VAR_1->sta)
   return 0;
  if (VAR_7)
   return 1;
  return FUNC_3(VAR_2->vif.addr, VAR_4->addr1);
 case 136:
  if (!VAR_6)
   return 0;
  if (FUNC_3(VAR_2->vif.addr, VAR_4->addr2) ||
      FUNC_3(VAR_2->u.ibss.bssid, VAR_4->addr2))
   return 0;
  if (FUNC_9(VAR_4->frame_control))
   return 1;
  if (!FUNC_4(VAR_6, VAR_2->u.ibss.bssid))
   return 0;
  if (!VAR_7 &&
      !FUNC_3(VAR_2->vif.addr, VAR_4->addr1))
   return 0;
  if (!VAR_1->sta) {
   int VAR_8;
   if (VAR_5->encoding != VAR_0)
    VAR_8 = 0;
   else
    VAR_8 = VAR_5->rate_idx;
   FUNC_7(VAR_2, VAR_6, VAR_4->addr2,
       FUNC_0(VAR_8));
  }
  return 1;
 case 131:
  if (!VAR_6)
   return 0;
  if (!FUNC_11(VAR_4->frame_control))
   return 0;
  if (!FUNC_17(VAR_6))
   return 0;
  if (!VAR_7 &&
      !FUNC_3(VAR_2->dev->dev_addr, VAR_4->addr1))
   return 0;
  if (!VAR_1->sta) {
   int VAR_9;
   if (VAR_5->encoding != VAR_0)
    VAR_9 = 0;
   else
    VAR_9 = VAR_5->rate_idx;
   FUNC_16(VAR_2, VAR_6, VAR_4->addr2,
      FUNC_0(VAR_9));
  }
  return 1;
 case 133:
  if (FUNC_3(VAR_2->vif.addr, VAR_4->addr2))
   return 0;
  if (VAR_7)
   return 1;
  return FUNC_3(VAR_2->vif.addr, VAR_4->addr1);
 case 134:
 case 135:
  if (!VAR_6)
   return FUNC_3(VAR_2->vif.addr, VAR_4->addr1);

  if (!FUNC_4(VAR_6, VAR_2->vif.addr)) {






   if (!VAR_7 &&
       !FUNC_3(VAR_2->vif.addr, VAR_4->addr1))
    return 0;
   if (FUNC_14(VAR_4, VAR_3->len))
    return 1;
   return FUNC_9(VAR_4->frame_control);
  }

  if (!FUNC_6(VAR_4->frame_control)) {

   if (FUNC_10(VAR_4->frame_control))
    return 0;

   if (FUNC_8(VAR_4->frame_control) &&
       !FUNC_17(VAR_6) &&
       !FUNC_3(VAR_6, VAR_4->addr1))
    return 0;
  }
  if (FUNC_10(VAR_4->frame_control) && VAR_7)
   return 0;

  return 1;
 case 128:
  if (VAR_6 || !FUNC_10(VAR_4->frame_control))
   return 0;
  return FUNC_3(VAR_2->u.wds.remote_addr, VAR_4->addr2);
 case 130:
  return FUNC_14(VAR_4, VAR_3->len) ||
         FUNC_12(VAR_4->frame_control) ||
         FUNC_13(VAR_4->frame_control) ||
         FUNC_9(VAR_4->frame_control);
 case 132:

  return 0;
 default:
  break;
 }

 FUNC_2(1);
 return 0;
}
