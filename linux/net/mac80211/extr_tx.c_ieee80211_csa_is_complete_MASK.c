
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ieee80211_vif {scalar_t__ type; } ;
struct ieee80211_if_mesh {int beacon; } ;
struct ieee80211_if_ibss {int presp; } ;
struct ieee80211_if_ap {int beacon; } ;
struct TYPE_2__ {struct ieee80211_if_mesh mesh; struct ieee80211_if_ibss ibss; struct ieee80211_if_ap ap; } ;
struct ieee80211_sub_if_data {TYPE_1__ u; } ;
struct beacon_data {int* tail; size_t tail_len; int* head; size_t head_len; size_t* csa_counter_offsets; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct ieee80211_sub_if_data*) ;
 struct beacon_data* FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 struct ieee80211_sub_if_data* FUNC_6 (struct ieee80211_vif*) ;

bool FUNC_7(struct ieee80211_vif *VAR_3)
{
 struct ieee80211_sub_if_data *VAR_4 = FUNC_6(VAR_3);
 struct beacon_data *VAR_5 = ((void*)0);
 u8 *VAR_6;
 size_t VAR_7;
 int VAR_8 = 0;

 if (!FUNC_2(VAR_4))
  return 0;

 FUNC_4();
 if (VAR_3->type == VAR_1) {
  struct ieee80211_if_ap *VAR_9 = &VAR_4->u.ap;

  VAR_5 = FUNC_3(VAR_9->beacon);
  if (FUNC_0(!VAR_5 || !VAR_5->tail))
   goto out;
  VAR_6 = VAR_5->tail;
  VAR_7 = VAR_5->tail_len;
 } else if (VAR_3->type == VAR_0) {
  struct ieee80211_if_ibss *VAR_10 = &VAR_4->u.ibss;

  VAR_5 = FUNC_3(VAR_10->presp);
  if (!VAR_5)
   goto out;

  VAR_6 = VAR_5->head;
  VAR_7 = VAR_5->head_len;
 } else if (VAR_3->type == VAR_2) {
  struct ieee80211_if_mesh *VAR_11 = &VAR_4->u.mesh;

  VAR_5 = FUNC_3(VAR_11->beacon);
  if (!VAR_5)
   goto out;

  VAR_6 = VAR_5->head;
  VAR_7 = VAR_5->head_len;
 } else {
  FUNC_0(1);
  goto out;
 }

 if (!VAR_5->csa_counter_offsets[0])
  goto out;

 if (FUNC_1(VAR_5->csa_counter_offsets[0] > VAR_7))
  goto out;

 if (VAR_6[VAR_5->csa_counter_offsets[0]] == 1)
  VAR_8 = 1;
 out:
 FUNC_5();

 return VAR_8;
}
