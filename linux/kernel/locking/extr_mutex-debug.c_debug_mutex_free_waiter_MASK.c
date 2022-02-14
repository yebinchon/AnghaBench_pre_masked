
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mutex_waiter {int list; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mutex_waiter*,int ,int) ;

void FUNC_3(struct mutex_waiter *VAR_1)
{
 FUNC_0(!FUNC_1(&VAR_1->list));
 FUNC_2(VAR_1, VAR_0, sizeof(*VAR_1));
}
