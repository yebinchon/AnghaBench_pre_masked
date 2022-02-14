
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_9__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int TransactionId ;
struct TYPE_17__ {int latestCompletedXid; } ;
struct TYPE_16__ {scalar_t__ databaseId; } ;
struct TYPE_15__ {int vacuumFlags; int xmin; int xid; } ;
struct TYPE_14__ {int numProcs; int* pgprocnos; int replication_slot_catalog_xmin; int replication_slot_xmin; } ;
struct TYPE_13__ {TYPE_1__* rd_rel; } ;
struct TYPE_12__ {scalar_t__ relisshared; } ;
typedef TYPE_2__* Relation ;
typedef TYPE_3__ ProcArrayStruct ;
typedef TYPE_4__ PGXACT ;
typedef TYPE_5__ PGPROC ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 TYPE_9__* VAR_7 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ,int ) ;
 int FUNC_11 (int ) ;
 TYPE_4__* VAR_8 ;
 TYPE_5__* VAR_9 ;
 TYPE_3__* VAR_10 ;
 scalar_t__ VAR_11 ;

TransactionId
FUNC_12(Relation VAR_12, int VAR_13)
{
 ProcArrayStruct *VAR_14 = VAR_10;
 TransactionId VAR_15;
 int VAR_16;
 bool VAR_17;

 TransactionId VAR_18 = VAR_1;
 TransactionId VAR_19 = VAR_1;






 VAR_17 = VAR_12 == ((void*)0) || VAR_12->rd_rel->relisshared;


 FUNC_0(VAR_17 || !FUNC_5());

 FUNC_2(VAR_6, VAR_2);







 VAR_15 = VAR_7->latestCompletedXid;
 FUNC_0(FUNC_8(VAR_15));
 FUNC_7(VAR_15);

 for (VAR_16 = 0; VAR_16 < VAR_14->numProcs; VAR_16++)
 {
  int VAR_20 = VAR_14->pgprocnos[VAR_16];
  PGPROC *VAR_21 = &VAR_9[VAR_20];
  PGXACT *VAR_22 = &VAR_8[VAR_20];

  if (VAR_22->vacuumFlags & (VAR_13 & VAR_4))
   continue;

  if (VAR_17 ||
   VAR_21->databaseId == VAR_3 ||
   VAR_21->databaseId == 0)
  {

   TransactionId VAR_23 = FUNC_11(VAR_22->xid);


   if (FUNC_8(VAR_23) &&
    FUNC_10(VAR_23, VAR_15))
    VAR_15 = VAR_23;
   VAR_23 = FUNC_11(VAR_22->xmin);
   if (FUNC_8(VAR_23) &&
    FUNC_10(VAR_23, VAR_15))
    VAR_15 = VAR_23;
  }
 }






 VAR_18 = VAR_10->replication_slot_xmin;
 VAR_19 = VAR_10->replication_slot_catalog_xmin;

 if (FUNC_5())
 {




  TransactionId VAR_24 = FUNC_1();

  FUNC_3(VAR_6);

  if (FUNC_8(VAR_24) &&
   FUNC_10(VAR_24, VAR_15))
   VAR_15 = VAR_24;
 }
 else
 {



  FUNC_3(VAR_6);
  VAR_15 -= VAR_11;
  if (!FUNC_8(VAR_15))
   VAR_15 = VAR_0;
 }




 if (!(VAR_13 & VAR_5) &&
  FUNC_9(VAR_18) &&
  FUNC_4(VAR_18, VAR_15))
  VAR_15 = VAR_18;
 if (!(VAR_13 & VAR_5) &&
  (VAR_12 == ((void*)0) ||
   FUNC_6(VAR_12)) &&
  FUNC_9(VAR_19) &&
  FUNC_4(VAR_19, VAR_15))
  VAR_15 = VAR_19;

 return VAR_15;
}
