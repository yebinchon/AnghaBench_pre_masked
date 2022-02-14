
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int addr; } ;
struct sta_info {TYPE_3__ sta; struct ieee80211_sub_if_data* sdata; } ;
struct sk_buff {int dummy; } ;
struct TYPE_5__ {int addr; } ;
struct ieee80211_sub_if_data {TYPE_2__ vif; struct ieee80211_local* local; } ;
struct TYPE_4__ {scalar_t__ extra_tx_headroom; } ;
struct ieee80211_local {TYPE_1__ hw; } ;
struct ieee80211_hdr {int addr1; scalar_t__ seq_ctrl; scalar_t__ duration_id; int frame_control; } ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 struct sk_buff* FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct ieee80211_hdr*,int *,int ,int ) ;
 int FUNC_3 (struct ieee80211_sub_if_data*,struct sta_info*,struct ieee80211_hdr*) ;
 int FUNC_4 (int ,int ,int ) ;
 struct ieee80211_hdr* FUNC_5 (struct sk_buff*,int) ;
 int FUNC_6 (struct sk_buff*,int) ;
 int FUNC_7 (struct sk_buff*,scalar_t__) ;

__attribute__((used)) static struct sk_buff *FUNC_8(struct sta_info *VAR_3)
{
 struct ieee80211_sub_if_data *VAR_4 = VAR_3->sdata;
 struct ieee80211_local *VAR_5 = VAR_4->local;
 struct ieee80211_hdr *VAR_6;
 struct sk_buff *VAR_7;
 int VAR_8 = sizeof(*VAR_6);
 __le16 VAR_9;

 VAR_7 = FUNC_1(VAR_5->hw.extra_tx_headroom + VAR_8 + 2);
 if (!VAR_7)
  return ((void*)0);
 FUNC_7(VAR_7, VAR_5->hw.extra_tx_headroom);

 VAR_6 = FUNC_5(VAR_7, VAR_8);
 VAR_9 = FUNC_0(VAR_1 | VAR_2);
 FUNC_2(VAR_6, &VAR_9, VAR_3->sta.addr,
          VAR_4->vif.addr);
 VAR_6->frame_control = VAR_9;
 VAR_6->duration_id = 0;
 VAR_6->seq_ctrl = 0;

 FUNC_4(VAR_6->addr1, VAR_3->sta.addr, VAR_0);
 FUNC_6(VAR_7, 2);
 FUNC_3(VAR_4, VAR_3, VAR_6);

 return VAR_7;
}
