
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {size_t len; scalar_t__ cb; scalar_t__ data; } ;
struct TYPE_7__ {int addr; } ;
struct ieee80211_if_managed {TYPE_5__* associated; } ;
struct TYPE_6__ {struct ieee80211_if_managed mgd; } ;
struct ieee80211_sub_if_data {TYPE_2__ vif; TYPE_1__ u; } ;
struct ieee80211_rx_status {int dummy; } ;
struct TYPE_8__ {scalar_t__ variable; } ;
struct TYPE_9__ {TYPE_3__ probe_resp; } ;
struct ieee80211_mgmt {int bssid; TYPE_4__ u; int da; } ;
struct TYPE_10__ {int bssid; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (struct ieee80211_sub_if_data*) ;
 int FUNC_2 (struct ieee80211_sub_if_data*,struct ieee80211_mgmt*,size_t,struct ieee80211_rx_status*) ;
 int FUNC_3 (struct ieee80211_sub_if_data*) ;

__attribute__((used)) static void FUNC_4(struct ieee80211_sub_if_data *VAR_0,
      struct sk_buff *VAR_1)
{
 struct ieee80211_mgmt *VAR_2 = (void *)VAR_1->data;
 struct ieee80211_if_managed *VAR_3;
 struct ieee80211_rx_status *VAR_4 = (void *) VAR_1->cb;
 size_t VAR_5, VAR_6 = VAR_1->len;

 VAR_3 = &VAR_0->u.mgd;

 FUNC_3(VAR_0);

 if (!FUNC_0(VAR_2->da, VAR_0->vif.addr))
  return;

 VAR_5 = (u8 *) VAR_2->u.probe_resp.variable - (u8 *) VAR_2;
 if (VAR_5 > VAR_6)
  return;

 FUNC_2(VAR_0, VAR_2, VAR_6, VAR_4);

 if (VAR_3->associated &&
     FUNC_0(VAR_2->bssid, VAR_3->associated->bssid))
  FUNC_1(VAR_0);
}
