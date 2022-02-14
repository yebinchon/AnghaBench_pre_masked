
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct mutex {int owner; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static inline struct task_struct *FUNC_1(struct mutex *VAR_1)
{
 return (struct task_struct *)(FUNC_0(&VAR_1->owner) & ~VAR_0);
}
