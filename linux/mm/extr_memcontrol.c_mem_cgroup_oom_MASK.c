
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mem_cgroup {int css; scalar_t__ oom_kill_disable; } ;
typedef int gfp_t ;
typedef enum oom_status { ____Placeholder_oom_status } oom_status ;
struct TYPE_2__ {int memcg_oom_order; int memcg_oom_gfp_mask; struct mem_cgroup* memcg_in_oom; int in_user_fault; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 TYPE_1__* VAR_6 ;
 int FUNC_1 (struct mem_cgroup*) ;
 int FUNC_2 (struct mem_cgroup*) ;
 int FUNC_3 (struct mem_cgroup*) ;
 int FUNC_4 (struct mem_cgroup*) ;
 scalar_t__ FUNC_5 (struct mem_cgroup*,int ,int) ;
 int FUNC_6 (struct mem_cgroup*) ;
 int FUNC_7 (struct mem_cgroup*,int ) ;

__attribute__((used)) static enum oom_status FUNC_8(struct mem_cgroup *VAR_7, gfp_t VAR_8, int VAR_9)
{
 enum oom_status VAR_10;
 bool VAR_11;

 if (VAR_9 > VAR_5)
  return VAR_3;

 FUNC_7(VAR_7, VAR_0);
 if (VAR_7->oom_kill_disable) {
  if (!VAR_6->in_user_fault)
   return VAR_3;
  FUNC_0(&VAR_7->css);
  VAR_6->memcg_in_oom = VAR_7;
  VAR_6->memcg_oom_gfp_mask = VAR_8;
  VAR_6->memcg_oom_order = VAR_9;

  return VAR_1;
 }

 FUNC_1(VAR_7);

 VAR_11 = FUNC_3(VAR_7);

 if (VAR_11)
  FUNC_2(VAR_7);

 FUNC_6(VAR_7);
 if (FUNC_5(VAR_7, VAR_8, VAR_9))
  VAR_10 = VAR_4;
 else
  VAR_10 = VAR_2;

 if (VAR_11)
  FUNC_4(VAR_7);

 return VAR_10;
}
