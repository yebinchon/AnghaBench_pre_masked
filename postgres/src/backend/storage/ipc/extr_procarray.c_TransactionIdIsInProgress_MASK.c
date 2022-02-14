
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int TransactionId ;
struct TYPE_14__ {int latestCompletedXid; } ;
struct TYPE_10__ {int * xids; } ;
struct TYPE_13__ {TYPE_1__ subxids; } ;
struct TYPE_12__ {int nxids; scalar_t__ overflowed; int xid; } ;
struct TYPE_11__ {int maxProcs; int numProcs; int* pgprocnos; int lastOverflowedXid; } ;
typedef TYPE_2__ ProcArrayStruct ;
typedef TYPE_3__ PGXACT ;
typedef TYPE_4__ PGPROC ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 TYPE_4__* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_5 () ;
 TYPE_8__* VAR_6 ;
 int FUNC_6 (int ) ;
 int VAR_7 ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ,int ) ;
 scalar_t__ FUNC_13 (int ,int ) ;
 int FUNC_14 (int ) ;
 TYPE_3__* VAR_8 ;
 TYPE_4__* VAR_9 ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (char*) ;
 scalar_t__ FUNC_18 (int) ;
 int FUNC_19 () ;
 TYPE_2__* VAR_10 ;
 int FUNC_20 () ;
 int FUNC_21 () ;
 int FUNC_22 () ;
 int FUNC_23 () ;
 int FUNC_24 () ;
 int FUNC_25 () ;
 int FUNC_26 () ;
 int FUNC_27 () ;
 int FUNC_28 () ;

bool
FUNC_29(TransactionId VAR_11)
{
 static TransactionId *VAR_12 = ((void*)0);
 int VAR_13 = 0;
 ProcArrayStruct *VAR_14 = VAR_10;
 TransactionId VAR_15;
 int VAR_16,
    VAR_17;







 if (FUNC_12(VAR_11, VAR_5))
 {
  FUNC_26();
  return 0;
 }






 if (FUNC_10(VAR_11))
 {
  FUNC_22();
  return 0;
 }





 if (FUNC_9(VAR_11))
 {
  FUNC_25();
  return 1;
 }





 if (VAR_12 == ((void*)0))
 {





  int VAR_18 = FUNC_5() ? VAR_7 : VAR_14->maxProcs;

  VAR_12 = (TransactionId *) FUNC_18(VAR_18 * sizeof(TransactionId));
  if (VAR_12 == ((void*)0))
   FUNC_15(VAR_1,
     (FUNC_16(VAR_0),
      FUNC_17("out of memory")));
 }

 FUNC_3(VAR_4, VAR_2);





 if (FUNC_12(VAR_6->latestCompletedXid, VAR_11))
 {
  FUNC_4(VAR_4);
  FUNC_23();
  return 1;
 }


 for (VAR_16 = 0; VAR_16 < VAR_14->numProcs; VAR_16++)
 {
  int VAR_19 = VAR_14->pgprocnos[VAR_16];
  PGPROC *VAR_20 = &VAR_9[VAR_19];
  PGXACT *VAR_21 = &VAR_8[VAR_19];
  TransactionId VAR_22;
  int VAR_23;


  if (VAR_20 == VAR_3)
   continue;


  VAR_22 = FUNC_14(VAR_21->xid);

  if (!FUNC_11(VAR_22))
   continue;




  if (FUNC_8(VAR_22, VAR_11))
  {
   FUNC_4(VAR_4);
   FUNC_24();
   return 1;
  }





  if (FUNC_12(VAR_11, VAR_22))
   continue;




  VAR_23 = VAR_21->nxids;
  FUNC_19();
  for (VAR_17 = VAR_23 - 1; VAR_17 >= 0; VAR_17--)
  {

   TransactionId VAR_24 = FUNC_14(VAR_20->subxids.xids[VAR_17]);

   if (FUNC_8(VAR_24, VAR_11))
   {
    FUNC_4(VAR_4);
    FUNC_20();
    return 1;
   }
  }
  if (VAR_21->overflowed)
   VAR_12[VAR_13++] = VAR_22;
 }





 if (FUNC_5())
 {

  FUNC_0(VAR_13 == 0);

  if (FUNC_1(VAR_11))
  {
   FUNC_4(VAR_4);
   FUNC_21();
   return 1;
  }
  if (FUNC_13(VAR_11, VAR_10->lastOverflowedXid))
   VAR_13 = FUNC_2(VAR_12, VAR_11);
 }

 FUNC_4(VAR_4);





 if (VAR_13 == 0)
 {
  FUNC_27();
  return 0;
 }
 FUNC_28();

 if (FUNC_7(VAR_11))
  return 0;






 VAR_15 = FUNC_6(VAR_11);
 FUNC_0(FUNC_11(VAR_15));
 if (!FUNC_8(VAR_15, VAR_11))
 {
  for (VAR_16 = 0; VAR_16 < VAR_13; VAR_16++)
  {
   if (FUNC_8(VAR_12[VAR_16], VAR_15))
    return 1;
  }
 }

 return 0;
}
