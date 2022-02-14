
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef unsigned long long u64 ;
struct TYPE_6__ {int beacon_int; } ;
struct TYPE_7__ {TYPE_2__ bss_conf; } ;
struct ieee80211_if_mesh {unsigned long long sync_offset_clockdrift_max; int sync_offset_lock; } ;
struct TYPE_5__ {struct ieee80211_if_mesh mesh; } ;
struct ieee80211_sub_if_data {TYPE_3__ vif; TYPE_1__ u; struct ieee80211_local* local; } ;
struct ieee80211_local {TYPE_4__* ops; } ;
struct TYPE_8__ {scalar_t__ offset_tsf; } ;


 unsigned long long FUNC_0 (struct ieee80211_local*,struct ieee80211_sub_if_data*) ;
 int FUNC_1 (struct ieee80211_local*,struct ieee80211_sub_if_data*,unsigned long long) ;
 int FUNC_2 (struct ieee80211_local*,struct ieee80211_sub_if_data*,unsigned long long) ;
 int FUNC_3 (struct ieee80211_sub_if_data*,char*,long long,...) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct ieee80211_sub_if_data *VAR_0)
{
 struct ieee80211_local *VAR_1 = VAR_0->local;
 struct ieee80211_if_mesh *VAR_2 = &VAR_0->u.mesh;

 u64 VAR_3 = VAR_0->vif.bss_conf.beacon_int * 1024 / 2500;
 u64 VAR_4;
 u64 VAR_5;

 FUNC_4(&VAR_2->sync_offset_lock);
 if (VAR_2->sync_offset_clockdrift_max < VAR_3) {
  FUNC_3(VAR_0, "TSF : max clockdrift=%lld; adjusting\n",
     (long long) VAR_2->sync_offset_clockdrift_max);
  VAR_5 = -VAR_2->sync_offset_clockdrift_max;
  VAR_2->sync_offset_clockdrift_max = 0;
 } else {
  FUNC_3(VAR_0, "TSF : max clockdrift=%lld; adjusting by %llu\n",
     (long long) VAR_2->sync_offset_clockdrift_max,
     (unsigned long long) VAR_3);
  VAR_5 = -VAR_3;
  VAR_2->sync_offset_clockdrift_max -= VAR_3;
 }
 FUNC_5(&VAR_2->sync_offset_lock);

 if (VAR_1->ops->offset_tsf) {
  FUNC_1(VAR_1, VAR_0, VAR_5);
 } else {
  VAR_4 = FUNC_0(VAR_1, VAR_0);
  if (VAR_4 != -1ULL)
   FUNC_2(VAR_1, VAR_0, VAR_4 + VAR_5);
 }
}
