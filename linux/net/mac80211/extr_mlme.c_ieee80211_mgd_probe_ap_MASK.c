
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ieee80211_if_managed {int flags; scalar_t__ probe_send_count; int associated; } ;
struct TYPE_3__ {struct ieee80211_if_managed mgd; } ;
struct ieee80211_sub_if_data {TYPE_2__* local; int vif; TYPE_1__ u; } ;
struct TYPE_4__ {int iflist_mtx; int mtx; scalar_t__ scanning; scalar_t__ tmp_channel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct ieee80211_sub_if_data*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (struct ieee80211_sub_if_data*) ;
 int FUNC_4 (struct ieee80211_sub_if_data*,char*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct ieee80211_sub_if_data*) ;
 int FUNC_8 (struct ieee80211_sub_if_data*) ;

__attribute__((used)) static void FUNC_9(struct ieee80211_sub_if_data *VAR_3,
       bool VAR_4)
{
 struct ieee80211_if_managed *VAR_5 = &VAR_3->u.mgd;
 bool VAR_6 = 0;

 if (!FUNC_3(VAR_3))
  return;

 FUNC_7(VAR_3);

 if (!VAR_5->associated)
  goto out;

 FUNC_5(&VAR_3->local->mtx);

 if (VAR_3->local->tmp_channel || VAR_3->local->scanning) {
  FUNC_6(&VAR_3->local->mtx);
  goto out;
 }

 if (VAR_4) {
  FUNC_4(VAR_3,
         "detected beacon loss from AP (missed %d beacons) - probing\n",
         VAR_2);

  FUNC_0(&VAR_3->vif, VAR_0);
 }
 if (VAR_5->flags & VAR_1)
  VAR_6 = 1;

 VAR_5->flags |= VAR_1;

 FUNC_6(&VAR_3->local->mtx);

 if (VAR_6)
  goto out;

 FUNC_5(&VAR_3->local->iflist_mtx);
 FUNC_2(VAR_3->local);
 FUNC_6(&VAR_3->local->iflist_mtx);

 VAR_5->probe_send_count = 0;
 FUNC_1(VAR_3);
 out:
 FUNC_8(VAR_3);
}
