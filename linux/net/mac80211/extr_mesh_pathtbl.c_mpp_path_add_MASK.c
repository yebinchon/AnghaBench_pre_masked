
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct mesh_table {int walk_lock; int walk_head; int rhead; } ;
struct mesh_path {int walk_list; int rhash; int mpp; } ;
struct TYPE_5__ {int mpp_paths_generation; struct mesh_table* mpp_paths; } ;
struct TYPE_6__ {TYPE_2__ mesh; } ;
struct TYPE_4__ {int addr; } ;
struct ieee80211_sub_if_data {TYPE_3__ u; TYPE_1__ vif; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int const*,int ) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int const*) ;
 int FUNC_3 (struct mesh_path*) ;
 int FUNC_4 (int ,int const*,int ) ;
 struct mesh_path* FUNC_5 (struct ieee80211_sub_if_data*,int const*,int ) ;
 int VAR_4 ;
 int FUNC_6 (int *,int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

int FUNC_9(struct ieee80211_sub_if_data *VAR_5,
   const u8 *VAR_6, const u8 *VAR_7)
{
 struct mesh_table *VAR_8;
 struct mesh_path *VAR_9;
 int VAR_10;

 if (FUNC_0(VAR_6, VAR_5->vif.addr))

  return -VAR_1;

 if (FUNC_2(VAR_6))
  return -VAR_1;

 VAR_9 = FUNC_5(VAR_5, VAR_6, VAR_3);

 if (!VAR_9)
  return -VAR_0;

 FUNC_4(VAR_9->mpp, VAR_7, VAR_2);
 VAR_8 = VAR_5->u.mesh.mpp_paths;

 FUNC_7(&VAR_8->walk_lock);
 VAR_10 = FUNC_6(&VAR_8->rhead,
         &VAR_9->rhash,
         VAR_4);
 if (!VAR_10)
  FUNC_1(&VAR_9->walk_list, &VAR_8->walk_head);
 FUNC_8(&VAR_8->walk_lock);

 if (VAR_10)
  FUNC_3(VAR_9);

 VAR_5->u.mesh.mpp_paths_generation++;
 return VAR_10;
}
