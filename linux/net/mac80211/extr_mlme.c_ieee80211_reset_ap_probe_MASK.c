
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_if_managed {int flags; int conn_mon_timer; } ;
struct TYPE_2__ {struct ieee80211_if_managed mgd; } ;
struct ieee80211_sub_if_data {struct ieee80211_local* local; TYPE_1__ u; } ;
struct ieee80211_local {int mtx; int hw; int iflist_mtx; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ieee80211_sub_if_data*) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (struct ieee80211_local*) ;
 int FUNC_3 (struct ieee80211_sub_if_data*) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (scalar_t__) ;

__attribute__((used)) static void FUNC_8(struct ieee80211_sub_if_data *VAR_4)
{
 struct ieee80211_if_managed *VAR_5 = &VAR_4->u.mgd;
 struct ieee80211_local *VAR_6 = VAR_4->local;

 FUNC_5(&VAR_6->mtx);
 if (!(VAR_5->flags & VAR_2))
  goto out;

 FUNC_0(VAR_4);

 FUNC_5(&VAR_6->iflist_mtx);
 FUNC_2(VAR_6);
 FUNC_6(&VAR_6->iflist_mtx);

 if (FUNC_1(&VAR_4->local->hw, VAR_0))
  goto out;






 FUNC_3(VAR_4);

 FUNC_4(&VAR_5->conn_mon_timer,
    FUNC_7(VAR_3 +
       VAR_1));
out:
 FUNC_6(&VAR_6->mtx);
}
