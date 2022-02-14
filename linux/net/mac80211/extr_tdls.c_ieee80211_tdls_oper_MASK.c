
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct wiphy {int flags; } ;
struct sta_info {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_5__ {int request_smps_work; int tdls_peer; int tdls_peer_del_work; } ;
struct TYPE_6__ {TYPE_2__ mgd; } ;
struct TYPE_4__ {scalar_t__ type; int csa_active; } ;
struct ieee80211_sub_if_data {TYPE_3__ u; struct ieee80211_local* local; TYPE_1__ vif; } ;
struct ieee80211_local {int mtx; int hw; int sta_mtx; int tx_pending_tasklet; } ;
typedef enum nl80211_tdls_operation { ____Placeholder_nl80211_tdls_operation } nl80211_tdls_operation ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ieee80211_sub_if_data* FUNC_0 (struct net_device*) ;
 scalar_t__ VAR_4 ;





 int FUNC_1 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int const*) ;
 int FUNC_5 (struct ieee80211_sub_if_data*,struct sta_info*) ;
 int FUNC_6 (struct ieee80211_sub_if_data*,struct sta_info*) ;
 int FUNC_7 (struct ieee80211_local*,struct ieee80211_sub_if_data*,int) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct ieee80211_sub_if_data*) ;
 int FUNC_13 (struct ieee80211_sub_if_data*) ;
 int FUNC_14 (struct sta_info*,int ) ;
 int FUNC_15 (struct ieee80211_sub_if_data*,int const*) ;
 struct sta_info* FUNC_16 (struct ieee80211_sub_if_data*,int const*) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (struct ieee80211_sub_if_data*,char*,...) ;

int FUNC_19(struct wiphy *VAR_7, struct net_device *VAR_8,
   const u8 *VAR_9, enum nl80211_tdls_operation VAR_10)
{
 struct sta_info *VAR_11;
 struct ieee80211_sub_if_data *VAR_12 = FUNC_0(VAR_8);
 struct ieee80211_local *VAR_13 = VAR_12->local;
 int VAR_14;

 if (!(VAR_7->flags & VAR_5))
  return -VAR_3;

 if (VAR_12->vif.type != VAR_4)
  return -VAR_1;

 switch (VAR_10) {
 case 130:
 case 132:
  break;
 case 128:
 case 129:
 case 131:

  return -VAR_3;
 }




 FUNC_12(VAR_12);
 FUNC_10(&VAR_13->mtx);
 FUNC_18(VAR_12, "TDLS oper %d peer %pM\n", VAR_10, VAR_9);

 switch (VAR_10) {
 case 130:
  if (VAR_12->vif.csa_active) {
   FUNC_18(VAR_12, "TDLS: disallow link during CSA\n");
   VAR_14 = -VAR_0;
   break;
  }

  FUNC_10(&VAR_13->sta_mtx);
  VAR_11 = FUNC_16(VAR_12, VAR_9);
  if (!VAR_11) {
   FUNC_11(&VAR_13->sta_mtx);
   VAR_14 = -VAR_2;
   break;
  }

  FUNC_5(VAR_12, VAR_11);
  FUNC_6(VAR_12, VAR_11);

  FUNC_14(VAR_11, VAR_6);
  FUNC_11(&VAR_13->sta_mtx);

  FUNC_1(FUNC_9(VAR_12->u.mgd.tdls_peer) ||
        !FUNC_4(VAR_12->u.mgd.tdls_peer, VAR_9));
  VAR_14 = 0;
  break;
 case 132:
  FUNC_17(&VAR_13->tx_pending_tasklet);

  FUNC_7(VAR_13, VAR_12, 0);

  VAR_14 = FUNC_15(VAR_12, VAR_9);

  FUNC_10(&VAR_13->sta_mtx);
  FUNC_6(VAR_12, ((void*)0));
  FUNC_11(&VAR_13->sta_mtx);

  FUNC_5(VAR_12, ((void*)0));
  break;
 default:
  VAR_14 = -VAR_3;
  break;
 }

 if (VAR_14 == 0 && FUNC_4(VAR_12->u.mgd.tdls_peer, VAR_9)) {
  FUNC_2(&VAR_12->u.mgd.tdls_peer_del_work);
  FUNC_3(VAR_12->u.mgd.tdls_peer);
 }

 if (VAR_14 == 0)
  FUNC_8(&VAR_12->local->hw,
         &VAR_12->u.mgd.request_smps_work);

 FUNC_11(&VAR_13->mtx);
 FUNC_13(VAR_12);
 return VAR_14;
}
