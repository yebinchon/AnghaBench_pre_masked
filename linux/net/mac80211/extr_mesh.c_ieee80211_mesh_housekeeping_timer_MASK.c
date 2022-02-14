
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct ieee80211_if_mesh {int wrkq_flags; } ;
struct TYPE_5__ {struct ieee80211_if_mesh mesh; } ;
struct ieee80211_sub_if_data {int work; TYPE_2__ u; struct ieee80211_local* local; } ;
struct ieee80211_local {int hw; } ;
struct TYPE_4__ {int housekeeping_timer; } ;
struct TYPE_6__ {TYPE_1__ mesh; } ;


 int VAR_0 ;
 struct ieee80211_sub_if_data* FUNC_0 (int ,struct timer_list*,int ) ;
 int FUNC_1 (int *,int *) ;
 struct ieee80211_sub_if_data* VAR_1 ;
 int FUNC_2 (int ,int *) ;
 TYPE_3__ VAR_2 ;

__attribute__((used)) static void FUNC_3(struct timer_list *VAR_3)
{
 struct ieee80211_sub_if_data *VAR_4 =
  FUNC_0(VAR_4, VAR_3, VAR_2.mesh.housekeeping_timer);
 struct ieee80211_local *VAR_5 = VAR_4->local;
 struct ieee80211_if_mesh *VAR_6 = &VAR_4->u.mesh;

 FUNC_2(VAR_0, &VAR_6->wrkq_flags);

 FUNC_1(&VAR_5->hw, &VAR_4->work);
}
