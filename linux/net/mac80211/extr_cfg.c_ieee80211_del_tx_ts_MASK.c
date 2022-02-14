
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct wiphy {int dummy; } ;
struct net_device {int dummy; } ;
struct ieee80211_if_managed {struct ieee80211_sta_tx_tspec* tx_tspec; } ;
struct TYPE_2__ {struct ieee80211_if_managed mgd; } ;
struct ieee80211_sub_if_data {TYPE_1__ u; } ;
struct ieee80211_sta_tx_tspec {scalar_t__ tsid; int up; int downgraded; int action; int admitted_time; } ;
struct ieee80211_local {int dummy; } ;


 int VAR_0 ;
 struct ieee80211_sub_if_data* FUNC_0 (struct net_device*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ieee80211_local*,struct ieee80211_sub_if_data*,int) ;
 int FUNC_2 (struct ieee80211_sub_if_data*) ;
 int FUNC_3 (struct ieee80211_sta_tx_tspec*,int ,int) ;
 int FUNC_4 () ;
 struct ieee80211_local* FUNC_5 (struct wiphy*) ;

__attribute__((used)) static int FUNC_6(struct wiphy *VAR_3, struct net_device *VAR_4,
          u8 VAR_5, const u8 *VAR_6)
{
 struct ieee80211_sub_if_data *VAR_7 = FUNC_0(VAR_4);
 struct ieee80211_if_managed *VAR_8 = &VAR_7->u.mgd;
 struct ieee80211_local *VAR_9 = FUNC_5(VAR_3);
 int VAR_10;

 for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++) {
  struct ieee80211_sta_tx_tspec *VAR_11 = &VAR_8->tx_tspec[VAR_10];


  if (!VAR_11->admitted_time)
   continue;

  if (VAR_11->tsid != VAR_5)
   continue;


  VAR_11->up = -1;





  FUNC_4();
  FUNC_1(VAR_9, VAR_7, 0);




  VAR_11->action = VAR_2;
  VAR_11->downgraded = 0;
  FUNC_2(VAR_7);


  FUNC_3(VAR_11, 0, sizeof(*VAR_11));

  return 0;
 }

 return -VAR_0;
}
