
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_14__ {TYPE_4__* chan; int width; } ;
struct TYPE_15__ {TYPE_5__ chandef; int ibss_joined; } ;
struct TYPE_16__ {int type; TYPE_6__ bss_conf; } ;
struct ieee80211_if_mesh {int pre_value; int csa_role; } ;
struct TYPE_18__ {TYPE_8__* chan; int width; } ;
struct TYPE_11__ {TYPE_9__ chandef; } ;
struct TYPE_10__ {int next_beacon; } ;
struct TYPE_12__ {struct ieee80211_if_mesh mesh; TYPE_2__ ibss; TYPE_1__ ap; } ;
struct ieee80211_sub_if_data {TYPE_7__ vif; TYPE_3__ u; } ;
struct ieee80211_csa_settings {int count; int n_counter_offsets_presp; int n_counter_offsets_beacon; int counter_offsets_presp; int counter_offsets_beacon; } ;
struct cfg80211_csa_settings {int count; TYPE_9__ chandef; int beacon_csa; int n_counter_offsets_presp; int n_counter_offsets_beacon; int counter_offsets_presp; int counter_offsets_beacon; int beacon_after; } ;
struct TYPE_17__ {int band; } ;
struct TYPE_13__ {int band; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_9__*) ;
 int FUNC_2 (struct ieee80211_sub_if_data*,int *,struct ieee80211_csa_settings*) ;
 int FUNC_3 (struct ieee80211_sub_if_data*,struct cfg80211_csa_settings*) ;
 int FUNC_4 (struct ieee80211_sub_if_data*,struct cfg80211_csa_settings*) ;
 int FUNC_5 (struct ieee80211_sub_if_data*,struct cfg80211_csa_settings*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct ieee80211_sub_if_data *VAR_6,
        struct cfg80211_csa_settings *VAR_7,
        u32 *VAR_8)
{
 struct ieee80211_csa_settings VAR_9 = {};
 int VAR_10;

 switch (VAR_6->vif.type) {
 case 129:
  VAR_6->u.ap.next_beacon =
   FUNC_0(&VAR_7->beacon_after);
  if (!VAR_6->u.ap.next_beacon)
   return -VAR_1;
  if (VAR_7->count <= 1)
   break;

  if ((VAR_7->n_counter_offsets_beacon >
       VAR_3) ||
      (VAR_7->n_counter_offsets_presp >
       VAR_3))
   return -VAR_0;

  VAR_9.counter_offsets_beacon = VAR_7->counter_offsets_beacon;
  VAR_9.counter_offsets_presp = VAR_7->counter_offsets_presp;
  VAR_9.n_counter_offsets_beacon = VAR_7->n_counter_offsets_beacon;
  VAR_9.n_counter_offsets_presp = VAR_7->n_counter_offsets_presp;
  VAR_9.count = VAR_7->count;

  VAR_10 = FUNC_2(VAR_6, &VAR_7->beacon_csa, &VAR_9);
  if (VAR_10 < 0) {
   FUNC_6(VAR_6->u.ap.next_beacon);
   return VAR_10;
  }
  *VAR_8 |= VAR_10;

  break;
 case 130:
  if (!VAR_6->vif.bss_conf.ibss_joined)
   return -VAR_0;

  if (VAR_7->chandef.width != VAR_6->u.ibss.chandef.width)
   return -VAR_0;

  switch (VAR_7->chandef.width) {
  case 132:
   if (FUNC_1(&VAR_7->chandef) !=
       FUNC_1(&VAR_6->u.ibss.chandef))
    return -VAR_0;
  case 131:
  case 135:
  case 133:
  case 134:
   break;
  default:
   return -VAR_0;
  }


  if (VAR_6->u.ibss.chandef.chan->band !=
      VAR_7->chandef.chan->band)
   return -VAR_0;


  if (VAR_7->count > 1) {
   VAR_10 = FUNC_3(VAR_6, VAR_7);
   if (VAR_10 < 0)
    return VAR_10;
   *VAR_8 |= VAR_10;
  }

  FUNC_5(VAR_6, VAR_7);

  break;
 default:
  return -VAR_2;
 }

 return 0;
}
