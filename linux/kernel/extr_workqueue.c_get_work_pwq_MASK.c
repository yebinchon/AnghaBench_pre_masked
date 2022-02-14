
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_struct {int data; } ;
typedef void pool_workqueue ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long FUNC_0 (int *) ;

__attribute__((used)) static struct pool_workqueue *FUNC_1(struct work_struct *VAR_2)
{
 unsigned long VAR_3 = FUNC_0(&VAR_2->data);

 if (VAR_3 & VAR_0)
  return (void *)(VAR_3 & VAR_1);
 else
  return ((void*)0);
}
