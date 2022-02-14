
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cfg80211_beacon_data {int head_len; int tail_len; int beacon_ies_len; int proberesp_ies_len; int assocresp_ies_len; int probe_resp_len; int lci_len; int civicloc_len; int * civicloc; int * lci; int ftm_responder; int * probe_resp; int * assocresp_ies; int * proberesp_ies; int * beacon_ies; int * tail; int * head; } ;


 int VAR_0 ;
 struct cfg80211_beacon_data* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *,int) ;

__attribute__((used)) static struct cfg80211_beacon_data *
FUNC_2(struct cfg80211_beacon_data *VAR_1)
{
 struct cfg80211_beacon_data *VAR_2;
 u8 *VAR_3;
 int VAR_4;

 VAR_4 = VAR_1->head_len + VAR_1->tail_len + VAR_1->beacon_ies_len +
       VAR_1->proberesp_ies_len + VAR_1->assocresp_ies_len +
       VAR_1->probe_resp_len + VAR_1->lci_len + VAR_1->civicloc_len;

 VAR_2 = FUNC_0(sizeof(*VAR_2) + VAR_4, VAR_0);
 if (!VAR_2)
  return ((void*)0);

 VAR_3 = (u8 *)(VAR_2 + 1);
 if (VAR_1->head_len) {
  VAR_2->head_len = VAR_1->head_len;
  VAR_2->head = VAR_3;
  FUNC_1(VAR_3, VAR_1->head, VAR_1->head_len);
  VAR_3 += VAR_1->head_len;
 }
 if (VAR_1->tail_len) {
  VAR_2->tail_len = VAR_1->tail_len;
  VAR_2->tail = VAR_3;
  FUNC_1(VAR_3, VAR_1->tail, VAR_1->tail_len);
  VAR_3 += VAR_1->tail_len;
 }
 if (VAR_1->beacon_ies_len) {
  VAR_2->beacon_ies_len = VAR_1->beacon_ies_len;
  VAR_2->beacon_ies = VAR_3;
  FUNC_1(VAR_3, VAR_1->beacon_ies, VAR_1->beacon_ies_len);
  VAR_3 += VAR_1->beacon_ies_len;
 }
 if (VAR_1->proberesp_ies_len) {
  VAR_2->proberesp_ies_len = VAR_1->proberesp_ies_len;
  VAR_2->proberesp_ies = VAR_3;
  FUNC_1(VAR_3, VAR_1->proberesp_ies, VAR_1->proberesp_ies_len);
  VAR_3 += VAR_1->proberesp_ies_len;
 }
 if (VAR_1->assocresp_ies_len) {
  VAR_2->assocresp_ies_len = VAR_1->assocresp_ies_len;
  VAR_2->assocresp_ies = VAR_3;
  FUNC_1(VAR_3, VAR_1->assocresp_ies, VAR_1->assocresp_ies_len);
  VAR_3 += VAR_1->assocresp_ies_len;
 }
 if (VAR_1->probe_resp_len) {
  VAR_2->probe_resp_len = VAR_1->probe_resp_len;
  VAR_2->probe_resp = VAR_3;
  FUNC_1(VAR_3, VAR_1->probe_resp, VAR_1->probe_resp_len);
  VAR_3 += VAR_1->probe_resp_len;
 }


 VAR_2->ftm_responder = VAR_1->ftm_responder;
 if (VAR_1->lci) {
  VAR_2->lci_len = VAR_1->lci_len;
  VAR_2->lci = VAR_3;
  FUNC_1(VAR_3, VAR_1->lci, VAR_1->lci_len);
  VAR_3 += VAR_1->lci_len;
 }
 if (VAR_1->civicloc) {
  VAR_2->civicloc_len = VAR_1->civicloc_len;
  VAR_2->civicloc = VAR_3;
  FUNC_1(VAR_3, VAR_1->civicloc, VAR_1->civicloc_len);
  VAR_3 += VAR_1->civicloc_len;
 }

 return VAR_2;
}
