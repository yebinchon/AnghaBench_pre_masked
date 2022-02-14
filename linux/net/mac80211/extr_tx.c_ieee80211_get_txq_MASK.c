
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct txq_info {int dummy; } ;
struct TYPE_4__ {struct ieee80211_txq** txq; } ;
struct sta_info {TYPE_2__ sta; scalar_t__ uploaded; } ;
struct sk_buff {size_t priority; scalar_t__ data; } ;
struct ieee80211_vif {scalar_t__ type; struct ieee80211_txq* txq; } ;
struct ieee80211_txq {int dummy; } ;
struct TYPE_3__ {int flags; } ;
struct ieee80211_tx_info {int flags; TYPE_1__ control; } ;
struct ieee80211_local {int dummy; } ;
struct ieee80211_hdr {int frame_control; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct txq_info* FUNC_4 (struct ieee80211_txq*) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static struct txq_info *FUNC_6(struct ieee80211_local *VAR_5,
       struct ieee80211_vif *VAR_6,
       struct sta_info *VAR_7,
       struct sk_buff *VAR_8)
{
 struct ieee80211_hdr *VAR_9 = (struct ieee80211_hdr *) VAR_8->data;
 struct ieee80211_tx_info *VAR_10 = FUNC_0(VAR_8);
 struct ieee80211_txq *VAR_11 = ((void*)0);

 if ((VAR_10->flags & VAR_2) ||
     (VAR_10->control.flags & VAR_3))
  return ((void*)0);

 if (FUNC_5(!FUNC_2(VAR_9->frame_control))) {
  if ((!FUNC_3(VAR_9->frame_control) ||
       FUNC_1(VAR_9->frame_control) ||
       VAR_6->type == VAR_4) &&
      VAR_7 && VAR_7->uploaded) {




   VAR_11 = VAR_7->sta.txq[VAR_0];
  }
 } else if (VAR_7) {
  u8 VAR_12 = VAR_8->priority & VAR_1;

  if (!VAR_7->uploaded)
   return ((void*)0);

  VAR_11 = VAR_7->sta.txq[VAR_12];
 } else if (VAR_6) {
  VAR_11 = VAR_6->txq;
 }

 if (!VAR_11)
  return ((void*)0);

 return FUNC_4(VAR_11);
}
