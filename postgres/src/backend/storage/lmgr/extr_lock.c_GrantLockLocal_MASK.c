
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int numLockOwners; int maxLockOwners; int nLocks; TYPE_1__* lockOwners; } ;
struct TYPE_5__ {int nLocks; int * owner; } ;
typedef int * ResourceOwner ;
typedef TYPE_1__ LOCALLOCKOWNER ;
typedef TYPE_2__ LOCALLOCK ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,TYPE_2__*) ;

__attribute__((used)) static void
FUNC_2(LOCALLOCK *VAR_0, ResourceOwner VAR_1)
{
 LOCALLOCKOWNER *VAR_2 = VAR_0->lockOwners;
 int VAR_3;

 FUNC_0(VAR_0->numLockOwners < VAR_0->maxLockOwners);

 VAR_0->nLocks++;

 for (VAR_3 = 0; VAR_3 < VAR_0->numLockOwners; VAR_3++)
 {
  if (VAR_2[VAR_3].owner == VAR_1)
  {
   VAR_2[VAR_3].nLocks++;
   return;
  }
 }
 VAR_2[VAR_3].owner = VAR_1;
 VAR_2[VAR_3].nLocks = 1;
 VAR_0->numLockOwners++;
 if (VAR_1 != ((void*)0))
  FUNC_1(VAR_1, VAR_0);
}
