
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct ieee80211_if_managed {TYPE_2__* associated; } ;
struct TYPE_5__ {struct ieee80211_if_managed mgd; } ;
struct ieee80211_sub_if_data {TYPE_1__ u; } ;
struct TYPE_7__ {int reason_code; } ;
struct TYPE_8__ {TYPE_3__ disassoc; } ;
struct ieee80211_mgmt {int sa; int bssid; TYPE_4__ u; } ;
struct TYPE_6__ {int bssid; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ieee80211_sub_if_data*,int *,size_t,int,int ) ;
 int FUNC_3 (struct ieee80211_sub_if_data*,int ,int ,int,int *) ;
 int FUNC_4 (struct ieee80211_sub_if_data*,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct ieee80211_sub_if_data*) ;
 int FUNC_7 (struct ieee80211_sub_if_data*,char*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_8(struct ieee80211_sub_if_data *VAR_0,
           struct ieee80211_mgmt *VAR_1, size_t VAR_2)
{
 struct ieee80211_if_managed *VAR_3 = &VAR_0->u.mgd;
 u16 VAR_4;

 FUNC_6(VAR_0);

 if (VAR_2 < 24 + 2)
  return;

 if (!VAR_3->associated ||
     !FUNC_0(VAR_1->bssid, VAR_3->associated->bssid))
  return;

 VAR_4 = FUNC_5(VAR_1->u.disassoc.reason_code);

 if (!FUNC_0(VAR_1->bssid, VAR_1->sa)) {
  FUNC_4(VAR_0, VAR_1->sa, VAR_4);
  return;
 }

 FUNC_7(VAR_0, "disassociated from %pM (Reason: %u=%s)\n",
     VAR_1->sa, VAR_4,
     FUNC_1(VAR_4));

 FUNC_3(VAR_0, 0, 0, 0, ((void*)0));

 FUNC_2(VAR_0, (u8 *)VAR_1, VAR_2, 0, VAR_4);
}
