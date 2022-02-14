
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ nRequested; scalar_t__* requested; scalar_t__ nGranted; scalar_t__* granted; int waitMask; int grantMask; } ;
struct TYPE_10__ {int* conflictTab; } ;
struct TYPE_9__ {int holdMask; } ;
typedef TYPE_1__ PROCLOCK ;
typedef TYPE_2__* LockMethod ;
typedef size_t LOCKMODE ;
typedef TYPE_3__ LOCK ;


 int FUNC_0 (int) ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (char*,TYPE_3__*,size_t) ;
 int FUNC_3 (char*,TYPE_1__*) ;

__attribute__((used)) static bool
FUNC_4(LOCK *VAR_0, LOCKMODE VAR_1,
   PROCLOCK *VAR_2, LockMethod VAR_3)
{
 bool VAR_4 = 0;

 FUNC_0((VAR_0->nRequested > 0) && (VAR_0->requested[VAR_1] > 0));
 FUNC_0((VAR_0->nGranted > 0) && (VAR_0->granted[VAR_1] > 0));
 FUNC_0(VAR_0->nGranted <= VAR_0->nRequested);




 VAR_0->nRequested--;
 VAR_0->requested[VAR_1]--;
 VAR_0->nGranted--;
 VAR_0->granted[VAR_1]--;

 if (VAR_0->granted[VAR_1] == 0)
 {

  VAR_0->grantMask &= FUNC_1(VAR_1);
 }

 FUNC_2("UnGrantLock: updated", VAR_0, VAR_1);
 if (VAR_3->conflictTab[VAR_1] & VAR_0->waitMask)
  VAR_4 = 1;




 VAR_2->holdMask &= FUNC_1(VAR_1);
 FUNC_3("UnGrantLock: updated", VAR_2);

 return VAR_4;
}
