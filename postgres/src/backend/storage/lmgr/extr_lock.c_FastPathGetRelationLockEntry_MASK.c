
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef size_t uint32 ;
struct TYPE_24__ {scalar_t__* fpRelId; int backendLock; } ;
struct TYPE_22__ {scalar_t__ locktag_field2; } ;
struct TYPE_18__ {size_t mode; TYPE_5__ lock; } ;
struct TYPE_23__ {size_t hashcode; TYPE_1__ tag; } ;
struct TYPE_19__ {int myLock; } ;
struct TYPE_21__ {TYPE_2__ tag; } ;
struct TYPE_20__ {TYPE_8__* myProc; int * myLock; } ;
typedef TYPE_3__ PROCLOCKTAG ;
typedef TYPE_4__ PROCLOCK ;
typedef scalar_t__ Oid ;
typedef int LockMethod ;
typedef int LWLock ;
typedef TYPE_5__ LOCKTAG ;
typedef int LOCK ;
typedef TYPE_6__ LOCALLOCK ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_8__*,size_t,size_t) ;
 int FUNC_1 (TYPE_8__*,size_t,size_t) ;
 scalar_t__ FUNC_2 (TYPE_8__*,size_t) ;
 size_t VAR_3 ;
 int FUNC_3 (int ,TYPE_4__*,size_t) ;
 int VAR_4 ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_6 (size_t) ;
 int VAR_7 ;
 int VAR_8 ;
 int * VAR_9 ;
 TYPE_8__* VAR_10 ;
 size_t FUNC_7 (TYPE_3__*,size_t) ;
 TYPE_4__* FUNC_8 (int ,TYPE_8__*,TYPE_5__*,size_t,size_t) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*) ;
 scalar_t__ FUNC_14 (int ,void*,size_t,int ,int *) ;

__attribute__((used)) static PROCLOCK *
FUNC_15(LOCALLOCK *VAR_11)
{
 LockMethod VAR_12 = VAR_9[VAR_0];
 LOCKTAG *VAR_13 = &VAR_11->tag.lock;
 PROCLOCK *VAR_14 = ((void*)0);
 LWLock *VAR_15 = FUNC_6(VAR_11->hashcode);
 Oid VAR_16 = VAR_13->locktag_field2;
 uint32 VAR_17;

 FUNC_4(&VAR_10->backendLock, VAR_5);

 for (VAR_17 = 0; VAR_17 < VAR_3; VAR_17++)
 {
  uint32 VAR_18;


  if (VAR_16 != VAR_10->fpRelId[VAR_17] || FUNC_2(VAR_10, VAR_17) == 0)
   continue;


  VAR_18 = VAR_11->tag.mode;
  if (!FUNC_0(VAR_10, VAR_17, VAR_18))
   break;


  FUNC_4(VAR_15, VAR_5);

  VAR_14 = FUNC_8(VAR_12, VAR_10, VAR_13,
         VAR_11->hashcode, VAR_18);
  if (!VAR_14)
  {
   FUNC_5(VAR_15);
   FUNC_5(&VAR_10->backendLock);
   FUNC_10(VAR_2,
     (FUNC_11(VAR_1),
      FUNC_13("out of shared memory"),
      FUNC_12("You might need to increase max_locks_per_transaction.")));
  }
  FUNC_3(VAR_14->tag.myLock, VAR_14, VAR_18);
  FUNC_1(VAR_10, VAR_17, VAR_18);

  FUNC_5(VAR_15);


  break;
 }

 FUNC_5(&VAR_10->backendLock);


 if (VAR_14 == ((void*)0))
 {
  LOCK *VAR_19;
  PROCLOCKTAG VAR_20;
  uint32 VAR_21;

  FUNC_4(VAR_15, VAR_6);

  VAR_19 = (LOCK *) FUNC_14(VAR_7,
             (void *) VAR_13,
             VAR_11->hashcode,
             VAR_4,
             ((void*)0));
  if (!VAR_19)
   FUNC_9(VAR_2, "failed to re-find shared lock object");

  VAR_20.myLock = VAR_19;
  VAR_20.myProc = VAR_10;

  VAR_21 = FUNC_7(&VAR_20, VAR_11->hashcode);
  VAR_14 = (PROCLOCK *)
   FUNC_14(VAR_8,
          (void *) &VAR_20,
          VAR_21,
          VAR_4,
          ((void*)0));
  if (!VAR_14)
   FUNC_9(VAR_2, "failed to re-find shared proclock object");
  FUNC_5(VAR_15);
 }

 return VAR_14;
}
