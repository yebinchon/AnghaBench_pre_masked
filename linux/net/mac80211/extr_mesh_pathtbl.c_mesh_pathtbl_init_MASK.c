
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mesh_table {int rhead; } ;
struct TYPE_3__ {struct mesh_table* mpp_paths; struct mesh_table* mesh_paths; } ;
struct TYPE_4__ {TYPE_1__ mesh; } ;
struct ieee80211_sub_if_data {TYPE_2__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mesh_table* FUNC_0 () ;
 int FUNC_1 (struct mesh_table*) ;
 int FUNC_2 (int *,int *) ;

int FUNC_3(struct ieee80211_sub_if_data *VAR_2)
{
 struct mesh_table *VAR_3, *VAR_4;
 int VAR_5;

 VAR_3 = FUNC_0();
 if (!VAR_3)
  return -VAR_0;

 VAR_4 = FUNC_0();
 if (!VAR_4) {
  VAR_5 = -VAR_0;
  goto free_path;
 }

 FUNC_2(&VAR_3->rhead, &VAR_1);
 FUNC_2(&VAR_4->rhead, &VAR_1);

 VAR_2->u.mesh.mesh_paths = VAR_3;
 VAR_2->u.mesh.mpp_paths = VAR_4;

 return 0;

free_path:
 FUNC_1(VAR_3);
 return VAR_5;
}
