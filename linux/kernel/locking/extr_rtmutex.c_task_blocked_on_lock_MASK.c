
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {TYPE_1__* pi_blocked_on; } ;
struct rt_mutex {int dummy; } ;
struct TYPE_2__ {struct rt_mutex* lock; } ;



__attribute__((used)) static inline struct rt_mutex *FUNC_0(struct task_struct *VAR_0)
{
 return VAR_0->pi_blocked_on ? VAR_0->pi_blocked_on->lock : ((void*)0);
}
