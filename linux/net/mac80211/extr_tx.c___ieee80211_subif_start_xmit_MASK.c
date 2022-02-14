
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct sta_info {scalar_t__ len; scalar_t__ ip_summed; struct sta_info* next; int * prev; int fast_tx; int sk; } ;
struct sk_buff {scalar_t__ len; scalar_t__ ip_summed; struct sk_buff* next; int * prev; int fast_tx; int sk; } ;
struct net_device {int dummy; } ;
struct ieee80211_sub_if_data {struct ieee80211_local* local; } ;
struct TYPE_4__ {int tx_sk_pacing_shift; } ;
struct ieee80211_local {TYPE_2__ hw; TYPE_1__* ops; } ;
struct ieee80211_fast_tx {int dummy; } ;
struct TYPE_3__ {scalar_t__ wake_tx_queue; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct ieee80211_sub_if_data* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct sta_info*) ;
 int FUNC_2 (struct ieee80211_sub_if_data*,struct sta_info*,struct sta_info*) ;
 int FUNC_3 (struct sta_info*) ;
 struct sta_info* FUNC_4 (struct ieee80211_sub_if_data*,struct sta_info*,int ,struct sta_info*,int ) ;
 scalar_t__ FUNC_5 (struct ieee80211_sub_if_data*,struct sta_info*,struct sta_info**) ;
 int FUNC_6 (struct net_device*,scalar_t__) ;
 int FUNC_7 (struct ieee80211_sub_if_data*,struct sta_info*,struct sta_info*,int ) ;
 scalar_t__ FUNC_8 (struct ieee80211_sub_if_data*,struct sta_info*,struct ieee80211_fast_tx*,struct sta_info*) ;
 int FUNC_9 (struct sta_info*) ;
 struct ieee80211_fast_tx* FUNC_10 (int ) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 (int ,int ) ;
 scalar_t__ FUNC_14 (struct sta_info*) ;
 int FUNC_15 (struct sta_info*) ;
 struct sta_info* FUNC_16 (struct sta_info*,int ) ;
 scalar_t__ FUNC_17 (struct sta_info*) ;
 scalar_t__ FUNC_18 (struct sta_info*) ;
 int FUNC_19 (struct sta_info*,int ) ;
 int FUNC_20 (struct sta_info*,int ) ;
 scalar_t__ FUNC_21 (int) ;

void FUNC_22(struct sk_buff *VAR_2,
      struct net_device *VAR_3,
      u32 VAR_4,
      u32 VAR_5)
{
 struct ieee80211_sub_if_data *VAR_6 = FUNC_0(VAR_3);
 struct ieee80211_local *VAR_7 = VAR_6->local;
 struct sta_info *VAR_8;
 struct sk_buff *VAR_9;

 if (FUNC_21(VAR_2->len < VAR_1)) {
  FUNC_9(VAR_2);
  return;
 }

 FUNC_11();

 if (FUNC_5(VAR_6, VAR_2, &VAR_8))
  goto out_free;

 if (FUNC_1(VAR_8))
  VAR_8 = ((void*)0);

 if (VAR_7->ops->wake_tx_queue) {
  u16 VAR_10 = FUNC_2(VAR_6, VAR_8, VAR_2);
  FUNC_19(VAR_2, VAR_10);
 }

 if (VAR_8) {
  struct ieee80211_fast_tx *VAR_11;

  FUNC_13(VAR_2->sk, VAR_6->local->hw.tx_sk_pacing_shift);

  VAR_11 = FUNC_10(VAR_8->fast_tx);

  if (VAR_11 &&
      FUNC_8(VAR_6, VAR_8, VAR_11, VAR_2))
   goto out;
 }

 if (FUNC_17(VAR_2)) {
  struct sk_buff *VAR_12;

  VAR_12 = FUNC_16(VAR_2, 0);
  if (FUNC_1(VAR_12)) {
   goto out_free;
  } else if (VAR_12) {
   FUNC_3(VAR_2);
   VAR_2 = VAR_12;
  }
 } else {

  if (FUNC_18(VAR_2)) {
   FUNC_9(VAR_2);
   goto out;
  }





  if (VAR_2->ip_summed == VAR_0) {
   FUNC_20(VAR_2,
       FUNC_15(VAR_2));
   if (FUNC_14(VAR_2))
    goto out_free;
  }
 }

 VAR_9 = VAR_2;
 while (VAR_9) {
  VAR_2 = VAR_9;
  VAR_9 = VAR_2->next;

  VAR_2->prev = ((void*)0);
  VAR_2->next = ((void*)0);

  VAR_2 = FUNC_4(VAR_6, VAR_2, VAR_4,
       VAR_8, VAR_5);
  if (FUNC_1(VAR_2))
   goto out;

  FUNC_6(VAR_3, VAR_2->len);

  FUNC_7(VAR_6, VAR_8, VAR_2, 0);
 }
 goto out;
 out_free:
 FUNC_9(VAR_2);
 out:
 FUNC_12();
}
