
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int TransactionId ;
struct TYPE_12__ {int xmin; } ;
struct TYPE_9__ {int includes_all_transactions; } ;
struct TYPE_11__ {scalar_t__ state; TYPE_1__ committed; } ;
struct TYPE_10__ {int xcnt; int * xip; int snapshot_type; int xmax; int xmin; } ;
typedef TYPE_2__* Snapshot ;
typedef TYPE_3__ SnapBuild ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int VAR_3 ;
 TYPE_8__* VAR_4 ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 TYPE_2__* FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 void* FUNC_10 (int *,int *,int,int,int ) ;
 int FUNC_11 (int ,char*) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (char*) ;
 scalar_t__ FUNC_15 (int) ;
 int VAR_10 ;

Snapshot
FUNC_16(SnapBuild *VAR_11)
{
 Snapshot VAR_12;
 TransactionId VAR_13;
 TransactionId *VAR_14;
 int VAR_15 = 0;

 FUNC_0(!VAR_2);
 FUNC_0(VAR_9 == VAR_8);

 if (VAR_11->state != VAR_6)
  FUNC_11(VAR_1, "cannot build an initial slot snapshot before reaching a consistent state");

 if (!VAR_11->committed.includes_all_transactions)
  FUNC_11(VAR_1, "cannot build an initial slot snapshot, not all transactions are monitored anymore");


 if (FUNC_8(VAR_4->xmin))
  FUNC_11(VAR_1, "cannot build an initial slot snapshot when MyPgXact->xmin already is valid");

 VAR_12 = FUNC_6(VAR_11);
 VAR_4->xmin = VAR_12->xmin;


 VAR_14 = (TransactionId *)
  FUNC_15(sizeof(TransactionId) * FUNC_1());







 for (VAR_13 = VAR_12->xmin; FUNC_5(VAR_13, VAR_12->xmax);)
 {
  void *VAR_16;





  VAR_16 = FUNC_10(&VAR_13, VAR_12->xip, VAR_12->xcnt,
        sizeof(TransactionId), VAR_10);

  if (VAR_16 == ((void*)0))
  {
   if (VAR_15 >= FUNC_1())
    FUNC_12(VAR_1,
      (FUNC_13(VAR_0),
       FUNC_14("initial slot snapshot too large")));

   VAR_14[VAR_15++] = VAR_13;
  }

  FUNC_7(VAR_13);
 }


 VAR_12->snapshot_type = VAR_7;
 VAR_12->xcnt = VAR_15;
 VAR_12->xip = VAR_14;

 return VAR_12;
}
