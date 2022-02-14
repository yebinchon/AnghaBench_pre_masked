
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mesh_table {int walk_lock; int rhead; } ;
struct mesh_path {int dummy; } ;
struct ieee80211_sub_if_data {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mesh_table*,struct mesh_path*) ;
 int VAR_1 ;
 struct mesh_path* FUNC_1 (int *,int const*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct mesh_table *VAR_2,
     struct ieee80211_sub_if_data *VAR_3,
     const u8 *VAR_4)
{
 struct mesh_path *VAR_5;

 FUNC_2(&VAR_2->walk_lock);
 VAR_5 = FUNC_1(&VAR_2->rhead, VAR_4, VAR_1);
 if (!VAR_5) {
  FUNC_3(&VAR_2->walk_lock);
  return -VAR_0;
 }

 FUNC_0(VAR_2, VAR_5);
 FUNC_3(&VAR_2->walk_lock);
 return 0;
}
