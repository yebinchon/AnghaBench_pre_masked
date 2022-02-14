
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u16 ;
struct TYPE_9__ {int addr; } ;
struct sta_info {TYPE_5__* mesh; TYPE_4__ sta; } ;
struct ieee802_11_elems {scalar_t__ mesh_config; scalar_t__ total_len; } ;
struct ieee80211_if_mesh {scalar_t__ mesh_sp_id; int sync_offset_lock; scalar_t__ sync_offset_clockdrift_max; } ;
struct TYPE_6__ {struct ieee80211_if_mesh mesh; } ;
struct ieee80211_sub_if_data {struct ieee80211_local* local; TYPE_1__ u; } ;
struct ieee80211_rx_status {int dummy; } ;
struct TYPE_7__ {int timestamp; } ;
struct TYPE_8__ {TYPE_2__ beacon; } ;
struct ieee80211_mgmt {TYPE_3__ u; int sa; } ;
struct ieee80211_local {int dummy; } ;
typedef scalar_t__ s64 ;
struct TYPE_10__ {scalar_t__ t_offset; scalar_t__ t_offset_setpoint; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int FUNC_1 (struct sta_info*,int ) ;
 scalar_t__ FUNC_2 (struct ieee80211_local*,struct ieee80211_sub_if_data*) ;
 scalar_t__ FUNC_3 (struct ieee80211_local*,struct ieee80211_rx_status*,scalar_t__,int) ;
 scalar_t__ FUNC_4 (struct ieee80211_rx_status*) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct ieee802_11_elems*) ;
 int FUNC_7 (struct ieee80211_sub_if_data*,char*,int ,...) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (struct sta_info*,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 struct sta_info* FUNC_13 (struct ieee80211_sub_if_data*,int ) ;
 scalar_t__ FUNC_14 (struct sta_info*,int ) ;

__attribute__((used)) static void FUNC_15(struct ieee80211_sub_if_data *VAR_6,
       u16 VAR_7,
       struct ieee80211_mgmt *VAR_8,
       struct ieee802_11_elems *VAR_9,
       struct ieee80211_rx_status *VAR_10)
{
 struct ieee80211_if_mesh *VAR_11 = &VAR_6->u.mesh;
 struct ieee80211_local *VAR_12 = VAR_6->local;
 struct sta_info *VAR_13;
 u64 VAR_14, VAR_15;

 FUNC_0(VAR_11->mesh_sp_id != VAR_2);


 if (VAR_7 != VAR_1)
  return;







 if (FUNC_4(VAR_10))
  VAR_15 = FUNC_3(VAR_12, VAR_10,
             24 + 12 +
             VAR_9->total_len +
             VAR_0,
             24);
 else
  VAR_15 = FUNC_2(VAR_12, VAR_6);

 FUNC_8();
 VAR_13 = FUNC_13(VAR_6, VAR_8->sa);
 if (!VAR_13)
  goto no_sync;







 if (VAR_9->mesh_config && FUNC_6(VAR_9)) {
  FUNC_7(VAR_6, "STA %pM : is adjusting TBTT\n",
     VAR_13->sta.addr);
  goto no_sync;
 }


 VAR_14 = FUNC_5(VAR_8->u.beacon.timestamp);
 VAR_13->mesh->t_offset = VAR_14 - VAR_15;

 if (FUNC_14(VAR_13, VAR_5)) {
  s64 VAR_16 = VAR_13->mesh->t_offset_setpoint - VAR_13->mesh->t_offset;
  FUNC_7(VAR_6,
     "STA %pM : t_offset=%lld, t_offset_setpoint=%lld, t_clockdrift=%lld\n",
     VAR_13->sta.addr, (long long) VAR_13->mesh->t_offset,
     (long long) VAR_13->mesh->t_offset_setpoint,
     (long long) VAR_16);

  if (VAR_16 > VAR_3 ||
      VAR_16 < -VAR_3) {
   FUNC_7(VAR_6,
      "STA %pM : t_clockdrift=%lld too large, setpoint reset\n",
      VAR_13->sta.addr,
      (long long) VAR_16);
   FUNC_1(VAR_13, VAR_5);
   goto no_sync;
  }

  FUNC_11(&VAR_11->sync_offset_lock);
  if (VAR_16 > VAR_11->sync_offset_clockdrift_max)
   VAR_11->sync_offset_clockdrift_max = VAR_16;
  FUNC_12(&VAR_11->sync_offset_lock);
 } else {
  VAR_13->mesh->t_offset_setpoint = VAR_13->mesh->t_offset - VAR_4;
  FUNC_10(VAR_13, VAR_5);
  FUNC_7(VAR_6,
     "STA %pM : offset was invalid, t_offset=%lld\n",
     VAR_13->sta.addr,
     (long long) VAR_13->mesh->t_offset);
 }

no_sync:
 FUNC_9();
}
