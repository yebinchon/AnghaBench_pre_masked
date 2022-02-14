
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct child_sync {int sem_child; int sem_parent; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int,int ) ;

int FUNC_2(struct child_sync *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_1(&VAR_0->sem_parent, 1, 0);
 if (VAR_1) {
  FUNC_0("Semaphore initialization failed");
  return 1;
 }

 VAR_1 = FUNC_1(&VAR_0->sem_child, 1, 0);
 if (VAR_1) {
  FUNC_0("Semaphore initialization failed");
  return 1;
 }

 return 0;
}
