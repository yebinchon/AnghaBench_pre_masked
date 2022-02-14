
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_9__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef size_t uint32 ;
struct TYPE_15__ {scalar_t__* count; int mutex; } ;
struct TYPE_14__ {int * lockModeNames; } ;
struct TYPE_13__ {int holdMask; } ;
struct TYPE_12__ {int * myProc; int * myLock; } ;
typedef TYPE_1__ PROCLOCKTAG ;
typedef TYPE_2__ PROCLOCK ;
typedef int PGPROC ;
typedef TYPE_3__* LockMethod ;
typedef int LWLock ;
typedef int LOCKTAG ;
typedef size_t LOCKMODE ;
typedef int LOCK ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,TYPE_2__*,TYPE_3__*,size_t,int) ;
 scalar_t__ FUNC_2 (int *,size_t) ;
 size_t FUNC_3 (size_t) ;
 TYPE_9__* VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (size_t) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int VAR_2 ;
 int * FUNC_7 (size_t) ;
 int VAR_3 ;
 int VAR_4 ;
 size_t FUNC_8 (int *) ;
 int VAR_5 ;
 int FUNC_9 (char*,TYPE_2__*) ;
 size_t FUNC_10 (TYPE_1__*,size_t) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,size_t,TYPE_2__*,TYPE_3__*) ;
 int VAR_6 ;
 int FUNC_14 (int ,char*,...) ;
 scalar_t__ FUNC_15 (int ,void*,size_t,int ,int *) ;

__attribute__((used)) static void
FUNC_16(LockMethod VAR_7, PGPROC *VAR_8,
      LOCKTAG *VAR_9, LOCKMODE VAR_10,
      bool VAR_11)
{
 LOCK *VAR_12;
 PROCLOCK *VAR_13;
 PROCLOCKTAG VAR_14;
 uint32 VAR_15;
 uint32 VAR_16;
 LWLock *VAR_17;
 bool VAR_18;

 VAR_15 = FUNC_8(VAR_9);
 VAR_17 = FUNC_7(VAR_15);

 FUNC_5(VAR_17, VAR_2);




 VAR_12 = (LOCK *) FUNC_15(VAR_3,
            (void *) VAR_9,
            VAR_15,
            VAR_1,
            ((void*)0));
 if (!VAR_12)
  FUNC_14(VAR_5, "failed to re-find shared lock object");




 VAR_14.myLock = VAR_12;
 VAR_14.myProc = VAR_8;

 VAR_16 = FUNC_10(&VAR_14, VAR_15);

 VAR_13 = (PROCLOCK *) FUNC_15(VAR_4,
              (void *) &VAR_14,
              VAR_16,
              VAR_1,
              ((void*)0));
 if (!VAR_13)
  FUNC_14(VAR_5, "failed to re-find shared proclock object");





 if (!(VAR_13->holdMask & FUNC_4(VAR_10)))
 {
  FUNC_9("lock_twophase_postcommit: WRONGTYPE", VAR_13);
  FUNC_6(VAR_17);
  FUNC_14(VAR_6, "you don't own a lock of type %s",
    VAR_7->lockModeNames[VAR_10]);
  return;
 }




 VAR_18 = FUNC_13(VAR_12, VAR_10, VAR_13, VAR_7);

 FUNC_1(VAR_12, VAR_13,
    VAR_7, VAR_15,
    VAR_18);

 FUNC_6(VAR_17);




 if (VAR_11
  && FUNC_2(VAR_9, VAR_10))
 {
  uint32 VAR_19 = FUNC_3(VAR_15);

  FUNC_11(&VAR_0->mutex);
  FUNC_0(VAR_0->count[VAR_19] > 0);
  VAR_0->count[VAR_19]--;
  FUNC_12(&VAR_0->mutex);
 }
}
