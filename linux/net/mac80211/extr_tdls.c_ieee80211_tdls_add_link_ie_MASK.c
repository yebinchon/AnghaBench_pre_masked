
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct ieee80211_tdls_lnkie {int ie_len; int resp_sta; int init_sta; int bssid; int ie_type; } ;
struct TYPE_5__ {int const* bssid; } ;
struct TYPE_6__ {TYPE_2__ mgd; } ;
struct TYPE_4__ {int * addr; } ;
struct ieee80211_sub_if_data {TYPE_3__ u; TYPE_1__ vif; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int const*,int ) ;
 struct ieee80211_tdls_lnkie* FUNC_1 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_2(struct ieee80211_sub_if_data *VAR_2,
           struct sk_buff *VAR_3, const u8 *VAR_4,
           bool VAR_5)
{
 struct ieee80211_tdls_lnkie *VAR_6;
 const u8 *VAR_7, *VAR_8;

 if (VAR_5) {
  VAR_7 = VAR_2->vif.addr;
  VAR_8 = VAR_4;
 } else {
  VAR_7 = VAR_4;
  VAR_8 = VAR_2->vif.addr;
 }

 VAR_6 = FUNC_1(VAR_3, sizeof(struct ieee80211_tdls_lnkie));

 VAR_6->ie_type = VAR_1;
 VAR_6->ie_len = sizeof(struct ieee80211_tdls_lnkie) - 2;

 FUNC_0(VAR_6->bssid, VAR_2->u.mgd.bssid, VAR_0);
 FUNC_0(VAR_6->init_sta, VAR_7, VAR_0);
 FUNC_0(VAR_6->resp_sta, VAR_8, VAR_0);
}
