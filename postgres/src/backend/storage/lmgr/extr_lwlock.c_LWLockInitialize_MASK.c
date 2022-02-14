
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tranche; int waiters; int nwaiters; int state; } ;
typedef TYPE_1__ LWLock ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;

void
FUNC_2(LWLock *VAR_1, int VAR_2)
{
 FUNC_0(&VAR_1->state, VAR_0);



 VAR_1->tranche = VAR_2;
 FUNC_1(&VAR_1->waiters);
}
