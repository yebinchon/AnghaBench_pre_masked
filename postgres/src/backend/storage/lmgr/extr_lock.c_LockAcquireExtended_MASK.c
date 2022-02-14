
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_44__ TYPE_6__ ;
typedef struct TYPE_43__ TYPE_5__ ;
typedef struct TYPE_42__ TYPE_4__ ;
typedef struct TYPE_41__ TYPE_3__ ;
typedef struct TYPE_40__ TYPE_32__ ;
typedef struct TYPE_39__ TYPE_2__ ;
typedef struct TYPE_38__ TYPE_1__ ;
typedef struct TYPE_37__ TYPE_14__ ;
typedef struct TYPE_36__ TYPE_11__ ;


typedef size_t uint32 ;
typedef int localtag ;
struct TYPE_44__ {size_t hashcode; scalar_t__ nLocks; int holdsStrongLockCount; int lockCleared; int numLockOwners; int maxLockOwners; TYPE_4__* lock; TYPE_1__* proclock; int * lockOwners; } ;
struct TYPE_41__ {size_t locktag_lockmethodid; scalar_t__ locktag_type; int locktag_field2; int locktag_field1; int locktag_field4; int locktag_field3; } ;
struct TYPE_43__ {size_t mode; TYPE_3__ lock; } ;
struct TYPE_42__ {int waitMask; scalar_t__ nRequested; scalar_t__* requested; scalar_t__ nGranted; } ;
struct TYPE_40__ {scalar_t__* count; } ;
struct TYPE_39__ {size_t numLockModes; int* conflictTab; int * lockModeNames; } ;
struct TYPE_37__ {TYPE_4__* myLock; } ;
struct TYPE_38__ {int holdMask; TYPE_14__ tag; int procLink; int lockLink; } ;
struct TYPE_36__ {int heldLocks; int backendLock; } ;
typedef int * ResourceOwner ;
typedef TYPE_1__ PROCLOCK ;
typedef TYPE_2__* LockMethod ;
typedef int LockAcquireResult ;
typedef int LWLock ;
typedef TYPE_3__ LOCKTAG ;
typedef size_t LOCKMODE ;
typedef size_t LOCKMETHODID ;
typedef TYPE_4__ LOCK ;
typedef TYPE_5__ LOCALLOCKTAG ;
typedef int LOCALLOCKOWNER ;
typedef TYPE_6__ LOCALLOCK ;


 int FUNC_0 () ;
 size_t VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_6__*,size_t) ;
 scalar_t__ FUNC_3 (TYPE_3__ const*,size_t) ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (TYPE_3__ const*,size_t) ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (int ,size_t) ;
 scalar_t__ VAR_6 ;
 size_t FUNC_6 (size_t) ;
 TYPE_32__* VAR_7 ;
 int FUNC_7 (TYPE_2__*,TYPE_3__ const*,size_t) ;
 int FUNC_8 () ;
 int FUNC_9 (TYPE_4__*,TYPE_1__*,size_t) ;
 int FUNC_10 (TYPE_6__*,int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_11 (size_t) ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ FUNC_12 (TYPE_3__ const*) ;
 int FUNC_13 (char*,TYPE_4__*,size_t) ;
 int VAR_17 ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (int *) ;
 int VAR_18 ;
 int FUNC_16 (TYPE_2__*,size_t,TYPE_4__*,TYPE_1__*) ;
 int * FUNC_17 (size_t) ;
 int VAR_19 ;
 int VAR_20 ;
 TYPE_2__** VAR_21 ;
 size_t FUNC_18 (TYPE_3__*) ;
 int FUNC_19 (int ,int ) ;
 int FUNC_20 () ;
 int FUNC_21 (TYPE_5__*,int ,int) ;
 scalar_t__ FUNC_22 (int ,int) ;
 TYPE_11__* VAR_22 ;
 int VAR_23 ;
 int FUNC_23 (char*,TYPE_1__*) ;
 size_t FUNC_24 (TYPE_14__*,size_t) ;
 scalar_t__ FUNC_25 () ;
 int FUNC_26 (TYPE_6__*) ;
 size_t VAR_24 ;
 int FUNC_27 (int *) ;
 int VAR_25 ;
 int VAR_26 ;
 TYPE_1__* FUNC_28 (TYPE_2__*,TYPE_11__*,TYPE_3__ const*,size_t,size_t) ;
 int FUNC_29 (int ,int ,int ,int ,scalar_t__,size_t) ;
 int FUNC_30 (int ,int ,int ,int ,scalar_t__,size_t) ;
 int VAR_27 ;
 int FUNC_31 (TYPE_6__*,int *) ;
 scalar_t__ FUNC_32 () ;
 int FUNC_33 (int ,char*,...) ;
 int FUNC_34 (int ,int ) ;
 int FUNC_35 (int ) ;
 int FUNC_36 (char*) ;
 int FUNC_37 (char*,...) ;
 scalar_t__ FUNC_38 (int ,void*,int ,int*) ;
 int FUNC_39 (int ,void*,size_t,int ,int *) ;
 size_t FUNC_40 (TYPE_2__**) ;
 scalar_t__ FUNC_41 (int *,int) ;

LockAcquireResult
FUNC_42(const LOCKTAG *VAR_28,
     LOCKMODE VAR_29,
     bool VAR_30,
     bool VAR_31,
     bool VAR_32,
     LOCALLOCK **VAR_33)
{
 LOCKMETHODID VAR_34 = VAR_28->locktag_lockmethodid;
 LockMethod VAR_35;
 LOCALLOCKTAG VAR_36;
 LOCALLOCK *VAR_37;
 LOCK *VAR_38;
 PROCLOCK *VAR_39;
 bool VAR_40;
 ResourceOwner VAR_41;
 uint32 VAR_42;
 LWLock *VAR_43;
 int VAR_44;
 bool VAR_45 = 0;

 if (VAR_34 <= 0 || VAR_34 >= FUNC_40(VAR_21))
  FUNC_33(VAR_4, "unrecognized lock method: %d", VAR_34);
 VAR_35 = VAR_21[VAR_34];
 if (VAR_29 <= 0 || VAR_29 > VAR_35->numLockModes)
  FUNC_33(VAR_4, "unrecognized lock mode: %d", VAR_29);

 if (FUNC_25() && !VAR_10 &&
  (VAR_28->locktag_type == VAR_15 ||
   VAR_28->locktag_type == VAR_16) &&
  VAR_29 > VAR_24)
  FUNC_34(VAR_4,
    (FUNC_35(VAR_2),
     FUNC_37("cannot acquire lock mode %s on database objects while recovery is in progress",
      VAR_35->lockModeNames[VAR_29]),
     FUNC_36("Only RowExclusiveLock or less can be acquired on database objects during recovery.")));
 if (VAR_30)
  VAR_41 = ((void*)0);
 else
  VAR_41 = VAR_1;




 FUNC_21(&VAR_36, 0, sizeof(VAR_36));
 VAR_36.lock = *VAR_28;
 VAR_36.mode = VAR_29;

 VAR_37 = (LOCALLOCK *) FUNC_38(VAR_19,
            (void *) &VAR_36,
            VAR_8, &VAR_40);




 if (!VAR_40)
 {
  VAR_37->lock = ((void*)0);
  VAR_37->proclock = ((void*)0);
  VAR_37->hashcode = FUNC_18(&(VAR_36.lock));
  VAR_37->nLocks = 0;
  VAR_37->holdsStrongLockCount = 0;
  VAR_37->lockCleared = 0;
  VAR_37->numLockOwners = 0;
  VAR_37->maxLockOwners = 8;
  VAR_37->lockOwners = ((void*)0);
  VAR_37->lockOwners = (LOCALLOCKOWNER *)
   FUNC_22(VAR_27,
          VAR_37->maxLockOwners * sizeof(LOCALLOCKOWNER));
 }
 else
 {

  if (VAR_37->numLockOwners >= VAR_37->maxLockOwners)
  {
   int VAR_46 = VAR_37->maxLockOwners * 2;

   VAR_37->lockOwners = (LOCALLOCKOWNER *)
    FUNC_41(VAR_37->lockOwners,
       VAR_46 * sizeof(LOCALLOCKOWNER));
   VAR_37->maxLockOwners = VAR_46;
  }
 }
 VAR_42 = VAR_37->hashcode;

 if (VAR_33)
  *VAR_33 = VAR_37;







 if (VAR_37->nLocks > 0)
 {
  FUNC_10(VAR_37, VAR_41);
  if (VAR_37->lockCleared)
   return VAR_11;
  else
   return VAR_12;
 }
 if (VAR_29 >= VAR_0 &&
  VAR_28->locktag_type == VAR_16 &&
  !FUNC_25() &&
  FUNC_32())
 {
  FUNC_20();
  VAR_45 = 1;
 }
 if (FUNC_4(VAR_28, VAR_29) &&
  VAR_6 < VAR_5)
 {
  uint32 VAR_47 = FUNC_6(VAR_42);
  bool VAR_48;







  FUNC_14(&VAR_22->backendLock, VAR_18);
  if (VAR_7->count[VAR_47] != 0)
   VAR_48 = 0;
  else
   VAR_48 = FUNC_5(VAR_28->locktag_field2,
             VAR_29);
  FUNC_15(&VAR_22->backendLock);
  if (VAR_48)
  {





   VAR_37->lock = ((void*)0);
   VAR_37->proclock = ((void*)0);
   FUNC_10(VAR_37, VAR_41);
   return VAR_14;
  }
 }







 if (FUNC_3(VAR_28, VAR_29))
 {
  uint32 VAR_49 = FUNC_6(VAR_42);

  FUNC_2(VAR_37, VAR_49);
  if (!FUNC_7(VAR_35, VAR_28,
             VAR_42))
  {
   FUNC_0();
   if (VAR_37->nLocks == 0)
    FUNC_26(VAR_37);
   if (VAR_33)
    *VAR_33 = ((void*)0);
   if (VAR_32)
    FUNC_34(VAR_4,
      (FUNC_35(VAR_3),
       FUNC_37("out of shared memory"),
       FUNC_36("You might need to increase max_locks_per_transaction.")));
   else
    return VAR_13;
  }
 }






 VAR_43 = FUNC_17(VAR_42);

 FUNC_14(VAR_43, VAR_18);
 VAR_39 = FUNC_28(VAR_35, VAR_22, VAR_28,
        VAR_42, VAR_29);
 if (!VAR_39)
 {
  FUNC_0();
  FUNC_15(VAR_43);
  if (VAR_37->nLocks == 0)
   FUNC_26(VAR_37);
  if (VAR_33)
   *VAR_33 = ((void*)0);
  if (VAR_32)
   FUNC_34(VAR_4,
     (FUNC_35(VAR_3),
      FUNC_37("out of shared memory"),
      FUNC_36("You might need to increase max_locks_per_transaction.")));
  else
   return VAR_13;
 }
 VAR_37->proclock = VAR_39;
 VAR_38 = VAR_39->tag.myLock;
 VAR_37->lock = VAR_38;






 if (VAR_35->conflictTab[VAR_29] & VAR_38->waitMask)
  VAR_44 = VAR_25;
 else
  VAR_44 = FUNC_16(VAR_35, VAR_29,
         VAR_38, VAR_39);

 if (VAR_44 == VAR_26)
 {

  FUNC_9(VAR_38, VAR_39, VAR_29);
  FUNC_10(VAR_37, VAR_41);
 }
 else
 {
  FUNC_1(VAR_44 == VAR_25);






  if (VAR_31)
  {
   FUNC_0();
   if (VAR_39->holdMask == 0)
   {
    uint32 VAR_50;

    VAR_50 = FUNC_24(&VAR_39->tag, VAR_42);
    FUNC_27(&VAR_39->lockLink);
    FUNC_27(&VAR_39->procLink);
    if (!FUNC_39(VAR_20,
             (void *) &(VAR_39->tag),
             VAR_50,
             VAR_9,
             ((void*)0)))
     FUNC_33(VAR_23, "proclock table corrupted");
   }
   else
    FUNC_23("LockAcquire: NOWAIT", VAR_39);
   VAR_38->nRequested--;
   VAR_38->requested[VAR_29]--;
   FUNC_13("LockAcquire: conditional lock failed", VAR_38, VAR_29);
   FUNC_1((VAR_38->nRequested > 0) && (VAR_38->requested[VAR_29] >= 0));
   FUNC_1(VAR_38->nGranted <= VAR_38->nRequested);
   FUNC_15(VAR_43);
   if (VAR_37->nLocks == 0)
    FUNC_26(VAR_37);
   if (VAR_33)
    *VAR_33 = ((void*)0);
   return VAR_13;
  }




  VAR_22->heldLocks = VAR_39->holdMask;





  FUNC_30(VAR_28->locktag_field1,
           VAR_28->locktag_field2,
           VAR_28->locktag_field3,
           VAR_28->locktag_field4,
           VAR_28->locktag_type,
           VAR_29);

  FUNC_31(VAR_37, VAR_41);

  FUNC_29(VAR_28->locktag_field1,
          VAR_28->locktag_field2,
          VAR_28->locktag_field3,
          VAR_28->locktag_field4,
          VAR_28->locktag_type,
          VAR_29);
  if (!(VAR_39->holdMask & FUNC_11(VAR_29)))
  {
   FUNC_0();
   FUNC_23("LockAcquire: INCONSISTENT", VAR_39);
   FUNC_13("LockAcquire: INCONSISTENT", VAR_38, VAR_29);

   FUNC_15(VAR_43);
   FUNC_33(VAR_4, "LockAcquire failed");
  }
  FUNC_23("LockAcquire: granted", VAR_39);
  FUNC_13("LockAcquire: granted", VAR_38, VAR_29);
 }





 FUNC_8();

 FUNC_15(VAR_43);





 if (VAR_45)
 {





  FUNC_19(VAR_28->locktag_field1,
          VAR_28->locktag_field2);
 }

 return VAR_14;
}
