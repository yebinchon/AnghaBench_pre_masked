
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_14__ ;


typedef int localtag ;
struct TYPE_29__ {scalar_t__ nLocks; int numLockOwners; int lockCleared; int hashcode; TYPE_2__* proclock; int * lock; TYPE_6__* lockOwners; } ;
struct TYPE_28__ {scalar_t__ nLocks; int * owner; } ;
struct TYPE_26__ {size_t locktag_lockmethodid; int locktag_field2; int locktag_field1; } ;
struct TYPE_27__ {size_t mode; TYPE_4__ lock; } ;
struct TYPE_25__ {size_t numLockModes; size_t* lockModeNames; } ;
struct TYPE_24__ {int holdMask; } ;
struct TYPE_23__ {TYPE_14__* myProc; int * myLock; } ;
struct TYPE_22__ {int backendLock; } ;
typedef int * ResourceOwner ;
typedef TYPE_1__ PROCLOCKTAG ;
typedef TYPE_2__ PROCLOCK ;
typedef TYPE_3__* LockMethod ;
typedef int LWLock ;
typedef TYPE_4__ LOCKTAG ;
typedef size_t LOCKMODE ;
typedef size_t LOCKMETHODID ;
typedef int LOCK ;
typedef TYPE_5__ LOCALLOCKTAG ;
typedef TYPE_6__ LOCALLOCKOWNER ;
typedef TYPE_7__ LOCALLOCK ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,TYPE_2__*,TYPE_3__*,int ,int) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_4__ const*,size_t) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int ,size_t) ;
 int VAR_3 ;
 int FUNC_4 (size_t) ;
 scalar_t__ FUNC_5 (TYPE_4__ const*) ;
 int FUNC_6 (char*,int *,size_t) ;
 int VAR_4 ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *) ;
 int VAR_5 ;
 int * FUNC_9 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_3__** VAR_9 ;
 int FUNC_10 (TYPE_5__*,int ,int) ;
 TYPE_14__* VAR_10 ;
 int FUNC_11 (char*,TYPE_2__*) ;
 int FUNC_12 (TYPE_7__*) ;
 int FUNC_13 (int *,TYPE_7__*) ;
 int FUNC_14 (int *,size_t,TYPE_2__*,TYPE_3__*) ;
 int VAR_11 ;
 int FUNC_15 (int ,char*,...) ;
 scalar_t__ FUNC_16 (int ,void*,int ,int *) ;
 scalar_t__ FUNC_17 (int ,void const*,int ,int ,int *) ;
 size_t FUNC_18 (TYPE_3__**) ;

bool
FUNC_19(const LOCKTAG *VAR_12, LOCKMODE VAR_13, bool VAR_14)
{
 LOCKMETHODID VAR_15 = VAR_12->locktag_lockmethodid;
 LockMethod VAR_16;
 LOCALLOCKTAG VAR_17;
 LOCALLOCK *VAR_18;
 LOCK *VAR_19;
 PROCLOCK *VAR_20;
 LWLock *VAR_21;
 bool VAR_22;

 if (VAR_15 <= 0 || VAR_15 >= FUNC_18(VAR_9))
  FUNC_15(VAR_1, "unrecognized lock method: %d", VAR_15);
 VAR_16 = VAR_9[VAR_15];
 if (VAR_13 <= 0 || VAR_13 > VAR_16->numLockModes)
  FUNC_15(VAR_1, "unrecognized lock mode: %d", VAR_13);
 FUNC_10(&VAR_17, 0, sizeof(VAR_17));
 VAR_17.lock = *VAR_12;
 VAR_17.mode = VAR_13;

 VAR_18 = (LOCALLOCK *) FUNC_16(VAR_6,
            (void *) &VAR_17,
            VAR_3, ((void*)0));




 if (!VAR_18 || VAR_18->nLocks <= 0)
 {
  FUNC_15(VAR_11, "you don't own a lock of type %s",
    VAR_16->lockModeNames[VAR_13]);
  return 0;
 }




 {
  LOCALLOCKOWNER *VAR_23 = VAR_18->lockOwners;
  ResourceOwner VAR_24;
  int VAR_25;


  if (VAR_14)
   VAR_24 = ((void*)0);
  else
   VAR_24 = VAR_0;

  for (VAR_25 = VAR_18->numLockOwners - 1; VAR_25 >= 0; VAR_25--)
  {
   if (VAR_23[VAR_25].owner == VAR_24)
   {
    FUNC_0(VAR_23[VAR_25].nLocks > 0);
    if (--VAR_23[VAR_25].nLocks == 0)
    {
     if (VAR_24 != ((void*)0))
      FUNC_13(VAR_24, VAR_18);

     VAR_18->numLockOwners--;
     if (VAR_25 < VAR_18->numLockOwners)
      VAR_23[VAR_25] = VAR_23[VAR_18->numLockOwners];
    }
    break;
   }
  }
  if (VAR_25 < 0)
  {

   FUNC_15(VAR_11, "you don't own a lock of type %s",
     VAR_16->lockModeNames[VAR_13]);
   return 0;
  }
 }





 VAR_18->nLocks--;

 if (VAR_18->nLocks > 0)
  return 1;
 VAR_18->lockCleared = 0;


 if (FUNC_2(VAR_12, VAR_13) &&
  VAR_2 > 0)
 {
  bool VAR_26;





  FUNC_7(&VAR_10->backendLock, VAR_5);
  VAR_26 = FUNC_3(VAR_12->locktag_field2,
              VAR_13);
  FUNC_8(&VAR_10->backendLock);
  if (VAR_26)
  {
   FUNC_12(VAR_18);
   return 1;
  }
 }




 VAR_21 = FUNC_9(VAR_18->hashcode);

 FUNC_7(VAR_21, VAR_5);
 VAR_19 = VAR_18->lock;
 if (!VAR_19)
 {
  PROCLOCKTAG VAR_27;

  FUNC_0(FUNC_2(VAR_12, VAR_13));
  VAR_19 = (LOCK *) FUNC_17(VAR_7,
             (const void *) VAR_12,
             VAR_18->hashcode,
             VAR_3,
             ((void*)0));
  if (!VAR_19)
   FUNC_15(VAR_1, "failed to re-find shared lock object");
  VAR_18->lock = VAR_19;

  VAR_27.myLock = VAR_19;
  VAR_27.myProc = VAR_10;
  VAR_18->proclock = (PROCLOCK *) FUNC_16(VAR_8,
                (void *) &VAR_27,
                VAR_3,
                ((void*)0));
  if (!VAR_18->proclock)
   FUNC_15(VAR_1, "failed to re-find shared proclock object");
 }
 FUNC_6("LockRelease: found", VAR_19, VAR_13);
 VAR_20 = VAR_18->proclock;
 FUNC_11("LockRelease: found", VAR_20);





 if (!(VAR_20->holdMask & FUNC_4(VAR_13)))
 {
  FUNC_11("LockRelease: WRONGTYPE", VAR_20);
  FUNC_8(VAR_21);
  FUNC_15(VAR_11, "you don't own a lock of type %s",
    VAR_16->lockModeNames[VAR_13]);
  FUNC_12(VAR_18);
  return 0;
 }




 VAR_22 = FUNC_14(VAR_19, VAR_13, VAR_20, VAR_16);

 FUNC_1(VAR_19, VAR_20,
    VAR_16, VAR_18->hashcode,
    VAR_22);

 FUNC_8(VAR_21);

 FUNC_12(VAR_18);
 return 1;
}
