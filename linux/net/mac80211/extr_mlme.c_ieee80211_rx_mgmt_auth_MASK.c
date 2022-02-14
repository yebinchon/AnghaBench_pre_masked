
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct ieee80211_if_managed {TYPE_7__* auth_data; } ;
struct TYPE_9__ {struct ieee80211_if_managed mgd; } ;
struct ieee80211_sub_if_data {TYPE_8__* local; int dev; TYPE_1__ u; } ;
struct TYPE_11__ {int status_code; int auth_transaction; int auth_alg; } ;
struct TYPE_12__ {TYPE_3__ auth; } ;
struct ieee80211_mgmt {int sa; TYPE_4__ u; int bssid; } ;
struct TYPE_13__ {int reason; int status; int data; } ;
struct TYPE_14__ {TYPE_5__ mlme; } ;
struct ieee80211_event {TYPE_6__ u; int type; } ;
struct TYPE_16__ {int sta_mtx; } ;
struct TYPE_15__ {int algorithm; int expected_transaction; int peer_confirmed; TYPE_2__* bss; scalar_t__ done; } ;
struct TYPE_10__ {int bssid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,char*,int) ;
 int VAR_5 ;
 int FUNC_1 (int ,int *,size_t) ;
 int FUNC_2 (TYPE_8__*,struct ieee80211_sub_if_data*,struct ieee80211_event*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct ieee80211_sub_if_data*,struct ieee80211_mgmt*,size_t) ;
 int FUNC_5 (struct ieee80211_sub_if_data*,int) ;
 int FUNC_6 (struct ieee80211_sub_if_data*,int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,int ,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct ieee80211_sub_if_data*) ;
 int FUNC_11 (struct ieee80211_sub_if_data*,char*,...) ;

__attribute__((used)) static void FUNC_12(struct ieee80211_sub_if_data *VAR_6,
       struct ieee80211_mgmt *VAR_7, size_t VAR_8)
{
 struct ieee80211_if_managed *VAR_9 = &VAR_6->u.mgd;
 u8 VAR_10[VAR_1];
 u16 VAR_11, VAR_12, VAR_13;
 struct ieee80211_event VAR_14 = {
  .type = VAR_3,
  .u.mlme.data = VAR_0,
 };

 FUNC_10(VAR_6);

 if (VAR_8 < 24 + 6)
  return;

 if (!VAR_9->auth_data || VAR_9->auth_data->done)
  return;

 FUNC_8(VAR_10, VAR_9->auth_data->bss->bssid, VAR_1);

 if (!FUNC_3(VAR_10, VAR_7->bssid))
  return;

 VAR_11 = FUNC_7(VAR_7->u.auth.auth_alg);
 VAR_12 = FUNC_7(VAR_7->u.auth.auth_transaction);
 VAR_13 = FUNC_7(VAR_7->u.auth.status_code);

 if (VAR_11 != VAR_9->auth_data->algorithm ||
     (VAR_11 != 129 &&
      VAR_12 != VAR_9->auth_data->expected_transaction) ||
     (VAR_11 == 129 &&
      (VAR_12 < VAR_9->auth_data->expected_transaction ||
       VAR_12 > 2))) {
  FUNC_11(VAR_6, "%pM unexpected authentication state: alg %d (expected %d) transact %d (expected %d)\n",
      VAR_7->sa, VAR_11, VAR_9->auth_data->algorithm,
      VAR_12,
      VAR_9->auth_data->expected_transaction);
  return;
 }

 if (VAR_13 != VAR_5) {
  FUNC_11(VAR_6, "%pM denied authentication (status %d)\n",
      VAR_7->sa, VAR_13);
  FUNC_5(VAR_6, 0);
  FUNC_1(VAR_6->dev, (u8 *)VAR_7, VAR_8);
  VAR_14.u.mlme.status = VAR_2;
  VAR_14.u.mlme.reason = VAR_13;
  FUNC_2(VAR_6->local, VAR_6, &VAR_14);
  return;
 }

 switch (VAR_9->auth_data->algorithm) {
 case 130:
 case 131:
 case 132:
 case 129:
 case 134:
 case 133:
 case 135:
  break;
 case 128:
  if (VAR_9->auth_data->expected_transaction != 4) {
   FUNC_4(VAR_6, VAR_7, VAR_8);

   return;
  }
  break;
 default:
  FUNC_0(1, "invalid auth alg %d",
     VAR_9->auth_data->algorithm);
  return;
 }

 VAR_14.u.mlme.status = VAR_4;
 FUNC_2(VAR_6->local, VAR_6, &VAR_14);
 if (VAR_9->auth_data->algorithm != 129 ||
     (VAR_12 == 2 &&
      VAR_9->auth_data->expected_transaction == 2)) {
  if (!FUNC_6(VAR_6, VAR_10))
   goto out_err;
 } else if (VAR_9->auth_data->algorithm == 129 &&
     VAR_12 == 2) {
  FUNC_11(VAR_6, "SAE peer confirmed\n");
  VAR_9->auth_data->peer_confirmed = 1;
 }

 FUNC_1(VAR_6->dev, (u8 *)VAR_7, VAR_8);
 return;
 out_err:
 FUNC_9(&VAR_6->local->sta_mtx);

}
