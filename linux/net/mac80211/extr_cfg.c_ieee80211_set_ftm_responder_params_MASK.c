
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ieee80211_bss_conf {struct ieee80211_ftm_responder_params* ftmr_params; } ;
struct TYPE_2__ {struct ieee80211_bss_conf bss_conf; } ;
struct ieee80211_sub_if_data {TYPE_1__ vif; } ;
struct ieee80211_ftm_responder_params {size_t lci_len; size_t civicloc_len; int * civicloc; int * lci; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ieee80211_ftm_responder_params*) ;
 struct ieee80211_ftm_responder_params* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int const*,size_t) ;

__attribute__((used)) static int FUNC_3(
    struct ieee80211_sub_if_data *VAR_2,
    const u8 *VAR_3, size_t VAR_4,
    const u8 *VAR_5, size_t VAR_6)
{
 struct ieee80211_ftm_responder_params *VAR_7, *VAR_8;
 struct ieee80211_bss_conf *VAR_9;
 u8 *VAR_10;
 int VAR_11;

 if (!VAR_4 && !VAR_6)
  return 0;

 VAR_9 = &VAR_2->vif.bss_conf;
 VAR_8 = VAR_9->ftmr_params;
 VAR_11 = VAR_4 + VAR_6;

 VAR_7 = FUNC_1(sizeof(*VAR_7) + VAR_11, VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_10 = (u8 *)(VAR_7 + 1);
 if (VAR_4) {
  VAR_7->lci_len = VAR_4;
  VAR_7->lci = VAR_10;
  FUNC_2(VAR_10, VAR_3, VAR_4);
  VAR_10 += VAR_4;
 }

 if (VAR_6) {
  VAR_7->civicloc_len = VAR_6;
  VAR_7->civicloc = VAR_10;
  FUNC_2(VAR_10, VAR_5, VAR_6);
  VAR_10 += VAR_6;
 }

 VAR_9->ftmr_params = VAR_7;
 FUNC_0(VAR_8);

 return 0;
}
