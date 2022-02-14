
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct child_sync {int parent_gave_up; int sem_child; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct child_sync *VAR_0)
{
 int VAR_1;


 VAR_1 = FUNC_1(&VAR_0->sem_child);
 if (VAR_1) {
  FUNC_0("Error waiting for parent");
  return 1;
 }

 return VAR_0->parent_gave_up;
}
