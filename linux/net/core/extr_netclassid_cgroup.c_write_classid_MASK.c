
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct task_struct {int files; } ;
struct css_task_iter {int dummy; } ;
struct cgroup_subsys_state {int dummy; } ;
struct cgroup_cls_state {scalar_t__ classid; } ;
struct cftype {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 struct cgroup_cls_state* FUNC_2 (struct cgroup_subsys_state*) ;
 int FUNC_3 (struct css_task_iter*) ;
 struct task_struct* FUNC_4 (struct css_task_iter*) ;
 int FUNC_5 (struct cgroup_subsys_state*,int ,struct css_task_iter*) ;
 int FUNC_6 (int ,int ,int ,void*) ;
 int FUNC_7 (struct task_struct*) ;
 int FUNC_8 (struct task_struct*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_9(struct cgroup_subsys_state *VAR_1, struct cftype *VAR_2,
    u64 VAR_3)
{
 struct cgroup_cls_state *VAR_4 = FUNC_2(VAR_1);
 struct css_task_iter VAR_5;
 struct task_struct *VAR_6;

 FUNC_0();

 VAR_4->classid = (u32)VAR_3;

 FUNC_5(VAR_1, 0, &VAR_5);
 while ((VAR_6 = FUNC_4(&VAR_5))) {
  FUNC_7(VAR_6);
  FUNC_6(VAR_6->files, 0, VAR_0,
      (void *)(unsigned long)VAR_4->classid);
  FUNC_8(VAR_6);
  FUNC_1();
 }
 FUNC_3(&VAR_5);

 return 0;
}
