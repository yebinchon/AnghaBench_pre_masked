
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct sta_info {int dummy; } ;
struct TYPE_6__ {int addr; } ;
struct ieee80211_if_managed {scalar_t__ probe_send_count; int nullfunc_failed; int flags; scalar_t__ probe_timeout; TYPE_4__* associated; } ;
struct TYPE_5__ {struct ieee80211_if_managed mgd; } ;
struct ieee80211_sub_if_data {TYPE_2__ vif; TYPE_3__* local; TYPE_1__ u; } ;
struct TYPE_8__ {int channel; scalar_t__* bssid; } ;
struct TYPE_7__ {int hw; int sta_mtx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 scalar_t__* FUNC_2 (TYPE_4__*,int ) ;
 int FUNC_3 (struct sta_info*) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 int FUNC_5 (struct ieee80211_sub_if_data*,int ,scalar_t__*,scalar_t__ const*,int,int ) ;
 int FUNC_6 (TYPE_3__*,struct ieee80211_sub_if_data*,int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_7 (int,scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int VAR_5 ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 (struct ieee80211_sub_if_data*,scalar_t__) ;
 struct sta_info* FUNC_14 (struct ieee80211_sub_if_data*,scalar_t__*) ;

__attribute__((used)) static void FUNC_15(struct ieee80211_sub_if_data *VAR_6)
{
 struct ieee80211_if_managed *VAR_7 = &VAR_6->u.mgd;
 const u8 *VAR_8;
 u8 *VAR_9 = VAR_7->associated->bssid;
 u8 VAR_10 = FUNC_7(1, VAR_4 - 3);
 struct sta_info *VAR_11;






 if (VAR_7->probe_send_count >= VAR_10)
  VAR_9 = ((void*)0);
 VAR_7->probe_send_count++;

 if (VAR_9) {
  FUNC_9(&VAR_6->local->sta_mtx);
  VAR_11 = FUNC_14(VAR_6, VAR_9);
  if (!FUNC_0(!VAR_11))
   FUNC_3(VAR_11);
  FUNC_10(&VAR_6->local->sta_mtx);
 }

 if (FUNC_4(&VAR_6->local->hw, VAR_1)) {
  VAR_7->nullfunc_failed = 0;
  if (!(VAR_7->flags & VAR_0))
   VAR_7->probe_send_count--;
  else
   FUNC_6(VAR_6->local, VAR_6, 0);
 } else {
  int VAR_12;

  FUNC_11();
  VAR_8 = FUNC_2(VAR_7->associated, VAR_2);
  if (FUNC_1(VAR_8 == ((void*)0)))
   VAR_12 = 0;
  else
   VAR_12 = VAR_8[1];

  FUNC_5(VAR_6, VAR_6->vif.addr, VAR_9,
           VAR_8 + 2, VAR_12,
           VAR_7->associated->channel);
  FUNC_12();
 }

 VAR_7->probe_timeout = VAR_3 + FUNC_8(VAR_5);
 FUNC_13(VAR_6, VAR_7->probe_timeout);
}
