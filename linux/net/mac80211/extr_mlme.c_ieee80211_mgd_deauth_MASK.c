
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
struct ieee80211_if_managed {TYPE_6__* associated; TYPE_5__* assoc_data; TYPE_3__* auth_data; } ;
struct TYPE_7__ {struct ieee80211_if_managed mgd; } ;
struct ieee80211_sub_if_data {int local; TYPE_1__ u; } ;
struct cfg80211_deauth_request {int reason_code; int bssid; int local_state_change; } ;
typedef int frame_buf ;
struct TYPE_12__ {int bssid; } ;
struct TYPE_11__ {TYPE_4__* bss; } ;
struct TYPE_10__ {int bssid; } ;
struct TYPE_9__ {TYPE_2__* bss; } ;
struct TYPE_8__ {int bssid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct ieee80211_sub_if_data*,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (struct ieee80211_sub_if_data*,int,int) ;
 int FUNC_3 (struct ieee80211_sub_if_data*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct ieee80211_sub_if_data*,int *,int,int,int ) ;
 int FUNC_6 (struct ieee80211_sub_if_data*,int ,int ,int ,int ,int,int *) ;
 int FUNC_7 (struct ieee80211_sub_if_data*,int ,int ,int,int *) ;
 int FUNC_8 (struct ieee80211_sub_if_data*,char*,int ,int ,int ) ;

int FUNC_9(struct ieee80211_sub_if_data *VAR_3,
    struct cfg80211_deauth_request *VAR_4)
{
 struct ieee80211_if_managed *VAR_5 = &VAR_3->u.mgd;
 u8 VAR_6[VAR_1];
 bool VAR_7 = !VAR_4->local_state_change;

 if (VAR_5->auth_data &&
     FUNC_1(VAR_5->auth_data->bss->bssid, VAR_4->bssid)) {
  FUNC_8(VAR_3,
      "aborting authentication with %pM by local choice (Reason: %u=%s)\n",
      VAR_4->bssid, VAR_4->reason_code,
      FUNC_4(VAR_4->reason_code));

  FUNC_0(VAR_3->local, VAR_3, 0);
  FUNC_6(VAR_3, VAR_4->bssid, VAR_4->bssid,
            VAR_2,
            VAR_4->reason_code, VAR_7,
            VAR_6);
  FUNC_3(VAR_3, 0);
  FUNC_5(VAR_3, VAR_6,
         sizeof(VAR_6), 1,
         VAR_4->reason_code);

  return 0;
 }

 if (VAR_5->assoc_data &&
     FUNC_1(VAR_5->assoc_data->bss->bssid, VAR_4->bssid)) {
  FUNC_8(VAR_3,
      "aborting association with %pM by local choice (Reason: %u=%s)\n",
      VAR_4->bssid, VAR_4->reason_code,
      FUNC_4(VAR_4->reason_code));

  FUNC_0(VAR_3->local, VAR_3, 0);
  FUNC_6(VAR_3, VAR_4->bssid, VAR_4->bssid,
            VAR_2,
            VAR_4->reason_code, VAR_7,
            VAR_6);
  FUNC_2(VAR_3, 0, 1);
  FUNC_5(VAR_3, VAR_6,
         sizeof(VAR_6), 1,
         VAR_4->reason_code);
  return 0;
 }

 if (VAR_5->associated &&
     FUNC_1(VAR_5->associated->bssid, VAR_4->bssid)) {
  FUNC_8(VAR_3,
      "deauthenticating from %pM by local choice (Reason: %u=%s)\n",
      VAR_4->bssid, VAR_4->reason_code,
      FUNC_4(VAR_4->reason_code));

  FUNC_7(VAR_3, VAR_2,
           VAR_4->reason_code, VAR_7, VAR_6);
  FUNC_5(VAR_3, VAR_6,
         sizeof(VAR_6), 1,
         VAR_4->reason_code);
  return 0;
 }

 return -VAR_0;
}
