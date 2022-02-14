
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
typedef int u16 ;
struct ieee80211_if_managed {TYPE_6__* assoc_data; TYPE_4__* associated; } ;
struct TYPE_7__ {struct ieee80211_if_managed mgd; } ;
struct ieee80211_sub_if_data {int dev; TYPE_1__ u; } ;
struct TYPE_8__ {int reason_code; } ;
struct TYPE_9__ {TYPE_2__ deauth; } ;
struct ieee80211_mgmt {int bssid; int * sa; TYPE_3__ u; } ;
struct TYPE_12__ {TYPE_5__* bss; } ;
struct TYPE_11__ {int * bssid; } ;
struct TYPE_10__ {int * bssid; } ;


 int FUNC_0 (int ,int *,size_t) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int FUNC_2 (struct ieee80211_sub_if_data*,int,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ieee80211_sub_if_data*,int *,size_t,int,int ) ;
 int FUNC_5 (struct ieee80211_sub_if_data*,int ,int ,int,int *) ;
 int FUNC_6 (struct ieee80211_sub_if_data*,int *,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct ieee80211_sub_if_data*) ;
 int FUNC_9 (struct ieee80211_sub_if_data*,char*,int const*,int ,int ) ;

__attribute__((used)) static void FUNC_10(struct ieee80211_sub_if_data *VAR_0,
         struct ieee80211_mgmt *VAR_1, size_t VAR_2)
{
 struct ieee80211_if_managed *VAR_3 = &VAR_0->u.mgd;
 u16 VAR_4 = FUNC_7(VAR_1->u.deauth.reason_code);

 FUNC_8(VAR_0);

 if (VAR_2 < 24 + 2)
  return;

 if (!FUNC_1(VAR_1->bssid, VAR_1->sa)) {
  FUNC_6(VAR_0, VAR_1->sa, VAR_4);
  return;
 }

 if (VAR_3->associated &&
     FUNC_1(VAR_1->bssid, VAR_3->associated->bssid)) {
  const u8 *VAR_5 = VAR_3->associated->bssid;

  FUNC_9(VAR_0, "deauthenticated from %pM (Reason: %u=%s)\n",
      VAR_5, VAR_4,
      FUNC_3(VAR_4));

  FUNC_5(VAR_0, 0, 0, 0, ((void*)0));

  FUNC_4(VAR_0, (u8 *)VAR_1, VAR_2, 0,
         VAR_4);
  return;
 }

 if (VAR_3->assoc_data &&
     FUNC_1(VAR_1->bssid, VAR_3->assoc_data->bss->bssid)) {
  const u8 *VAR_6 = VAR_3->assoc_data->bss->bssid;

  FUNC_9(VAR_0,
      "deauthenticated from %pM while associating (Reason: %u=%s)\n",
      VAR_6, VAR_4,
      FUNC_3(VAR_4));

  FUNC_2(VAR_0, 0, 1);

  FUNC_0(VAR_0->dev, (u8 *)VAR_1, VAR_2);
  return;
 }
}
