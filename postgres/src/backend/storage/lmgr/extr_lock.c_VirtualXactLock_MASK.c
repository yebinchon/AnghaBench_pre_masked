
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_13__ {scalar_t__ backendId; scalar_t__ localTransactionId; } ;
typedef TYPE_2__ VirtualTransactionId ;
struct TYPE_15__ {scalar_t__ backendId; scalar_t__ fpLocalTransactionId; int fpVXIDLock; int backendLock; } ;
struct TYPE_12__ {int myLock; } ;
struct TYPE_14__ {TYPE_1__ tag; } ;
typedef TYPE_3__ PROCLOCK ;
typedef TYPE_4__ PGPROC ;
typedef int LWLock ;
typedef int LOCKTAG ;


 int FUNC_0 (int ) ;
 TYPE_4__* FUNC_1 (scalar_t__) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,TYPE_3__*,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int VAR_4 ;
 int FUNC_5 (int *,int ,int,int) ;
 int * FUNC_6 (int ) ;
 int * VAR_5 ;
 int FUNC_7 (int *,int ,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,TYPE_2__) ;
 TYPE_3__* FUNC_10 (int ,TYPE_4__*,int *,int ,int ) ;
 int VAR_6 ;
 int FUNC_11 (TYPE_2__) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (char*) ;

bool
FUNC_16(VirtualTransactionId VAR_7, bool VAR_8)
{
 LOCKTAG VAR_9;
 PGPROC *VAR_10;

 FUNC_0(FUNC_11(VAR_7));

 FUNC_9(VAR_9, VAR_7);
 VAR_10 = FUNC_1(VAR_7.backendId);
 if (VAR_10 == ((void*)0))
  return 1;






 FUNC_3(&VAR_10->backendLock, VAR_4);


 if (VAR_10->backendId != VAR_7.backendId
  || VAR_10->fpLocalTransactionId != VAR_7.localTransactionId)
 {
  FUNC_4(&VAR_10->backendLock);
  return 1;
 }





 if (!VAR_8)
 {
  FUNC_4(&VAR_10->backendLock);
  return 0;
 }






 if (VAR_10->fpVXIDLock)
 {
  PROCLOCK *VAR_11;
  uint32 VAR_12;
  LWLock *VAR_13;

  VAR_12 = FUNC_8(&VAR_9);

  VAR_13 = FUNC_6(VAR_12);
  FUNC_3(VAR_13, VAR_4);

  VAR_11 = FUNC_10(VAR_5[VAR_0], VAR_10,
         &VAR_9, VAR_12, VAR_3);
  if (!VAR_11)
  {
   FUNC_4(VAR_13);
   FUNC_4(&VAR_10->backendLock);
   FUNC_12(VAR_2,
     (FUNC_13(VAR_1),
      FUNC_15("out of shared memory"),
      FUNC_14("You might need to increase max_locks_per_transaction.")));
  }
  FUNC_2(VAR_11->tag.myLock, VAR_11, VAR_3);

  FUNC_4(VAR_13);

  VAR_10->fpVXIDLock = 0;
 }


 FUNC_4(&VAR_10->backendLock);


 (void) FUNC_5(&VAR_9, VAR_6, 0, 0);

 FUNC_7(&VAR_9, VAR_6, 0);
 return 1;
}
