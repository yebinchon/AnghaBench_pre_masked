
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int lockmode; int locktag; } ;
typedef TYPE_3__ TwoPhaseLockRecord ;
struct TYPE_10__ {int myLock; } ;
struct TYPE_16__ {TYPE_1__ tag; } ;
struct TYPE_15__ {scalar_t__ locktag_type; } ;
struct TYPE_11__ {int mode; TYPE_6__ lock; } ;
struct TYPE_14__ {scalar_t__ nLocks; int numLockOwners; int holdsStrongLockCount; TYPE_2__ tag; TYPE_8__* proclock; int lock; TYPE_4__* lockOwners; } ;
struct TYPE_13__ {int * owner; } ;
typedef int LOCKTAG ;
typedef TYPE_4__ LOCALLOCKOWNER ;
typedef TYPE_5__ LOCALLOCK ;
typedef int HASH_SEQ_STATUS ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_8__* FUNC_0 (TYPE_5__*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,TYPE_3__*,int) ;
 int VAR_4 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *,TYPE_6__*,int) ;

void
FUNC_8(void)
{
 HASH_SEQ_STATUS VAR_5;
 LOCALLOCK *VAR_6;







 FUNC_5(&VAR_5, VAR_3);

 while ((VAR_6 = (LOCALLOCK *) FUNC_6(&VAR_5)) != ((void*)0))
 {
  TwoPhaseLockRecord VAR_7;
  LOCALLOCKOWNER *VAR_8 = VAR_6->lockOwners;
  bool VAR_9;
  bool VAR_10;
  int VAR_11;





  if (VAR_6->tag.lock.locktag_type == VAR_2)
   continue;


  if (VAR_6->nLocks <= 0)
   continue;


  VAR_9 = VAR_10 = 0;
  for (VAR_11 = VAR_6->numLockOwners - 1; VAR_11 >= 0; VAR_11--)
  {
   if (VAR_8[VAR_11].owner == ((void*)0))
    VAR_9 = 1;
   else
    VAR_10 = 1;
  }


  if (!VAR_10)
   continue;
  if (VAR_9)
   FUNC_2(VAR_1,
     (FUNC_3(VAR_0),
      FUNC_4("cannot PREPARE while holding both session-level and transaction-level locks on the same object")));







  if (VAR_6->proclock == ((void*)0))
  {
   VAR_6->proclock = FUNC_0(VAR_6);
   VAR_6->lock = VAR_6->proclock->tag.myLock;
  }






  VAR_6->holdsStrongLockCount = 0;




  FUNC_7(&(VAR_7.locktag), &(VAR_6->tag.lock), sizeof(LOCKTAG));
  VAR_7.lockmode = VAR_6->tag.mode;

  FUNC_1(VAR_4, 0,
          &VAR_7, sizeof(TwoPhaseLockRecord));
 }
}
