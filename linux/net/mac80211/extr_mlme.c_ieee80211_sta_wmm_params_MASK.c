
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct ieee80211_tx_queue_params {int mu_edca; int aifs; int acm; int uapsd; int txop; void* cw_max; void* cw_min; int mu_edca_param_rec; } ;
struct TYPE_8__ {int qos; } ;
struct TYPE_9__ {TYPE_2__ bss_conf; } ;
struct ieee80211_if_managed {int flags; int uapsd_queues; int wmm_last_param_set; int mu_edca_last_param_set; TYPE_1__* tx_tspec; } ;
struct TYPE_10__ {struct ieee80211_if_managed mgd; } ;
struct ieee80211_sub_if_data {int wmm_acm; TYPE_3__ vif; struct ieee80211_tx_queue_params* tx_conf; TYPE_4__ u; } ;
struct ieee80211_mu_edca_param_set {int mu_qos_info; int ac_be; int ac_vo; int ac_vi; int ac_bk; } ;
struct TYPE_12__ {int queues; } ;
struct ieee80211_local {TYPE_6__ hw; TYPE_5__* ops; } ;
typedef int params ;
struct TYPE_11__ {int conf_tx; } ;
struct TYPE_7__ {int downgraded; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (struct ieee80211_local*,struct ieee80211_sub_if_data*,int,struct ieee80211_tx_queue_params*) ;
 void* FUNC_2 (int const) ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (struct ieee80211_sub_if_data*,struct ieee80211_tx_queue_params*,int) ;
 int FUNC_5 (struct ieee80211_tx_queue_params**,int ,int) ;
 int FUNC_6 (struct ieee80211_sub_if_data*,char*,int,int,int,void*,void*,int ,int,int ) ;
 int FUNC_7 (struct ieee80211_sub_if_data*,char*,int) ;
 int FUNC_8 (struct ieee80211_sub_if_data*,char*,int,...) ;

__attribute__((used)) static bool
FUNC_9(struct ieee80211_local *VAR_10,
    struct ieee80211_sub_if_data *VAR_11,
    const u8 *VAR_12, size_t VAR_13,
    const struct ieee80211_mu_edca_param_set *VAR_14)
{
 struct ieee80211_tx_queue_params VAR_15[VAR_4];
 struct ieee80211_if_managed *VAR_16 = &VAR_11->u.mgd;
 size_t VAR_17;
 int VAR_18, VAR_19, VAR_20;
 const u8 *VAR_21;
 u8 VAR_22 = 0;

 if (!VAR_10->ops->conf_tx)
  return 0;

 if (VAR_10->hw.queues < VAR_4)
  return 0;

 if (!VAR_12)
  return 0;

 if (VAR_13 < 8 || VAR_12[5] != 1)
  return 0;

 if (VAR_16->flags & VAR_5)
  VAR_22 = VAR_16->uapsd_queues;

 VAR_18 = VAR_12[6] & 0x0f;




 VAR_19 = VAR_14 ? VAR_14->mu_qos_info & 0x0f : -1;
 if (VAR_18 == VAR_16->wmm_last_param_set &&
     VAR_19 == VAR_16->mu_edca_last_param_set)
  return 0;
 VAR_16->wmm_last_param_set = VAR_18;
 VAR_16->mu_edca_last_param_set = VAR_19;

 VAR_21 = VAR_12 + 8;
 VAR_17 = VAR_13 - 8;

 FUNC_5(&VAR_15, 0, sizeof(VAR_15));

 VAR_11->wmm_acm = 0;
 for (; VAR_17 >= 4; VAR_17 -= 4, VAR_21 += 4) {
  int VAR_23 = (VAR_21[0] >> 5) & 0x03;
  int VAR_24 = (VAR_21[0] >> 4) & 0x01;
  bool VAR_25 = 0;

  switch (VAR_23) {
  case 1:
   VAR_20 = VAR_1;
   if (VAR_24)
    VAR_11->wmm_acm |= FUNC_0(1) | FUNC_0(2);
   if (VAR_22 & VAR_7)
    VAR_25 = 1;
   VAR_15[VAR_20].mu_edca = !!VAR_14;
   if (VAR_14)
    VAR_15[VAR_20].mu_edca_param_rec = VAR_14->ac_bk;
   break;
  case 2:
   VAR_20 = VAR_2;
   if (VAR_24)
    VAR_11->wmm_acm |= FUNC_0(4) | FUNC_0(5);
   if (VAR_22 & VAR_8)
    VAR_25 = 1;
   VAR_15[VAR_20].mu_edca = !!VAR_14;
   if (VAR_14)
    VAR_15[VAR_20].mu_edca_param_rec = VAR_14->ac_vi;
   break;
  case 3:
   VAR_20 = VAR_3;
   if (VAR_24)
    VAR_11->wmm_acm |= FUNC_0(6) | FUNC_0(7);
   if (VAR_22 & VAR_9)
    VAR_25 = 1;
   VAR_15[VAR_20].mu_edca = !!VAR_14;
   if (VAR_14)
    VAR_15[VAR_20].mu_edca_param_rec = VAR_14->ac_vo;
   break;
  case 0:
  default:
   VAR_20 = VAR_0;
   if (VAR_24)
    VAR_11->wmm_acm |= FUNC_0(0) | FUNC_0(3);
   if (VAR_22 & VAR_6)
    VAR_25 = 1;
   VAR_15[VAR_20].mu_edca = !!VAR_14;
   if (VAR_14)
    VAR_15[VAR_20].mu_edca_param_rec = VAR_14->ac_be;
   break;
  }

  VAR_15[VAR_20].aifs = VAR_21[0] & 0x0f;

  if (VAR_15[VAR_20].aifs < 2) {
   FUNC_8(VAR_11,
       "AP has invalid WMM params (AIFSN=%d for ACI %d), will use 2\n",
       VAR_15[VAR_20].aifs, VAR_23);
   VAR_15[VAR_20].aifs = 2;
  }
  VAR_15[VAR_20].cw_max = FUNC_2((VAR_21[1] & 0xf0) >> 4);
  VAR_15[VAR_20].cw_min = FUNC_2(VAR_21[1] & 0x0f);
  VAR_15[VAR_20].txop = FUNC_3(VAR_21 + 2);
  VAR_15[VAR_20].acm = VAR_24;
  VAR_15[VAR_20].uapsd = VAR_25;

  if (VAR_15[VAR_20].cw_min == 0 ||
      VAR_15[VAR_20].cw_min > VAR_15[VAR_20].cw_max) {
   FUNC_8(VAR_11,
       "AP has invalid WMM params (CWmin/max=%d/%d for ACI %d), using defaults\n",
       VAR_15[VAR_20].cw_min, VAR_15[VAR_20].cw_max, VAR_23);
   return 0;
  }
  FUNC_4(VAR_11, &VAR_15[VAR_20], VAR_20);
 }


 for (VAR_20 = 0; VAR_20 < VAR_4; VAR_20++) {
  if (VAR_15[VAR_20].cw_min == 0) {
   FUNC_8(VAR_11,
       "AP has invalid WMM params (missing AC %d), using defaults\n",
       VAR_20);
   return 0;
  }
 }

 for (VAR_20 = 0; VAR_20 < VAR_4; VAR_20++) {
  FUNC_6(VAR_11,
    "WMM AC=%d acm=%d aifs=%d cWmin=%d cWmax=%d txop=%d uapsd=%d, downgraded=%d\n",
    VAR_20, VAR_15[VAR_20].acm,
    VAR_15[VAR_20].aifs, VAR_15[VAR_20].cw_min, VAR_15[VAR_20].cw_max,
    VAR_15[VAR_20].txop, VAR_15[VAR_20].uapsd,
    VAR_16->tx_tspec[VAR_20].downgraded);
  VAR_11->tx_conf[VAR_20] = VAR_15[VAR_20];
  if (!VAR_16->tx_tspec[VAR_20].downgraded &&
      FUNC_1(VAR_10, VAR_11, VAR_20, &VAR_15[VAR_20]))
   FUNC_7(VAR_11,
      "failed to set TX queue parameters for AC %d\n",
      VAR_20);
 }


 VAR_11->vif.bss_conf.qos = 1;
 return 1;
}
