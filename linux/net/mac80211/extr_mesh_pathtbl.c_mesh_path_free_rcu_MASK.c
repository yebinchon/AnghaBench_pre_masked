
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mesh_table {int entries; } ;
struct mesh_path {int flags; int timer; int state_lock; struct ieee80211_sub_if_data* sdata; } ;
struct TYPE_3__ {int mpaths; } ;
struct TYPE_4__ {TYPE_1__ mesh; } ;
struct ieee80211_sub_if_data {TYPE_2__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mesh_path*,int ) ;
 int FUNC_3 (struct mesh_table*,struct mesh_path*) ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct mesh_table *VAR_3,
          struct mesh_path *VAR_4)
{
 struct ieee80211_sub_if_data *VAR_5 = VAR_4->sdata;

 FUNC_4(&VAR_4->state_lock);
 VAR_4->flags |= VAR_1 | VAR_0;
 FUNC_3(VAR_3, VAR_4);
 FUNC_5(&VAR_4->state_lock);
 FUNC_1(&VAR_4->timer);
 FUNC_0(&VAR_5->u.mesh.mpaths);
 FUNC_0(&VAR_3->entries);
 FUNC_2(VAR_4, VAR_2);
}
