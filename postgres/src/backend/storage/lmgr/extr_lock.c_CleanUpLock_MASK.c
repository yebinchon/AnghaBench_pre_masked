
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_9__ {scalar_t__ nRequested; int tag; int procLocks; } ;
struct TYPE_8__ {scalar_t__ holdMask; int tag; int procLink; int lockLink; } ;
typedef TYPE_1__ PROCLOCK ;
typedef int LockMethod ;
typedef TYPE_2__ LOCK ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,TYPE_2__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*,TYPE_1__*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ,TYPE_2__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int ,void*,int ,int ,int *) ;

__attribute__((used)) static void
FUNC_9(LOCK *VAR_4, PROCLOCK *VAR_5,
   LockMethod VAR_6, uint32 VAR_7,
   bool VAR_8)
{




 if (VAR_5->holdMask == 0)
 {
  uint32 VAR_9;

  FUNC_2("CleanUpLock: deleting", VAR_5);
  FUNC_5(&VAR_5->lockLink);
  FUNC_5(&VAR_5->procLink);
  VAR_9 = FUNC_3(&VAR_5->tag, VAR_7);
  if (!FUNC_8(VAR_2,
           (void *) &(VAR_5->tag),
           VAR_9,
           VAR_0,
           ((void*)0)))
   FUNC_7(VAR_3, "proclock table corrupted");
 }

 if (VAR_4->nRequested == 0)
 {




  FUNC_1("CleanUpLock: deleting", VAR_4, 0);
  FUNC_0(FUNC_6(&(VAR_4->procLocks)));
  if (!FUNC_8(VAR_1,
           (void *) &(VAR_4->tag),
           VAR_7,
           VAR_0,
           ((void*)0)))
   FUNC_7(VAR_3, "lock table corrupted");
 }
 else if (VAR_8)
 {

  FUNC_4(VAR_6, VAR_4);
 }
}
