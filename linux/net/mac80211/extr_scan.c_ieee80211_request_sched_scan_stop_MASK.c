
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_sub_if_data {int dummy; } ;
struct ieee80211_local {int mtx; int sched_scan_sdata; int sched_scan_req; TYPE_1__* ops; } ;
struct TYPE_2__ {int sched_scan_stop; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct ieee80211_local*,struct ieee80211_sub_if_data*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct ieee80211_sub_if_data* FUNC_5 (int ,int ) ;

int FUNC_6(struct ieee80211_local *VAR_2)
{
 struct ieee80211_sub_if_data *VAR_3;
 int VAR_4 = -VAR_0;

 FUNC_3(&VAR_2->mtx);

 if (!VAR_2->ops->sched_scan_stop) {
  VAR_4 = -VAR_1;
  goto out;
 }


 FUNC_0(VAR_2->sched_scan_req, ((void*)0));

 VAR_3 = FUNC_5(VAR_2->sched_scan_sdata,
      FUNC_2(&VAR_2->mtx));
 if (VAR_3) {
  VAR_4 = FUNC_1(VAR_2, VAR_3);
  if (!VAR_4)
   FUNC_0(VAR_2->sched_scan_sdata, ((void*)0));
 }
out:
 FUNC_4(&VAR_2->mtx);

 return VAR_4;
}
