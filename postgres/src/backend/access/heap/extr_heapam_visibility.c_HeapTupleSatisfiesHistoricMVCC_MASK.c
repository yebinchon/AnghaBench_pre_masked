
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int TransactionId ;
struct TYPE_16__ {scalar_t__ t_tableOid; int t_self; TYPE_2__* t_data; } ;
struct TYPE_15__ {int t_infomask; } ;
struct TYPE_14__ {scalar_t__ curcid; int xcnt; int xip; int xmax; int xmin; int subxcnt; int subxip; } ;
typedef TYPE_1__* Snapshot ;
typedef TYPE_2__* HeapTupleHeader ;
typedef TYPE_3__* HeapTuple ;
typedef scalar_t__ CommandId ;
typedef int Buffer ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;
 int FUNC_8 () ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,TYPE_1__*,TYPE_3__*,int ,scalar_t__*,scalar_t__*) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ,int ) ;
 scalar_t__ FUNC_13 (int ,int ,int ) ;
 scalar_t__ FUNC_14 (int ,int ) ;
 int FUNC_15 (int ,char*) ;

__attribute__((used)) static bool
FUNC_16(HeapTuple VAR_6, Snapshot VAR_7,
          Buffer VAR_8)
{
 HeapTupleHeader VAR_9 = VAR_6->t_data;
 TransactionId VAR_10 = FUNC_5(VAR_9);
 TransactionId VAR_11 = FUNC_4(VAR_9);

 FUNC_0(FUNC_9(&VAR_6->t_self));
 FUNC_0(VAR_6->t_tableOid != VAR_5);


 if (FUNC_7(VAR_9))
 {
  FUNC_0(!FUNC_11(VAR_10));
  return 0;
 }

 else if (FUNC_13(VAR_10, VAR_7->subxip, VAR_7->subxcnt))
 {
  bool VAR_12;
  CommandId VAR_13 = FUNC_3(VAR_9);
  CommandId VAR_14 = VAR_4;






  VAR_12 = FUNC_10(FUNC_8(), VAR_7,
             VAR_6, VAR_8,
             &VAR_13, &VAR_14);

  if (!VAR_12)
   FUNC_15(VAR_0, "could not resolve cmin/cmax of catalog tuple");

  FUNC_0(VAR_13 != VAR_4);

  if (VAR_13 >= VAR_7->curcid)
   return 0;

 }

 else if (FUNC_14(VAR_10, VAR_7->xmin))
 {
  FUNC_0(!(FUNC_6(VAR_9) &&
     !FUNC_11(VAR_10)));


  if (!FUNC_6(VAR_9) &&
   !FUNC_11(VAR_10))
   return 0;

 }

 else if (FUNC_12(VAR_10, VAR_7->xmax))
 {
  return 0;
 }

 else if (FUNC_13(VAR_10, VAR_7->xip, VAR_7->xcnt))
 {

 }





 else
 {
  return 0;
 }




 if (VAR_9->t_infomask & VAR_2)
  return 1;

 else if (FUNC_1(VAR_9->t_infomask))
  return 1;





 else if (VAR_9->t_infomask & VAR_3)
 {
  VAR_11 = FUNC_2(VAR_9);
 }


 if (FUNC_13(VAR_11, VAR_7->subxip, VAR_7->subxcnt))
 {
  bool VAR_15;
  CommandId VAR_16;
  CommandId VAR_17 = FUNC_3(VAR_9);


  VAR_15 = FUNC_10(FUNC_8(), VAR_7,
             VAR_6, VAR_8,
             &VAR_16, &VAR_17);

  if (!VAR_15)
   FUNC_15(VAR_0, "could not resolve combocid to cmax");

  FUNC_0(VAR_17 != VAR_4);

  if (VAR_17 >= VAR_7->curcid)
   return 1;
  else
   return 0;
 }

 else if (FUNC_14(VAR_11, VAR_7->xmin))
 {
  FUNC_0(!(VAR_9->t_infomask & VAR_1 &&
     !FUNC_11(VAR_11)));


  if (VAR_9->t_infomask & VAR_1)
   return 0;


  return !FUNC_11(VAR_11);
 }

 else if (FUNC_12(VAR_11, VAR_7->xmax))
  return 1;

 else if (FUNC_13(VAR_11, VAR_7->xip, VAR_7->xcnt))
  return 0;

 else
  return 1;
}
