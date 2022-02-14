
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct ieee80211_sub_if_data {int work; TYPE_2__* local; } ;
struct TYPE_4__ {int mesh_path_timer; } ;
struct TYPE_6__ {TYPE_1__ mesh; } ;
struct TYPE_5__ {int hw; } ;


 struct ieee80211_sub_if_data* FUNC_0 (int ,struct timer_list*,int ) ;
 int FUNC_1 (int *,int *) ;
 struct ieee80211_sub_if_data* VAR_0 ;
 TYPE_3__ VAR_1 ;

__attribute__((used)) static void FUNC_2(struct timer_list *VAR_2)
{
 struct ieee80211_sub_if_data *VAR_3 =
  FUNC_0(VAR_3, VAR_2, VAR_1.mesh.mesh_path_timer);

 FUNC_1(&VAR_3->local->hw, &VAR_3->work);
}
