
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int TransactionId ;
struct TYPE_8__ {int nextFullXid; } ;
struct TYPE_7__ {int xid; } ;
struct TYPE_6__ {int numProcs; int* pgprocnos; int replication_slot_catalog_xmin; int replication_slot_xmin; } ;
typedef TYPE_1__ ProcArrayStruct ;
typedef TYPE_2__ PGXACT ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 () ;
 TYPE_5__* VAR_2 ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 TYPE_1__* VAR_5 ;

TransactionId
FUNC_10(bool VAR_6)
{
 ProcArrayStruct *VAR_7 = VAR_5;
 TransactionId VAR_8;
 int VAR_9;
 bool VAR_10 = FUNC_4();

 FUNC_0(FUNC_2(VAR_1));
 FUNC_1(VAR_3, VAR_0);
 VAR_8 = FUNC_9(VAR_2->nextFullXid);
 if (FUNC_6(VAR_5->replication_slot_xmin) &&
  FUNC_7(VAR_5->replication_slot_xmin,
         VAR_8))
  VAR_8 = VAR_5->replication_slot_xmin;

 if (VAR_6 &&
  FUNC_6(VAR_5->replication_slot_catalog_xmin) &&
  FUNC_7(VAR_5->replication_slot_catalog_xmin,
         VAR_8))
  VAR_8 = VAR_5->replication_slot_catalog_xmin;
 if (!VAR_10)
 {



  for (VAR_9 = 0; VAR_9 < VAR_7->numProcs; VAR_9++)
  {
   int VAR_11 = VAR_7->pgprocnos[VAR_9];
   PGXACT *VAR_12 = &VAR_4[VAR_11];
   TransactionId VAR_13;


   VAR_13 = FUNC_8(VAR_12->xid);

   if (!FUNC_5(VAR_13))
    continue;

   if (FUNC_7(VAR_13, VAR_8))
    VAR_8 = VAR_13;
  }
 }

 FUNC_3(VAR_3);

 return VAR_8;
}
