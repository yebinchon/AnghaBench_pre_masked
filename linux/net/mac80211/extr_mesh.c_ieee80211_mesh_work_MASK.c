
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dot11MeshHWMPpreqMinInterval; } ;
struct ieee80211_if_mesh {int wrkq_flags; TYPE_1__ mshcfg; scalar_t__ last_preq; scalar_t__ preq_queue_len; int mesh_id_len; } ;
struct TYPE_4__ {struct ieee80211_if_mesh mesh; } ;
struct ieee80211_sub_if_data {TYPE_2__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ieee80211_sub_if_data*) ;
 int FUNC_1 (struct ieee80211_sub_if_data*) ;
 int VAR_4 ;
 int FUNC_2 (struct ieee80211_sub_if_data*) ;
 int FUNC_3 (struct ieee80211_sub_if_data*) ;
 int FUNC_4 (struct ieee80211_sub_if_data*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct ieee80211_sub_if_data*) ;
 int FUNC_7 (struct ieee80211_sub_if_data*) ;
 scalar_t__ FUNC_8 (int ,int *) ;
 scalar_t__ FUNC_9 (int ,scalar_t__) ;

void FUNC_10(struct ieee80211_sub_if_data *VAR_5)
{
 struct ieee80211_if_mesh *VAR_6 = &VAR_5->u.mesh;

 FUNC_6(VAR_5);


 if (!VAR_5->u.mesh.mesh_id_len)
  goto out;

 if (VAR_6->preq_queue_len &&
     FUNC_9(VAR_4,
         VAR_6->last_preq + FUNC_5(VAR_6->mshcfg.dot11MeshHWMPpreqMinInterval)))
  FUNC_3(VAR_5);

 if (FUNC_8(VAR_1, &VAR_6->wrkq_flags))
  FUNC_0(VAR_5);

 if (FUNC_8(VAR_3, &VAR_6->wrkq_flags))
  FUNC_1(VAR_5);

 if (FUNC_8(VAR_0, &VAR_6->wrkq_flags))
  FUNC_4(VAR_5);

 if (FUNC_8(VAR_2, &VAR_6->wrkq_flags))
  FUNC_2(VAR_5);
out:
 FUNC_7(VAR_5);
}
