
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int entry; TYPE_3__* private; int func; scalar_t__ flags; } ;
struct oom_wait_info {TYPE_1__ wait; struct mem_cgroup* memcg; } ;
struct mem_cgroup {int css; int oom_kill_disable; } ;
struct TYPE_5__ {struct mem_cgroup* memcg_in_oom; int memcg_oom_order; int memcg_oom_gfp_mask; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 TYPE_3__* VAR_1 ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (struct mem_cgroup*) ;
 int FUNC_4 (struct mem_cgroup*) ;
 int FUNC_5 (struct mem_cgroup*) ;
 int FUNC_6 (struct mem_cgroup*) ;
 int FUNC_7 (struct mem_cgroup*,int ,int ) ;
 int FUNC_8 (struct mem_cgroup*) ;
 int FUNC_9 (struct mem_cgroup*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_10 (int *,TYPE_1__*,int ) ;
 int FUNC_11 () ;

bool FUNC_12(bool VAR_4)
{
 struct mem_cgroup *VAR_5 = VAR_1->memcg_in_oom;
 struct oom_wait_info VAR_6;
 bool VAR_7;


 if (!VAR_5)
  return 0;

 if (!VAR_4)
  goto cleanup;

 VAR_6.memcg = VAR_5;
 VAR_6.wait.flags = 0;
 VAR_6.wait.func = VAR_3;
 VAR_6.wait.private = VAR_1;
 FUNC_0(&VAR_6.wait.entry);

 FUNC_10(&VAR_2, &VAR_6.wait, VAR_0);
 FUNC_3(VAR_5);

 VAR_7 = FUNC_5(VAR_5);

 if (VAR_7)
  FUNC_4(VAR_5);

 if (VAR_7 && !VAR_5->oom_kill_disable) {
  FUNC_8(VAR_5);
  FUNC_2(&VAR_2, &VAR_6.wait);
  FUNC_7(VAR_5, VAR_1->memcg_oom_gfp_mask,
      VAR_1->memcg_oom_order);
 } else {
  FUNC_11();
  FUNC_8(VAR_5);
  FUNC_2(&VAR_2, &VAR_6.wait);
 }

 if (VAR_7) {
  FUNC_6(VAR_5);





  FUNC_9(VAR_5);
 }
cleanup:
 VAR_1->memcg_in_oom = ((void*)0);
 FUNC_1(&VAR_5->css);
 return 1;
}
