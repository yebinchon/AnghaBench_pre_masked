
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* sys_exit; void* sys_enter; } ;
struct TYPE_4__ {TYPE_1__ prog_array; void* map; } ;
struct trace {TYPE_2__ syscalls; } ;


 void* FUNC_0 (struct trace*,char*) ;

__attribute__((used)) static void FUNC_1(struct trace *VAR_0)
{
 VAR_0->syscalls.map = FUNC_0(VAR_0, "syscalls");
 VAR_0->syscalls.prog_array.sys_enter = FUNC_0(VAR_0, "syscalls_sys_enter");
 VAR_0->syscalls.prog_array.sys_exit = FUNC_0(VAR_0, "syscalls_sys_exit");
}
