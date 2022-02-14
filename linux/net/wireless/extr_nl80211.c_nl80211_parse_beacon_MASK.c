
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct cfg80211_registered_device {int wiphy; } ;
struct cfg80211_beacon_data {int ftm_responder; void* civicloc_len; void* civicloc; void* lci_len; void* lci; void* probe_resp_len; void* probe_resp; void* assocresp_ies_len; void* assocresp_ies; void* proberesp_ies_len; void* proberesp_ies; void* beacon_ies_len; void* beacon_ies; void* tail_len; void* tail; void* head_len; void* head; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct cfg80211_beacon_data*,int ,int) ;
 void* FUNC_1 (struct nlattr*) ;
 void* FUNC_2 (struct nlattr*) ;
 int FUNC_3 (struct nlattr**,int ,struct nlattr*,int *,int *) ;
 scalar_t__ FUNC_4 (int *,int ) ;

__attribute__((used)) static int FUNC_5(struct cfg80211_registered_device *VAR_14,
    struct nlattr *VAR_15[],
    struct cfg80211_beacon_data *VAR_16)
{
 bool VAR_17 = 0;
 int VAR_18;

 FUNC_0(VAR_16, 0, sizeof(*VAR_16));

 if (VAR_15[VAR_2]) {
  VAR_16->head = FUNC_1(VAR_15[VAR_2]);
  VAR_16->head_len = FUNC_2(VAR_15[VAR_2]);
  if (!VAR_16->head_len)
   return -VAR_0;
  VAR_17 = 1;
 }

 if (VAR_15[VAR_3]) {
  VAR_16->tail = FUNC_1(VAR_15[VAR_3]);
  VAR_16->tail_len = FUNC_2(VAR_15[VAR_3]);
  VAR_17 = 1;
 }

 if (!VAR_17)
  return -VAR_0;

 if (VAR_15[VAR_5]) {
  VAR_16->beacon_ies = FUNC_1(VAR_15[VAR_5]);
  VAR_16->beacon_ies_len = FUNC_2(VAR_15[VAR_5]);
 }

 if (VAR_15[VAR_7]) {
  VAR_16->proberesp_ies =
   FUNC_1(VAR_15[VAR_7]);
  VAR_16->proberesp_ies_len =
   FUNC_2(VAR_15[VAR_7]);
 }

 if (VAR_15[VAR_6]) {
  VAR_16->assocresp_ies =
   FUNC_1(VAR_15[VAR_6]);
  VAR_16->assocresp_ies_len =
   FUNC_2(VAR_15[VAR_6]);
 }

 if (VAR_15[VAR_8]) {
  VAR_16->probe_resp = FUNC_1(VAR_15[VAR_8]);
  VAR_16->probe_resp_len = FUNC_2(VAR_15[VAR_8]);
 }

 if (VAR_15[VAR_4]) {
  struct nlattr *VAR_19[VAR_13 + 1];

  VAR_18 = FUNC_3(VAR_19,
        VAR_13,
        VAR_15[VAR_4],
        ((void*)0), ((void*)0));
  if (VAR_18)
   return VAR_18;

  if (VAR_19[VAR_11] &&
      FUNC_4(&VAR_14->wiphy,
         VAR_9))
   VAR_16->ftm_responder = 1;
  else
   return -VAR_1;

  if (VAR_19[VAR_12]) {
   VAR_16->lci = FUNC_1(VAR_19[VAR_12]);
   VAR_16->lci_len = FUNC_2(VAR_19[VAR_12]);
  }

  if (VAR_19[VAR_10]) {
   VAR_16->civicloc = FUNC_1(VAR_19[VAR_10]);
   VAR_16->civicloc_len = FUNC_2(VAR_19[VAR_10]);
  }
 } else {
  VAR_16->ftm_responder = -1;
 }

 return 0;
}
