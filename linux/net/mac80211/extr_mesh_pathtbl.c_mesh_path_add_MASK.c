
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct mesh_table {int walk_lock; int walk_head; int rhead; } ;
struct mesh_path {int walk_list; int rhash; } ;
struct TYPE_5__ {int mesh_paths_generation; struct mesh_table* mesh_paths; int mpaths; } ;
struct TYPE_6__ {TYPE_2__ mesh; } ;
struct TYPE_4__ {int addr; } ;
struct ieee80211_sub_if_data {TYPE_3__ u; TYPE_1__ vif; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct mesh_path* FUNC_0 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct mesh_path*) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int *,int,int ) ;
 scalar_t__ FUNC_3 (int const*,int ) ;
 int FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (int const*) ;
 int FUNC_6 (struct mesh_path*) ;
 struct mesh_path* FUNC_7 (struct ieee80211_sub_if_data*,int const*,int ) ;
 int VAR_5 ;
 struct mesh_path* FUNC_8 (int *,int *,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

struct mesh_path *FUNC_11(struct ieee80211_sub_if_data *VAR_6,
    const u8 *VAR_7)
{
 struct mesh_table *VAR_8;
 struct mesh_path *VAR_9, *VAR_10;

 if (FUNC_3(VAR_7, VAR_6->vif.addr))

  return FUNC_0(-VAR_2);

 if (FUNC_5(VAR_7))
  return FUNC_0(-VAR_2);

 if (FUNC_2(&VAR_6->u.mesh.mpaths, 1, VAR_4) == 0)
  return FUNC_0(-VAR_1);

 VAR_10 = FUNC_7(VAR_6, VAR_7, VAR_3);
 if (!VAR_10)
  return FUNC_0(-VAR_0);

 VAR_8 = VAR_6->u.mesh.mesh_paths;
 FUNC_9(&VAR_8->walk_lock);
 VAR_9 = FUNC_8(&VAR_8->rhead,
        &VAR_10->rhash,
        VAR_5);
 if (!VAR_9)
  FUNC_4(&VAR_10->walk_list, &VAR_8->walk_head);
 FUNC_10(&VAR_8->walk_lock);

 if (VAR_9) {
  FUNC_6(VAR_10);

  if (FUNC_1(VAR_9))
   return VAR_9;

  VAR_10 = VAR_9;
 }

 VAR_6->u.mesh.mesh_paths_generation++;
 return VAR_10;
}
