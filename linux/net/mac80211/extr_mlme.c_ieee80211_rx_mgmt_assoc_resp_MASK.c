
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct ieee802_11_elems {TYPE_4__* timeout_int; } ;
struct ieee80211_if_managed {int assoc_req_ies_len; int assoc_req_ies; struct ieee80211_mgd_assoc_data* assoc_data; } ;
struct TYPE_8__ {struct ieee80211_if_managed mgd; } ;
struct ieee80211_sub_if_data {int dev; TYPE_7__* tx_conf; int local; TYPE_1__ u; } ;
struct TYPE_9__ {int * variable; int aid; int status_code; int capab_info; } ;
struct TYPE_10__ {TYPE_2__ assoc_resp; } ;
struct ieee80211_mgmt {int sa; int bssid; TYPE_3__ u; int frame_control; } ;
struct ieee80211_mgd_assoc_data {int timeout_started; struct cfg80211_bss* bss; scalar_t__ timeout; scalar_t__ fils_kek_len; } ;
struct TYPE_12__ {int reason; int status; int data; } ;
struct TYPE_13__ {TYPE_5__ mlme; } ;
struct ieee80211_event {TYPE_6__ u; int type; } ;
struct cfg80211_bss {int bssid; } ;
struct TYPE_14__ {scalar_t__ uapsd; } ;
struct TYPE_11__ {scalar_t__ type; int value; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (int ,struct cfg80211_bss*) ;
 int FUNC_2 (int ,struct cfg80211_bss*,int *,size_t,int,int ,int ) ;
 int FUNC_3 (int ,struct ieee80211_sub_if_data*,struct ieee80211_event*) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (struct ieee80211_sub_if_data*,int *,size_t*,struct ieee80211_mgd_assoc_data*) ;
 int* VAR_9 ;
 int FUNC_6 (struct ieee80211_sub_if_data*,struct cfg80211_bss*,struct ieee80211_mgmt*,size_t) ;
 int FUNC_7 (struct ieee80211_sub_if_data*,int,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *,size_t,int,struct ieee802_11_elems*,int ,int ) ;
 scalar_t__ VAR_10 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int) ;
 int FUNC_13 (struct ieee80211_sub_if_data*,scalar_t__) ;
 int FUNC_14 (struct ieee80211_sub_if_data*) ;
 int FUNC_15 (struct ieee80211_sub_if_data*,char*,...) ;

__attribute__((used)) static void FUNC_16(struct ieee80211_sub_if_data *VAR_11,
      struct ieee80211_mgmt *VAR_12,
      size_t VAR_13)
{
 struct ieee80211_if_managed *VAR_14 = &VAR_11->u.mgd;
 struct ieee80211_mgd_assoc_data *VAR_15 = VAR_14->assoc_data;
 u16 VAR_16, VAR_17, VAR_18;
 struct ieee802_11_elems VAR_19;
 int VAR_20, VAR_21 = -1;
 u8 *VAR_22;
 bool VAR_23;
 struct cfg80211_bss *VAR_24;
 struct ieee80211_event VAR_25 = {
  .type = VAR_4,
  .u.mlme.data = VAR_0,
 };

 FUNC_14(VAR_11);

 if (!VAR_15)
  return;
 if (!FUNC_4(VAR_15->bss->bssid, VAR_12->bssid))
  return;






 if (VAR_13 < 24 + 6)
  return;

 VAR_23 = FUNC_8(VAR_12->frame_control);
 VAR_16 = FUNC_10(VAR_12->u.assoc_resp.capab_info);
 VAR_17 = FUNC_10(VAR_12->u.assoc_resp.status_code);
 VAR_18 = FUNC_10(VAR_12->u.assoc_resp.aid);

 FUNC_15(VAR_11,
     "RX %sssocResp from %pM (capab=0x%x status=%d aid=%d)\n",
     VAR_23 ? "Rea" : "A", VAR_12->sa,
     VAR_16, VAR_17, (u16)(VAR_18 & ~(FUNC_0(15) | FUNC_0(14))));

 if (VAR_15->fils_kek_len &&
     FUNC_5(VAR_11, (u8 *)VAR_12, &VAR_13, VAR_15) < 0)
  return;

 VAR_22 = VAR_12->u.assoc_resp.variable;
 FUNC_9(VAR_22, VAR_13 - (VAR_22 - (u8 *)VAR_12), 0, &VAR_19,
          VAR_12->bssid, VAR_15->bss->bssid);

 if (VAR_17 == VAR_6 &&
     VAR_19.timeout_int &&
     VAR_19.timeout_int->type == VAR_8) {
  u32 VAR_26, VAR_27;
  VAR_26 = FUNC_11(VAR_19.timeout_int->value);
  VAR_27 = VAR_26 * 1024 / 1000;
  FUNC_15(VAR_11,
      "%pM rejected association temporarily; comeback duration %u TU (%u ms)\n",
      VAR_12->sa, VAR_26, VAR_27);
  VAR_15->timeout = VAR_10 + FUNC_12(VAR_27);
  VAR_15->timeout_started = 1;
  if (VAR_27 > VAR_1)
   FUNC_13(VAR_11, VAR_15->timeout);
  return;
 }

 VAR_24 = VAR_15->bss;

 if (VAR_17 != VAR_7) {
  FUNC_15(VAR_11, "%pM denied association (code=%d)\n",
      VAR_12->sa, VAR_17);
  FUNC_7(VAR_11, 0, 0);
  VAR_25.u.mlme.status = VAR_3;
  VAR_25.u.mlme.reason = VAR_17;
  FUNC_3(VAR_11->local, VAR_11, &VAR_25);
 } else {
  if (!FUNC_6(VAR_11, VAR_24, VAR_12, VAR_13)) {

   FUNC_7(VAR_11, 0, 0);
   FUNC_1(VAR_11->dev, VAR_24);
   return;
  }
  VAR_25.u.mlme.status = VAR_5;
  FUNC_3(VAR_11->local, VAR_11, &VAR_25);
  FUNC_15(VAR_11, "associated\n");






  FUNC_7(VAR_11, 1, 0);


  VAR_21 = 0;
  for (VAR_20 = 0; VAR_20 < VAR_2; VAR_20++)
   if (VAR_11->tx_conf[VAR_20].uapsd)
    VAR_21 |= VAR_9[VAR_20];
 }

 FUNC_2(VAR_11->dev, VAR_24, (u8 *)VAR_12, VAR_13, VAR_21,
          VAR_14->assoc_req_ies, VAR_14->assoc_req_ies_len);
}
