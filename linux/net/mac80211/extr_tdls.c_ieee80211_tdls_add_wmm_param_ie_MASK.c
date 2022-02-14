
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct ieee80211_wmm_param_ie {int len; int* oui; int oui_type; int oui_subtype; int version; TYPE_1__* ac; scalar_t__ qos_info; int element_id; } ;
struct ieee80211_tx_queue_params {int txop; int cw_max; int cw_min; int acm; int aifs; } ;
struct ieee80211_sub_if_data {struct ieee80211_tx_queue_params* tx_conf; } ;
struct TYPE_2__ {int txop_limit; int cw; int aci_aifsn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 size_t FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ) ;
 struct ieee80211_wmm_param_ie* FUNC_4 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_5(struct ieee80211_sub_if_data *VAR_2,
         struct sk_buff *VAR_3)
{
 struct ieee80211_wmm_param_ie *VAR_4;
 struct ieee80211_tx_queue_params *VAR_5;
 int VAR_6;

 VAR_4 = FUNC_4(VAR_3, sizeof(*VAR_4));

 VAR_4->element_id = VAR_1;
 VAR_4->len = sizeof(*VAR_4) - 2;

 VAR_4->oui[0] = 0x00;
 VAR_4->oui[1] = 0x50;
 VAR_4->oui[2] = 0xf2;
 VAR_4->oui_type = 2;
 VAR_4->oui_subtype = 1;
 VAR_4->version = 1;
 VAR_4->qos_info = 0;





 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  VAR_5 = &VAR_2->tx_conf[FUNC_1(VAR_6)];
  VAR_4->ac[VAR_6].aci_aifsn = FUNC_2(VAR_5->aifs,
              VAR_5->acm, VAR_6);
  VAR_4->ac[VAR_6].cw = FUNC_3(VAR_5->cw_min, VAR_5->cw_max);
  VAR_4->ac[VAR_6].txop_limit = FUNC_0(VAR_5->txop);
 }
}
