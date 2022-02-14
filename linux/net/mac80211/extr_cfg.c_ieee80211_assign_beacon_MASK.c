
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_7__ {int beacon; } ;
struct TYPE_8__ {TYPE_3__ ap; } ;
struct TYPE_5__ {int ftm_responder; } ;
struct TYPE_6__ {TYPE_1__ bss_conf; } ;
struct ieee80211_sub_if_data {TYPE_4__ u; TYPE_2__ vif; } ;
struct ieee80211_csa_settings {int n_counter_offsets_beacon; int * counter_offsets_beacon; int count; } ;
struct cfg80211_beacon_data {int head_len; int tail_len; int ftm_responder; int civicloc_len; int civicloc; int lci_len; int lci; int probe_resp_len; int probe_resp; int * tail; int * head; } ;
struct beacon_data {int head_len; int tail_len; int * tail; int * head; int * csa_counter_offsets; int csa_current_counter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ieee80211_sub_if_data*,int ,int ,int ,int ) ;
 int FUNC_1 (struct ieee80211_sub_if_data*,int ,int ,struct ieee80211_csa_settings const*) ;
 int FUNC_2 (struct beacon_data*) ;
 int FUNC_3 (struct beacon_data*,int ) ;
 struct beacon_data* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (int ,struct beacon_data*) ;
 int VAR_6 ;
 struct beacon_data* FUNC_7 (int ,struct ieee80211_sub_if_data*) ;

__attribute__((used)) static int FUNC_8(struct ieee80211_sub_if_data *VAR_7,
       struct cfg80211_beacon_data *VAR_8,
       const struct ieee80211_csa_settings *VAR_9)
{
 struct beacon_data *VAR_10, *VAR_11;
 int VAR_12, VAR_13;
 int VAR_14, VAR_15;
 u32 VAR_16 = VAR_1;

 VAR_11 = FUNC_7(VAR_7->u.ap.beacon, VAR_7);



 if (!VAR_8->head && !VAR_11)
  return -VAR_3;


 if (VAR_8->head)
  VAR_12 = VAR_8->head_len;
 else
  VAR_12 = VAR_11->head_len;


 if (VAR_8->tail || !VAR_11)

  VAR_13 = VAR_8->tail_len;
 else
  VAR_13 = VAR_11->tail_len;

 VAR_14 = sizeof(*VAR_10) + VAR_12 + VAR_13;

 VAR_10 = FUNC_4(VAR_14, VAR_5);
 if (!VAR_10)
  return -VAR_4;







 VAR_10->head = ((u8 *) VAR_10) + sizeof(*VAR_10);
 VAR_10->tail = VAR_10->head + VAR_12;
 VAR_10->head_len = VAR_12;
 VAR_10->tail_len = VAR_13;

 if (VAR_9) {
  VAR_10->csa_current_counter = VAR_9->count;
  FUNC_5(VAR_10->csa_counter_offsets, VAR_9->counter_offsets_beacon,
         VAR_9->n_counter_offsets_beacon *
         sizeof(VAR_10->csa_counter_offsets[0]));
 }


 if (VAR_8->head)
  FUNC_5(VAR_10->head, VAR_8->head, VAR_12);
 else
  FUNC_5(VAR_10->head, VAR_11->head, VAR_12);


 if (VAR_8->tail)
  FUNC_5(VAR_10->tail, VAR_8->tail, VAR_13);
 else
  if (VAR_11)
   FUNC_5(VAR_10->tail, VAR_11->tail, VAR_13);

 VAR_15 = FUNC_1(VAR_7, VAR_8->probe_resp,
           VAR_8->probe_resp_len, VAR_9);
 if (VAR_15 < 0) {
  FUNC_2(VAR_10);
  return VAR_15;
 }
 if (VAR_15 == 0)
  VAR_16 |= VAR_0;

 if (VAR_8->ftm_responder != -1) {
  VAR_7->vif.bss_conf.ftm_responder = VAR_8->ftm_responder;
  VAR_15 = FUNC_0(VAR_7,
        VAR_8->lci,
        VAR_8->lci_len,
        VAR_8->civicloc,
        VAR_8->civicloc_len);

  if (VAR_15 < 0) {
   FUNC_2(VAR_10);
   return VAR_15;
  }

  VAR_16 |= VAR_2;
 }

 FUNC_6(VAR_7->u.ap.beacon, VAR_10);

 if (VAR_11)
  FUNC_3(VAR_11, VAR_6);

 return VAR_16;
}
