
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct rw_semaphore {int owner; } ;


 unsigned long VAR_0 ;
 unsigned long FUNC_0 (int *) ;

__attribute__((used)) static inline struct task_struct *
FUNC_1(struct rw_semaphore *VAR_1, unsigned long *VAR_2)
{
 unsigned long VAR_3 = FUNC_0(&VAR_1->owner);

 *VAR_2 = VAR_3 & VAR_0;
 return (struct task_struct *)(VAR_3 & ~VAR_0);
}
