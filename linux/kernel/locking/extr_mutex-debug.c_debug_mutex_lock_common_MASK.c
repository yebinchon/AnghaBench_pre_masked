
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mutex_waiter {int list; struct mutex_waiter* magic; } ;
struct mutex {int dummy; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (struct mutex_waiter*,int ,int) ;

void FUNC_2(struct mutex *VAR_1, struct mutex_waiter *VAR_2)
{
 FUNC_1(VAR_2, VAR_0, sizeof(*VAR_2));
 VAR_2->magic = VAR_2;
 FUNC_0(&VAR_2->list);
}
