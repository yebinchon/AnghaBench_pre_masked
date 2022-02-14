
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int pid; int lockGroupLink; int lockGroupMembers; struct TYPE_5__* lockGroupLeader; } ;
typedef TYPE_1__ PGPROC ;
typedef int LWLock ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int * FUNC_3 (TYPE_1__*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_4 (int *,int *) ;

bool
FUNC_5(PGPROC *VAR_2, int VAR_3)
{
 LWLock *VAR_4;
 bool VAR_5 = 0;


 FUNC_0(VAR_1 != VAR_2);


 FUNC_0(VAR_1->lockGroupLeader == ((void*)0));


 FUNC_0(VAR_3 != 0);
 VAR_4 = FUNC_3(VAR_2);
 FUNC_1(VAR_4, VAR_0);


 if (VAR_2->pid == VAR_3 && VAR_2->lockGroupLeader == VAR_2)
 {

  VAR_5 = 1;
  VAR_1->lockGroupLeader = VAR_2;
  FUNC_4(&VAR_2->lockGroupMembers, &VAR_1->lockGroupLink);
 }
 FUNC_2(VAR_4);

 return VAR_5;
}
