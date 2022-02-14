
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ieee80211_if_managed {int conn_mon_timer; scalar_t__ probe_send_count; int associated; } ;
struct TYPE_3__ {struct ieee80211_if_managed mgd; } ;
struct ieee80211_sub_if_data {TYPE_2__* local; TYPE_1__ u; } ;
struct TYPE_4__ {int hw; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int) ;

void FUNC_4(struct ieee80211_sub_if_data *VAR_3)
{
 struct ieee80211_if_managed *VAR_4 = &VAR_3->u.mgd;

 if (FUNC_3(!VAR_4->associated))
  return;

 if (VAR_4->probe_send_count)
  VAR_4->probe_send_count = 0;

 if (FUNC_0(&VAR_3->local->hw, VAR_0))
  return;

 FUNC_1(&VAR_4->conn_mon_timer,
    FUNC_2(VAR_2 + VAR_1));
}
