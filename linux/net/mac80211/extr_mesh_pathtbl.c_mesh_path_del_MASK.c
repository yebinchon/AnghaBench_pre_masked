
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int mesh_paths_generation; int mesh_paths; } ;
struct TYPE_4__ {TYPE_1__ mesh; } ;
struct ieee80211_sub_if_data {TYPE_2__ u; } ;


 int FUNC_0 (struct ieee80211_sub_if_data*,int const*) ;
 int FUNC_1 (int ,struct ieee80211_sub_if_data*,int const*) ;

int FUNC_2(struct ieee80211_sub_if_data *VAR_0, const u8 *VAR_1)
{
 int VAR_2;


 FUNC_0(VAR_0, VAR_1);

 VAR_2 = FUNC_1(VAR_0->u.mesh.mesh_paths, VAR_0, VAR_1);
 VAR_0->u.mesh.mesh_paths_generation++;
 return VAR_2;
}
