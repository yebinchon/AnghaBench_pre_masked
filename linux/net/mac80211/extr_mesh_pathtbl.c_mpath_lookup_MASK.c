
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mesh_table {int rhead; } ;
struct mesh_path {int state_lock; int flags; } ;
struct ieee80211_sub_if_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct mesh_path*) ;
 struct mesh_path* FUNC_1 (int *,int const*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static struct mesh_path *FUNC_4(struct mesh_table *VAR_2, const u8 *VAR_3,
          struct ieee80211_sub_if_data *VAR_4)
{
 struct mesh_path *VAR_5;

 VAR_5 = FUNC_1(&VAR_2->rhead, VAR_3, VAR_1);

 if (VAR_5 && FUNC_0(VAR_5)) {
  FUNC_2(&VAR_5->state_lock);
  VAR_5->flags &= ~VAR_0;
  FUNC_3(&VAR_5->state_lock);
 }
 return VAR_5;
}
