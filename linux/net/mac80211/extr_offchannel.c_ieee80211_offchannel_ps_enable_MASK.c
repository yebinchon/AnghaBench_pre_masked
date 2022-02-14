
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ieee80211_if_managed {int conn_mon_timer; int bcn_mon_timer; } ;
struct TYPE_4__ {struct ieee80211_if_managed mgd; } ;
struct ieee80211_sub_if_data {TYPE_1__ u; struct ieee80211_local* local; } ;
struct TYPE_5__ {int flags; } ;
struct TYPE_6__ {TYPE_2__ conf; } ;
struct ieee80211_local {int offchannel_ps_enabled; TYPE_3__ hw; int dynamic_ps_enable_work; int dynamic_ps_timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (struct ieee80211_local*,int ) ;
 int FUNC_4 (struct ieee80211_local*,struct ieee80211_sub_if_data*,int) ;

__attribute__((used)) static void FUNC_5(struct ieee80211_sub_if_data *VAR_3)
{
 struct ieee80211_local *VAR_4 = VAR_3->local;
 struct ieee80211_if_managed *VAR_5 = &VAR_3->u.mgd;

 VAR_4->offchannel_ps_enabled = 0;



 FUNC_1(&VAR_4->dynamic_ps_timer);
 FUNC_1(&VAR_5->bcn_mon_timer);
 FUNC_1(&VAR_5->conn_mon_timer);

 FUNC_0(&VAR_4->dynamic_ps_enable_work);

 if (VAR_4->hw.conf.flags & VAR_1) {
  VAR_4->offchannel_ps_enabled = 1;
  VAR_4->hw.conf.flags &= ~VAR_1;
  FUNC_3(VAR_4, VAR_0);
 }

 if (!VAR_4->offchannel_ps_enabled ||
     !FUNC_2(&VAR_4->hw, VAR_2))
  FUNC_4(VAR_4, VAR_3, 1);
}
