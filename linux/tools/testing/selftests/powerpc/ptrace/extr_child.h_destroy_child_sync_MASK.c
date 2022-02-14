
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct child_sync {int sem_child; int sem_parent; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct child_sync *VAR_0)
{
 FUNC_0(&VAR_0->sem_parent);
 FUNC_0(&VAR_0->sem_child);
}
