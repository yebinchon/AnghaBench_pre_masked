
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sta_info {TYPE_1__* mesh; } ;
struct mesh_path {int sn; int flags; int state_lock; scalar_t__ exp_time; scalar_t__ hop_count; scalar_t__ metric; } ;
struct TYPE_2__ {int fail_avg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mesh_path*) ;
 int FUNC_3 (struct mesh_path*,struct sta_info*) ;
 int FUNC_4 (struct mesh_path*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct mesh_path *VAR_2, struct sta_info *VAR_3)
{
 FUNC_5(&VAR_2->state_lock);
 FUNC_3(VAR_2, VAR_3);
 VAR_2->sn = 0xffff;
 VAR_2->metric = 0;
 VAR_2->hop_count = 0;
 VAR_2->exp_time = 0;
 VAR_2->flags = VAR_0 | VAR_1;
 FUNC_2(VAR_2);
 FUNC_6(&VAR_2->state_lock);
 FUNC_1(&VAR_3->mesh->fail_avg);

 FUNC_0(&VAR_3->mesh->fail_avg, 1);
 FUNC_4(VAR_2);
}
