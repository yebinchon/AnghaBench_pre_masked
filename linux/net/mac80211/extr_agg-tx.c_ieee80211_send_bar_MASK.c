
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct sk_buff {int dummy; } ;
struct ieee80211_vif {int dummy; } ;
struct TYPE_5__ {int * addr; } ;
struct ieee80211_sub_if_data {TYPE_2__ vif; struct ieee80211_local* local; } ;
struct TYPE_4__ {scalar_t__ extra_tx_headroom; } ;
struct ieee80211_local {TYPE_1__ hw; } ;
struct ieee80211_bar {void* start_seq_num; void* control; int ta; int ra; void* frame_control; } ;
struct TYPE_6__ {int flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_3__* FUNC_0 (struct sk_buff*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_1 (int) ;
 struct sk_buff* FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct ieee80211_sub_if_data*,struct sk_buff*,int) ;
 int FUNC_4 (int ,int *,int ) ;
 struct ieee80211_bar* FUNC_5 (struct sk_buff*,int) ;
 int FUNC_6 (struct sk_buff*,scalar_t__) ;
 struct ieee80211_sub_if_data* FUNC_7 (struct ieee80211_vif*) ;

void FUNC_8(struct ieee80211_vif *VAR_8, u8 *VAR_9, u16 VAR_10, u16 VAR_11)
{
 struct ieee80211_sub_if_data *VAR_12 = FUNC_7(VAR_8);
 struct ieee80211_local *VAR_13 = VAR_12->local;
 struct sk_buff *VAR_14;
 struct ieee80211_bar *VAR_15;
 u16 VAR_16 = 0;

 VAR_14 = FUNC_2(sizeof(*VAR_15) + VAR_13->hw.extra_tx_headroom);
 if (!VAR_14)
  return;

 FUNC_6(VAR_14, VAR_13->hw.extra_tx_headroom);
 VAR_15 = FUNC_5(VAR_14, sizeof(*VAR_15));
 VAR_15->frame_control = FUNC_1(VAR_4 |
      VAR_5);
 FUNC_4(VAR_15->ra, VAR_9, VAR_0);
 FUNC_4(VAR_15->ta, VAR_12->vif.addr, VAR_0);
 VAR_16 |= (u16)VAR_1;
 VAR_16 |= (u16)VAR_2;
 VAR_16 |= (u16)(VAR_10 << VAR_3);
 VAR_15->control = FUNC_1(VAR_16);
 VAR_15->start_seq_num = FUNC_1(VAR_11);

 FUNC_0(VAR_14)->flags |= VAR_7 |
     VAR_6;
 FUNC_3(VAR_12, VAR_14, VAR_10);
}
