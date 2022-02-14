
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mesh_path {int is_root; int timer; int state_lock; int exp_time; int frame_queue; scalar_t__ flags; struct ieee80211_sub_if_data* sdata; int rann_snd_addr; int dst; } ;
struct ieee80211_sub_if_data {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 struct mesh_path* FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int const*,int ) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int ) ;

__attribute__((used)) static
struct mesh_path *FUNC_6(struct ieee80211_sub_if_data *VAR_3,
    const u8 *VAR_4, gfp_t VAR_5)
{
 struct mesh_path *VAR_6;

 VAR_6 = FUNC_1(sizeof(struct mesh_path), VAR_5);
 if (!VAR_6)
  return ((void*)0);

 FUNC_2(VAR_6->dst, VAR_4, VAR_0);
 FUNC_0(VAR_6->rann_snd_addr);
 VAR_6->is_root = 0;
 VAR_6->sdata = VAR_3;
 VAR_6->flags = 0;
 FUNC_3(&VAR_6->frame_queue);
 VAR_6->exp_time = VAR_1;
 FUNC_4(&VAR_6->state_lock);
 FUNC_5(&VAR_6->timer, VAR_2, 0);

 return VAR_6;
}
