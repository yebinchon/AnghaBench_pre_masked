
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int addr; } ;
struct sta_info {TYPE_4__* mesh; TYPE_1__ sta; struct ieee80211_sub_if_data* sdata; } ;
struct TYPE_6__ {int user_mpm; } ;
struct TYPE_7__ {TYPE_2__ mesh; } ;
struct ieee80211_sub_if_data {TYPE_3__ u; } ;
struct TYPE_8__ {int plink_timer; int plink_lock; int reason; int plid; int llid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sta_info*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct sta_info*) ;
 int FUNC_3 (struct ieee80211_sub_if_data*,struct sta_info*,int ,int ,int ,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;

u32 FUNC_7(struct sta_info *VAR_2)
{
 struct ieee80211_sub_if_data *VAR_3 = VAR_2->sdata;
 u32 VAR_4;

 FUNC_4(&VAR_2->mesh->plink_lock);
 VAR_4 = FUNC_0(VAR_2);

 if (!VAR_3->u.mesh.user_mpm) {
  VAR_2->mesh->reason = VAR_0;
  FUNC_3(VAR_3, VAR_2, VAR_1,
        VAR_2->sta.addr, VAR_2->mesh->llid,
        VAR_2->mesh->plid, VAR_2->mesh->reason);
 }
 FUNC_5(&VAR_2->mesh->plink_lock);
 if (!VAR_3->u.mesh.user_mpm)
  FUNC_1(&VAR_2->mesh->plink_timer);
 FUNC_2(VAR_2);


 FUNC_6();

 return VAR_4;
}
