
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct wiphy {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {int driver_smps_mode; int tdls_peer_del_work; int tdls_peer; } ;
struct TYPE_4__ {TYPE_1__ mgd; } ;
struct ieee80211_sub_if_data {TYPE_2__ u; struct ieee80211_local* local; } ;
struct ieee80211_local {int mtx; int hw; } ;
typedef enum ieee80211_smps_mode { ____Placeholder_ieee80211_smps_mode } ieee80211_smps_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ieee80211_sub_if_data* FUNC_0 (struct net_device*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int const*) ;
 int FUNC_3 (struct ieee80211_local*,struct ieee80211_sub_if_data*,int) ;
 int FUNC_4 (int *,int *,int ) ;
 int FUNC_5 (struct wiphy*,struct net_device*,int const*,int ,int ,scalar_t__,int ,int,int const*,size_t,int ,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int const*,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (struct ieee80211_sub_if_data*,int const*) ;
 int FUNC_13 (struct ieee80211_sub_if_data*,char*,int) ;

__attribute__((used)) static int
FUNC_14(struct wiphy *VAR_7, struct net_device *VAR_8,
     const u8 *VAR_9, u8 VAR_10, u8 VAR_11,
     u16 VAR_12, u32 VAR_13, bool VAR_14,
     const u8 *VAR_15, size_t VAR_16)
{
 struct ieee80211_sub_if_data *VAR_17 = FUNC_0(VAR_8);
 struct ieee80211_local *VAR_18 = VAR_17->local;
 enum ieee80211_smps_mode VAR_19 = VAR_17->u.mgd.driver_smps_mode;
 int VAR_20;


 if (VAR_19 != VAR_4 &&
     VAR_19 != VAR_5) {
  FUNC_13(VAR_17, "Aborting TDLS setup due to SMPS mode %d\n",
    VAR_19);
  return -VAR_2;
 }

 FUNC_8(&VAR_18->mtx);


 if (!FUNC_6(VAR_17->u.mgd.tdls_peer) &&
     !FUNC_2(VAR_17->u.mgd.tdls_peer, VAR_9)) {
  VAR_20 = -VAR_0;
  goto out_unlock;
 }
 if (VAR_12 == 0) {
  FUNC_10();
  if (!FUNC_12(VAR_17, VAR_9)) {
   FUNC_11();
   VAR_20 = -VAR_1;
   goto out_unlock;
  }
  FUNC_11();
 }

 FUNC_3(VAR_18, VAR_17, 0);
 FUNC_7(VAR_17->u.mgd.tdls_peer, VAR_9, VAR_3);
 FUNC_9(&VAR_18->mtx);


 VAR_20 = FUNC_5(VAR_7, VAR_8, VAR_9, VAR_10,
           VAR_11, VAR_12,
           VAR_13, VAR_14,
           VAR_15, VAR_16, 0,
           ((void*)0));
 if (VAR_20 < 0) {
  FUNC_8(&VAR_18->mtx);
  FUNC_1(VAR_17->u.mgd.tdls_peer);
  FUNC_9(&VAR_18->mtx);
  return VAR_20;
 }

 FUNC_4(&VAR_17->local->hw,
         &VAR_17->u.mgd.tdls_peer_del_work,
         VAR_6);
 return 0;

out_unlock:
 FUNC_9(&VAR_18->mtx);
 return VAR_20;
}
