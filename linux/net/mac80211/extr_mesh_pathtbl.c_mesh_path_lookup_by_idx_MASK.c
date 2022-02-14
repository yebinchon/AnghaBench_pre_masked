
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mesh_path {int dummy; } ;
struct TYPE_3__ {int mesh_paths; } ;
struct TYPE_4__ {TYPE_1__ mesh; } ;
struct ieee80211_sub_if_data {TYPE_2__ u; } ;


 struct mesh_path* FUNC_0 (int ,int) ;

struct mesh_path *
FUNC_1(struct ieee80211_sub_if_data *VAR_0, int VAR_1)
{
 return FUNC_0(VAR_0->u.mesh.mesh_paths, VAR_1);
}
