
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct mesh_path {int flags; scalar_t__ discovery_retries; int discovery_timeout; int is_gate; int state_lock; int exp_time; struct ieee80211_sub_if_data* sdata; } ;
struct ieee80211_sub_if_data {TYPE_1__* local; } ;
struct TYPE_2__ {scalar_t__ quiescing; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct mesh_path* FUNC_0 (int ,struct timer_list*,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct ieee80211_sub_if_data*) ;
 scalar_t__ FUNC_2 (struct ieee80211_sub_if_data*) ;
 int FUNC_3 (struct mesh_path*) ;
 int FUNC_4 (struct mesh_path*) ;
 int FUNC_5 (struct mesh_path*,int ) ;
 int FUNC_6 (struct ieee80211_sub_if_data*,char*) ;
 struct mesh_path* VAR_4 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int VAR_5 ;

void FUNC_9(struct timer_list *VAR_6)
{
 struct mesh_path *VAR_7 = FUNC_0(VAR_7, VAR_6, VAR_5);
 struct ieee80211_sub_if_data *VAR_8 = VAR_7->sdata;
 int VAR_9;

 if (VAR_8->local->quiescing)
  return;

 FUNC_7(&VAR_7->state_lock);
 if (VAR_7->flags & VAR_1 ||
   (!(VAR_7->flags & VAR_2))) {
  VAR_7->flags &= ~(VAR_2 | VAR_1);
  FUNC_8(&VAR_7->state_lock);
 } else if (VAR_7->discovery_retries < FUNC_1(VAR_8)) {
  ++VAR_7->discovery_retries;
  VAR_7->discovery_timeout *= 2;
  VAR_7->flags &= ~VAR_0;
  FUNC_8(&VAR_7->state_lock);
  FUNC_5(VAR_7, 0);
 } else {
  VAR_7->flags &= ~(VAR_2 |
      VAR_1 |
      VAR_0);
  VAR_7->exp_time = VAR_3;
  FUNC_8(&VAR_7->state_lock);
  if (!VAR_7->is_gate && FUNC_2(VAR_8) > 0) {
   VAR_9 = FUNC_4(VAR_7);
   if (VAR_9)
    FUNC_6(VAR_8, "no gate was reachable\n");
  } else
   FUNC_3(VAR_7);
 }
}
