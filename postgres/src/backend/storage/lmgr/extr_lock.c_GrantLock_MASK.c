
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ nGranted; scalar_t__* granted; scalar_t__* requested; scalar_t__ nRequested; int waitMask; int grantMask; } ;
struct TYPE_6__ {int holdMask; } ;
typedef TYPE_1__ PROCLOCK ;
typedef size_t LOCKMODE ;
typedef TYPE_2__ LOCK ;


 int FUNC_0 (int) ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (size_t) ;
 int FUNC_3 (char*,TYPE_2__*,size_t) ;

void
FUNC_4(LOCK *VAR_0, PROCLOCK *VAR_1, LOCKMODE VAR_2)
{
 VAR_0->nGranted++;
 VAR_0->granted[VAR_2]++;
 VAR_0->grantMask |= FUNC_2(VAR_2);
 if (VAR_0->granted[VAR_2] == VAR_0->requested[VAR_2])
  VAR_0->waitMask &= FUNC_1(VAR_2);
 VAR_1->holdMask |= FUNC_2(VAR_2);
 FUNC_3("GrantLock", VAR_0, VAR_2);
 FUNC_0((VAR_0->nGranted > 0) && (VAR_0->granted[VAR_2] > 0));
 FUNC_0(VAR_0->nGranted <= VAR_0->nRequested);
}
