
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int VirtualTransactionId ;
typedef int TransactionId ;
struct TYPE_10__ {int xcnt; int subxcnt; int ph_node; int regd_count; int xmin; int takenDuringRecovery; int suboverflowed; int subxip; int xip; int xmax; } ;
struct TYPE_9__ {int xcnt; int subxcnt; int takenDuringRecovery; int suboverflowed; int subxip; int xip; int xmax; int xmin; } ;
typedef TYPE_1__* Snapshot ;
typedef int PGPROC ;


 int FUNC_0 (int) ;
 TYPE_3__* FUNC_1 (TYPE_3__*) ;
 TYPE_3__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_3__* VAR_5 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 TYPE_3__* FUNC_4 (int *) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 () ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (int ,int *) ;
 int VAR_6 ;
 int FUNC_11 (TYPE_3__*,int *,int) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (char*,...) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (int ,int ,int) ;
 int FUNC_17 (int *,int *) ;
 int FUNC_18 (int *) ;

__attribute__((used)) static void
FUNC_19(Snapshot VAR_7, VirtualTransactionId *VAR_8,
        int VAR_9, PGPROC *VAR_10)
{

 FUNC_0(!VAR_4);


 FUNC_6();

 FUNC_0(FUNC_18(&VAR_6));
 FUNC_0(VAR_5 == ((void*)0));
 FUNC_0(!FUNC_5());
 VAR_0 = FUNC_4(&VAR_1);




 VAR_0->xmin = VAR_7->xmin;
 VAR_0->xmax = VAR_7->xmax;
 VAR_0->xcnt = VAR_7->xcnt;
 FUNC_0(VAR_7->xcnt <= FUNC_3());
 FUNC_16(VAR_0->xip, VAR_7->xip,
     VAR_7->xcnt * sizeof(TransactionId));
 VAR_0->subxcnt = VAR_7->subxcnt;
 FUNC_0(VAR_7->subxcnt <= FUNC_2());
 FUNC_16(VAR_0->subxip, VAR_7->subxip,
     VAR_7->subxcnt * sizeof(TransactionId));
 VAR_0->suboverflowed = VAR_7->suboverflowed;
 VAR_0->takenDuringRecovery = VAR_7->takenDuringRecovery;
 if (VAR_10 != ((void*)0))
 {
  if (!FUNC_10(VAR_0->xmin, VAR_10))
   FUNC_12(VAR_3,
     (FUNC_13(VAR_2),
      FUNC_15("could not import the requested snapshot"),
      FUNC_14("The source transaction is not running anymore.")));
 }
 else if (!FUNC_9(VAR_0->xmin, VAR_8))
  FUNC_12(VAR_3,
    (FUNC_13(VAR_2),
     FUNC_15("could not import the requested snapshot"),
     FUNC_14("The source process with PID %d is not running anymore.",
         VAR_9)));






 if (FUNC_8())
 {
  if (FUNC_7())
   FUNC_11(VAR_0, VAR_8,
              VAR_9);

  VAR_0 = FUNC_1(VAR_0);
  VAR_5 = VAR_0;

  VAR_5->regd_count++;
  FUNC_17(&VAR_6, &VAR_5->ph_node);
 }

 VAR_4 = 1;
}
