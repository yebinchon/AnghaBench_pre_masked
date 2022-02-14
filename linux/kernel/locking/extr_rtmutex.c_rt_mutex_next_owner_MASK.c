
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct rt_mutex {int dummy; } ;
struct TYPE_2__ {struct task_struct* task; } ;


 int FUNC_0 (struct rt_mutex*) ;
 TYPE_1__* FUNC_1 (struct rt_mutex*) ;

struct task_struct *FUNC_2(struct rt_mutex *VAR_0)
{
 if (!FUNC_0(VAR_0))
  return ((void*)0);

 return FUNC_1(VAR_0)->task;
}
