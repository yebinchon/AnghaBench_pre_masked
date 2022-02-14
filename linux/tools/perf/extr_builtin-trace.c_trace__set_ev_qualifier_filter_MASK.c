
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ sys_enter; } ;
struct TYPE_4__ {TYPE_1__ events; scalar_t__ map; } ;
struct trace {TYPE_2__ syscalls; } ;


 int FUNC_0 (struct trace*) ;
 int FUNC_1 (struct trace*) ;

__attribute__((used)) static int FUNC_2(struct trace *VAR_0)
{
 if (VAR_0->syscalls.map)
  return FUNC_0(VAR_0);
 if (VAR_0->syscalls.events.sys_enter)
  return FUNC_1(VAR_0);
 return 0;
}
