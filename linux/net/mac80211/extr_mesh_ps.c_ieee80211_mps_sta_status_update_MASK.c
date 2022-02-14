
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {int addr; } ;
struct sta_info {scalar_t__ sta_state; TYPE_5__ sta; TYPE_6__* sdata; TYPE_1__* mesh; } ;
typedef enum nl80211_mesh_power_mode { ____Placeholder_nl80211_mesh_power_mode } nl80211_mesh_power_mode ;
struct TYPE_8__ {int num_sta_ps; } ;
struct TYPE_9__ {TYPE_2__ ps; } ;
struct TYPE_10__ {TYPE_3__ mesh; } ;
struct TYPE_12__ {TYPE_4__ u; } ;
struct TYPE_7__ {scalar_t__ plink_state; scalar_t__ peer_pm; int nonpeer_pm; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct sta_info*,int ) ;
 int FUNC_2 (struct sta_info*) ;
 int FUNC_3 (TYPE_6__*,char*,int ) ;
 int FUNC_4 (struct sta_info*,int ) ;
 int FUNC_5 (struct sta_info*,int ) ;

void FUNC_6(struct sta_info *VAR_7)
{
 enum nl80211_mesh_power_mode VAR_8;
 bool VAR_9;


 if (VAR_7->sta_state < VAR_0)
  return;





 if (VAR_7->mesh->plink_state == VAR_3 &&
     VAR_7->mesh->peer_pm != VAR_2)
  VAR_8 = VAR_7->mesh->peer_pm;
 else
  VAR_8 = VAR_7->mesh->nonpeer_pm;

 VAR_9 = (VAR_8 != VAR_1);


 if (VAR_7->mesh->plink_state != VAR_3) {
  FUNC_1(VAR_7, VAR_4);
  FUNC_1(VAR_7, VAR_5);
 } else if (!VAR_9) {
  FUNC_1(VAR_7, VAR_4);
 }


 if (FUNC_5(VAR_7, VAR_6) == VAR_9)
  return;

 if (VAR_9) {
  FUNC_4(VAR_7, VAR_6);
  FUNC_0(&VAR_7->sdata->u.mesh.ps.num_sta_ps);
  FUNC_3(VAR_7->sdata, "start PS buffering frames towards %pM\n",
   VAR_7->sta.addr);
 } else {
  FUNC_2(VAR_7);
 }
}
