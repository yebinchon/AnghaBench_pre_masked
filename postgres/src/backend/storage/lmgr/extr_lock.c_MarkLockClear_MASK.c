
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ nLocks; int lockCleared; } ;
typedef TYPE_1__ LOCALLOCK ;


 int FUNC_0 (int) ;

void
FUNC_1(LOCALLOCK *VAR_0)
{
 FUNC_0(VAR_0->nLocks > 0);
 VAR_0->lockCleared = 1;
}
