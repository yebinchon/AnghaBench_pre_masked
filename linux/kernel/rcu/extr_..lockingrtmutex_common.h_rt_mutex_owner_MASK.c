
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct rt_mutex {int owner; } ;


 scalar_t__ FUNC_0 (int ) ;
 unsigned long VAR_0 ;

__attribute__((used)) static inline struct task_struct *FUNC_1(struct rt_mutex *VAR_1)
{
 unsigned long VAR_2 = (unsigned long) FUNC_0(VAR_1->owner);

 return (struct task_struct *) (VAR_2 & ~VAR_0);
}
