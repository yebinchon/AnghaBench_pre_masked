
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int numLockOwners; TYPE_1__* lockOwners; } ;
struct TYPE_6__ {scalar_t__ owner; scalar_t__ nLocks; } ;
typedef scalar_t__ ResourceOwner ;
typedef TYPE_1__ LOCALLOCKOWNER ;
typedef TYPE_2__ LOCALLOCK ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,TYPE_2__*) ;
 int FUNC_1 (scalar_t__,TYPE_2__*) ;

__attribute__((used)) static void
FUNC_2(LOCALLOCK *VAR_1, ResourceOwner VAR_2)
{
 LOCALLOCKOWNER *VAR_3;
 int VAR_4;
 int VAR_5 = -1;
 int VAR_6 = -1;





 VAR_3 = VAR_1->lockOwners;
 for (VAR_4 = VAR_1->numLockOwners - 1; VAR_4 >= 0; VAR_4--)
 {
  if (VAR_3[VAR_4].owner == VAR_0)
   VAR_5 = VAR_4;
  else if (VAR_3[VAR_4].owner == VAR_2)
   VAR_6 = VAR_4;
 }

 if (VAR_5 < 0)
  return;

 if (VAR_6 < 0)
 {

  VAR_3[VAR_5].owner = VAR_2;
  FUNC_1(VAR_2, VAR_1);
 }
 else
 {

  VAR_3[VAR_6].nLocks += VAR_3[VAR_5].nLocks;

  VAR_1->numLockOwners--;
  if (VAR_5 < VAR_1->numLockOwners)
   VAR_3[VAR_5] = VAR_3[VAR_1->numLockOwners];
 }
 FUNC_0(VAR_0, VAR_1);
}
