
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct semaphore {scalar_t__ count; int lock; } ;


 int FUNC_0 (struct semaphore*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(struct semaphore *VAR_0)
{
 unsigned long VAR_1;

 FUNC_2(&VAR_0->lock, VAR_1);
 if (FUNC_1(VAR_0->count > 0))
  VAR_0->count--;
 else
  FUNC_0(VAR_0);
 FUNC_3(&VAR_0->lock, VAR_1);
}
