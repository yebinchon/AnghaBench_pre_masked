
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kthread_worker {int lock; } ;
struct kthread_work {scalar_t__ canceling; int node; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline bool FUNC_2(struct kthread_worker *VAR_0,
       struct kthread_work *VAR_1)
{
 FUNC_1(&VAR_0->lock);

 return !FUNC_0(&VAR_1->node) || VAR_1->canceling;
}
