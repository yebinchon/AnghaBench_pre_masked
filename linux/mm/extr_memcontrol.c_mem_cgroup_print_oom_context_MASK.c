
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct TYPE_2__ {int cgroup; } ;
struct mem_cgroup {TYPE_1__ css; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct task_struct*,int ) ;

void FUNC_5(struct mem_cgroup *VAR_1, struct task_struct *VAR_2)
{
 FUNC_2();

 if (VAR_1) {
  FUNC_0(",oom_memcg=");
  FUNC_1(VAR_1->css.cgroup);
 } else
  FUNC_0(",global_oom");
 if (VAR_2) {
  FUNC_0(",task_memcg=");
  FUNC_1(FUNC_4(VAR_2, VAR_0));
 }
 FUNC_3();
}
