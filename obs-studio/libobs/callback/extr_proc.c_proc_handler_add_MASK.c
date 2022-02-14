
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct proc_info {void* data; int callback; int func; } ;
struct TYPE_3__ {int procs; } ;
typedef TYPE_1__ proc_handler_t ;
typedef int proc_handler_proc_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char const*) ;
 int FUNC_1 (int ,struct proc_info*) ;
 int FUNC_2 (struct proc_info*,int ,int) ;
 int FUNC_3 (int *,char const*) ;

void FUNC_4(proc_handler_t *VAR_1, const char *VAR_2,
        proc_handler_proc_t VAR_3, void *VAR_4)
{
 if (!VAR_1)
  return;

 struct proc_info VAR_5;
 FUNC_2(&VAR_5, 0, sizeof(struct proc_info));

 if (!FUNC_3(&VAR_5.func, VAR_2)) {
  FUNC_0(VAR_0, "Function declaration invalid: %s",
       VAR_2);
  return;
 }

 VAR_5.callback = VAR_3;
 VAR_5.data = VAR_4;

 FUNC_1(VAR_1->procs, &VAR_5);
}
