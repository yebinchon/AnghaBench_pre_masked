
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int mode; int lock; } ;
struct TYPE_8__ {int numLockOwners; int nLocks; TYPE_1__ tag; TYPE_2__* lockOwners; } ;
struct TYPE_7__ {int nLocks; int * owner; } ;
typedef int * ResourceOwner ;
typedef TYPE_2__ LOCALLOCKOWNER ;
typedef TYPE_3__ LOCALLOCK ;


 int FUNC_0 (int) ;
 int * VAR_0 ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *,TYPE_3__*) ;
 int VAR_1 ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static void
FUNC_4(LOCALLOCK *VAR_2, bool VAR_3)
{
 ResourceOwner VAR_4;
 LOCALLOCKOWNER *VAR_5;
 int VAR_6;


 if (VAR_3)
  VAR_4 = ((void*)0);
 else
  VAR_4 = VAR_0;


 VAR_5 = VAR_2->lockOwners;
 for (VAR_6 = VAR_2->numLockOwners - 1; VAR_6 >= 0; VAR_6--)
 {
  if (VAR_5[VAR_6].owner == VAR_4)
  {
   FUNC_0(VAR_5[VAR_6].nLocks > 0);
   if (VAR_5[VAR_6].nLocks < VAR_2->nLocks)
   {




    VAR_2->nLocks -= VAR_5[VAR_6].nLocks;

    VAR_2->numLockOwners--;
    if (VAR_4 != ((void*)0))
     FUNC_2(VAR_4, VAR_2);
    if (VAR_6 < VAR_2->numLockOwners)
     VAR_5[VAR_6] = VAR_5[VAR_2->numLockOwners];
   }
   else
   {
    FUNC_0(VAR_5[VAR_6].nLocks == VAR_2->nLocks);

    VAR_5[VAR_6].nLocks = 1;
    VAR_2->nLocks = 1;
    if (!FUNC_1(&VAR_2->tag.lock,
         VAR_2->tag.mode,
         VAR_3))
     FUNC_3(VAR_1, "ReleaseLockIfHeld: failed??");
   }
   break;
  }
 }
}
