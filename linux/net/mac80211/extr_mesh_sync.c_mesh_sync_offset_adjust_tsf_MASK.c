
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_if_mesh {scalar_t__ mesh_sp_id; scalar_t__ sync_offset_clockdrift_max; int sync_offset_lock; int wrkq_flags; } ;
struct TYPE_2__ {struct ieee80211_if_mesh mesh; } ;
struct ieee80211_sub_if_data {TYPE_1__ u; } ;
struct beacon_data {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ieee80211_sub_if_data*,char*,long long) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct ieee80211_sub_if_data *VAR_3,
      struct beacon_data *VAR_4)
{
 struct ieee80211_if_mesh *VAR_5 = &VAR_3->u.mesh;

 FUNC_0(VAR_5->mesh_sp_id != VAR_0);
 FUNC_0(!FUNC_2());

 FUNC_4(&VAR_5->sync_offset_lock);

 if (VAR_5->sync_offset_clockdrift_max > VAR_2) {





  FUNC_1(VAR_3,
     "TSF : kicking off TSF adjustment with clockdrift_max=%lld\n",
     VAR_5->sync_offset_clockdrift_max);
  FUNC_3(VAR_1, &VAR_5->wrkq_flags);
 } else {
  FUNC_1(VAR_3,
     "TSF : max clockdrift=%lld; too small to adjust\n",
     (long long)VAR_5->sync_offset_clockdrift_max);
  VAR_5->sync_offset_clockdrift_max = 0;
 }
 FUNC_5(&VAR_5->sync_offset_lock);
}
