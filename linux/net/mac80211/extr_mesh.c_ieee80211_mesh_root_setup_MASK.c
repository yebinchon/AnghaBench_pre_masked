
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ dot11MeshHWMPRootMode; } ;
struct ieee80211_if_mesh {int mesh_path_root_timer; int wrkq_flags; TYPE_1__ mshcfg; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;

void FUNC_3(struct ieee80211_if_mesh *VAR_2)
{
 if (VAR_2->mshcfg.dot11MeshHWMPRootMode > VAR_0)
  FUNC_2(VAR_1, &VAR_2->wrkq_flags);
 else {
  FUNC_0(VAR_1, &VAR_2->wrkq_flags);

  FUNC_1(&VAR_2->mesh_path_root_timer);
 }
}
