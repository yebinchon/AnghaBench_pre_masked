
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int localtag ;
struct TYPE_20__ {scalar_t__ nLocks; TYPE_1__* proclock; TYPE_4__* lock; int hashcode; } ;
struct TYPE_17__ {size_t locktag_lockmethodid; int locktag_field2; int locktag_field1; } ;
struct TYPE_19__ {size_t mode; TYPE_3__ lock; } ;
struct TYPE_18__ {int waitMask; } ;
struct TYPE_16__ {size_t numLockModes; size_t* lockModeNames; int* conflictTab; } ;
struct TYPE_15__ {int holdMask; } ;
typedef TYPE_1__ PROCLOCK ;
typedef TYPE_2__* LockMethod ;
typedef int LWLock ;
typedef TYPE_3__ LOCKTAG ;
typedef size_t LOCKMODE ;
typedef size_t LOCKMETHODID ;
typedef TYPE_4__ LOCK ;
typedef TYPE_5__ LOCALLOCKTAG ;
typedef TYPE_6__ LOCALLOCK ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (size_t) ;
 scalar_t__ FUNC_1 (TYPE_3__ const*) ;
 int FUNC_2 (char*,TYPE_4__*,size_t) ;
 int VAR_2 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int VAR_3 ;
 int * FUNC_5 (int ) ;
 int VAR_4 ;
 TYPE_2__** VAR_5 ;
 int FUNC_6 (TYPE_5__*,int ,int) ;
 int FUNC_7 (char*,TYPE_1__*) ;
 int FUNC_8 (TYPE_6__*) ;
 int VAR_6 ;
 int FUNC_9 (int ,char*,size_t,...) ;
 scalar_t__ FUNC_10 (int ,void*,int ,int *) ;
 size_t FUNC_11 (TYPE_2__**) ;

bool
FUNC_12(const LOCKTAG *VAR_7, LOCKMODE VAR_8, bool VAR_9)
{
 LOCKMETHODID VAR_10 = VAR_7->locktag_lockmethodid;
 LockMethod VAR_11;
 LOCALLOCKTAG VAR_12;
 LOCALLOCK *VAR_13;
 LOCK *VAR_14;
 PROCLOCK *VAR_15;
 LWLock *VAR_16;
 bool VAR_17 = 0;

 if (VAR_10 <= 0 || VAR_10 >= FUNC_11(VAR_5))
  FUNC_9(VAR_0, "unrecognized lock method: %d", VAR_10);
 VAR_11 = VAR_5[VAR_10];
 if (VAR_8 <= 0 || VAR_8 > VAR_11->numLockModes)
  FUNC_9(VAR_0, "unrecognized lock mode: %d", VAR_8);
 FUNC_6(&VAR_12, 0, sizeof(VAR_12));
 VAR_12.lock = *VAR_7;
 VAR_12.mode = VAR_8;

 VAR_13 = (LOCALLOCK *) FUNC_10(VAR_4,
            (void *) &VAR_12,
            VAR_1, ((void*)0));




 if (!VAR_13 || VAR_13->nLocks <= 0)
 {
  FUNC_9(VAR_6, "you don't own a lock of type %s",
    VAR_11->lockModeNames[VAR_8]);
  return 0;
 }




 VAR_16 = FUNC_5(VAR_13->hashcode);

 FUNC_3(VAR_16, VAR_3);






 VAR_14 = VAR_13->lock;
 FUNC_2("LockHasWaiters: found", VAR_14, VAR_8);
 VAR_15 = VAR_13->proclock;
 FUNC_7("LockHasWaiters: found", VAR_15);





 if (!(VAR_15->holdMask & FUNC_0(VAR_8)))
 {
  FUNC_7("LockHasWaiters: WRONGTYPE", VAR_15);
  FUNC_4(VAR_16);
  FUNC_9(VAR_6, "you don't own a lock of type %s",
    VAR_11->lockModeNames[VAR_8]);
  FUNC_8(VAR_13);
  return 0;
 }




 if ((VAR_11->conflictTab[VAR_8] & VAR_14->waitMask) != 0)
  VAR_17 = 1;

 FUNC_4(VAR_16);

 return VAR_17;
}
