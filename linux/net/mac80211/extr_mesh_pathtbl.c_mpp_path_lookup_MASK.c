
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct mesh_path {int dummy; } ;
struct TYPE_3__ {int mpp_paths; } ;
struct TYPE_4__ {TYPE_1__ mesh; } ;
struct ieee80211_sub_if_data {TYPE_2__ u; } ;


 struct mesh_path* FUNC_0 (int ,int const*,struct ieee80211_sub_if_data*) ;

struct mesh_path *
FUNC_1(struct ieee80211_sub_if_data *VAR_0, const u8 *VAR_1)
{
 return FUNC_0(VAR_0->u.mesh.mpp_paths, VAR_1, VAR_0);
}
