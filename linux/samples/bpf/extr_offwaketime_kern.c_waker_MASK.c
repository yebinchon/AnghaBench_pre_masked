
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wokeby_t {int ret; int name; } ;
struct task_struct {int pid; } ;
struct pt_regs {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct pt_regs*) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (struct pt_regs*,int *,int ) ;
 int FUNC_4 (int *,int *,struct wokeby_t*,int ) ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_5(struct pt_regs *VAR_4)
{
 struct task_struct *VAR_5 = (void *) FUNC_0(VAR_4);
 struct wokeby_t VAR_6;
 u32 VAR_7;

 VAR_7 = FUNC_1(VAR_5->pid);

 FUNC_2(&VAR_6.name, sizeof(VAR_6.name));
 VAR_6.ret = FUNC_3(VAR_4, &VAR_2, VAR_1);

 FUNC_4(&VAR_3, &VAR_7, &VAR_6, VAR_0);
 return 0;
}
