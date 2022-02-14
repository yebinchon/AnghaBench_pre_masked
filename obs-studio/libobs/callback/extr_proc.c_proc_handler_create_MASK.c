
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc_handler {int procs; } ;
typedef struct proc_handler proc_handler_t ;


 struct proc_handler* FUNC_0 (int) ;
 int FUNC_1 (int ) ;

proc_handler_t *FUNC_2(void)
{
 struct proc_handler *VAR_0 = FUNC_0(sizeof(struct proc_handler));
 FUNC_1(VAR_0->procs);
 return VAR_0;
}
