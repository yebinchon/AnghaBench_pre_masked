
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
struct sk_buff {int dummy; } ;
struct TYPE_11__ {int type; int * addr; } ;
struct TYPE_9__ {TYPE_2__* associated; } ;
struct TYPE_10__ {TYPE_3__ mgd; } ;
struct ieee80211_sub_if_data {TYPE_5__ vif; TYPE_4__ u; struct ieee80211_local* local; } ;
struct TYPE_7__ {scalar_t__ extra_tx_headroom; } ;
struct ieee80211_local {TYPE_1__ hw; } ;
struct ieee80211_hdr {int frame_control; int addr3; int addr2; int addr1; } ;
typedef int ssize_t ;
typedef int __le16 ;
struct TYPE_12__ {int flags; } ;
struct TYPE_8__ {int * bssid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_6__* FUNC_0 (struct sk_buff*) ;
 int VAR_8 ;
 int VAR_9 ;


 int FUNC_1 (int) ;
 struct sk_buff* FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct ieee80211_sub_if_data*) ;
 int FUNC_5 (struct ieee80211_sub_if_data*,struct sk_buff*) ;
 int FUNC_6 (char const*,int *) ;
 int FUNC_7 (int ,int *,int) ;
 int FUNC_8 (struct ieee80211_sub_if_data*) ;
 int FUNC_9 (struct ieee80211_sub_if_data*) ;
 struct ieee80211_hdr* FUNC_10 (struct sk_buff*,int) ;
 int FUNC_11 (struct sk_buff*,scalar_t__) ;

__attribute__((used)) static ssize_t FUNC_12(
 struct ieee80211_sub_if_data *VAR_10, const char *VAR_11, int VAR_12)
{
 struct ieee80211_local *VAR_13 = VAR_10->local;
 u8 VAR_14[VAR_4];
 struct sk_buff *VAR_15;
 struct ieee80211_hdr *VAR_16;
 __le16 VAR_17;

 if (!FUNC_6(VAR_11, VAR_14))
  return -VAR_0;

 if (!FUNC_4(VAR_10))
  return -VAR_2;

 VAR_15 = FUNC_2(VAR_13->hw.extra_tx_headroom + 24 + 100);
 if (!VAR_15)
  return -VAR_1;
 FUNC_11(VAR_15, VAR_13->hw.extra_tx_headroom);

 VAR_16 = FUNC_10(VAR_15, 24);
 VAR_17 = FUNC_1(VAR_7 | VAR_8);

 switch (VAR_10->vif.type) {
 case 129:
  VAR_17 |= FUNC_1(VAR_5);

  FUNC_7(VAR_16->addr1, VAR_14, VAR_4);
  FUNC_7(VAR_16->addr2, VAR_10->vif.addr, VAR_4);
  FUNC_7(VAR_16->addr3, VAR_10->vif.addr, VAR_4);
  break;
 case 128:
  VAR_17 |= FUNC_1(VAR_6);

  FUNC_8(VAR_10);
  if (!VAR_10->u.mgd.associated) {
   FUNC_9(VAR_10);
   FUNC_3(VAR_15);
   return -VAR_2;
  }
  FUNC_7(VAR_16->addr1, VAR_10->u.mgd.associated->bssid, VAR_4);
  FUNC_7(VAR_16->addr2, VAR_10->vif.addr, VAR_4);
  FUNC_7(VAR_16->addr3, VAR_14, VAR_4);
  FUNC_9(VAR_10);
  break;
 default:
  FUNC_3(VAR_15);
  return -VAR_3;
 }
 VAR_16->frame_control = VAR_17;






 FUNC_10(VAR_15, 50);

 FUNC_0(VAR_15)->flags |= VAR_9;

 FUNC_5(VAR_10, VAR_15);

 return VAR_12;
}
