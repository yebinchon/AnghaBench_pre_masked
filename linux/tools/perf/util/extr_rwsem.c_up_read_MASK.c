
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rw_semaphore {int lock; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;

int FUNC_1(struct rw_semaphore *VAR_1)
{
 return VAR_0 ? 0 : FUNC_0(&VAR_1->lock);
}
