
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lockGroupLink; int lockGroupMembers; struct TYPE_3__* lockGroupLeader; } ;
typedef int LWLock ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int * FUNC_3 (TYPE_1__*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_4 (int *,int *) ;

void
FUNC_5(void)
{
 LWLock *VAR_2;


 if (VAR_1->lockGroupLeader == VAR_1)
  return;


 FUNC_0(VAR_1->lockGroupLeader == ((void*)0));


 VAR_2 = FUNC_3(VAR_1);
 FUNC_1(VAR_2, VAR_0);
 VAR_1->lockGroupLeader = VAR_1;
 FUNC_4(&VAR_1->lockGroupMembers, &VAR_1->lockGroupLink);
 FUNC_2(VAR_2);
}
