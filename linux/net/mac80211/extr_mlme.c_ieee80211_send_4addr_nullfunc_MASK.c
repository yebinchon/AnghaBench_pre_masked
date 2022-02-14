
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_9__ {scalar_t__ type; int addr; } ;
struct TYPE_7__ {int flags; int bssid; } ;
struct TYPE_8__ {TYPE_2__ mgd; } ;
struct ieee80211_sub_if_data {TYPE_4__ vif; TYPE_3__ u; } ;
struct TYPE_6__ {int extra_tx_headroom; } ;
struct ieee80211_local {TYPE_1__ hw; } ;
struct ieee80211_hdr {int addr4; int addr3; int addr2; int addr1; int frame_control; } ;
typedef int __le16 ;
struct TYPE_10__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_5__* FUNC_0 (struct sk_buff*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 struct sk_buff* FUNC_3 (int ) ;
 int FUNC_4 (struct ieee80211_sub_if_data*,struct sk_buff*) ;
 int FUNC_5 (int ,int ,int ) ;
 struct ieee80211_hdr* FUNC_6 (struct sk_buff*,int) ;
 int FUNC_7 (struct sk_buff*,int ) ;

__attribute__((used)) static void FUNC_8(struct ieee80211_local *VAR_8,
       struct ieee80211_sub_if_data *VAR_9)
{
 struct sk_buff *VAR_10;
 struct ieee80211_hdr *VAR_11;
 __le16 VAR_12;

 if (FUNC_1(VAR_9->vif.type != VAR_7))
  return;


 if (!(VAR_9->u.mgd.flags & VAR_4))
  return;

 VAR_10 = FUNC_3(VAR_8->hw.extra_tx_headroom + 30);
 if (!VAR_10)
  return;

 FUNC_7(VAR_10, VAR_8->hw.extra_tx_headroom);

 VAR_11 = FUNC_6(VAR_10, 30);
 VAR_12 = FUNC_2(VAR_3 | VAR_5 |
    VAR_1 | VAR_2);
 VAR_11->frame_control = VAR_12;
 FUNC_5(VAR_11->addr1, VAR_9->u.mgd.bssid, VAR_0);
 FUNC_5(VAR_11->addr2, VAR_9->vif.addr, VAR_0);
 FUNC_5(VAR_11->addr3, VAR_9->u.mgd.bssid, VAR_0);
 FUNC_5(VAR_11->addr4, VAR_9->vif.addr, VAR_0);

 FUNC_0(VAR_10)->flags |= VAR_6;
 FUNC_4(VAR_9, VAR_10);
}
