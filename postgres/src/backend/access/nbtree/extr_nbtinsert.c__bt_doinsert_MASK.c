
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef scalar_t__ uint32 ;
typedef int TransactionId ;
struct TYPE_17__ {scalar_t__ itemsz; int bounds_valid; void* buf; TYPE_2__* itup_key; TYPE_1__* itup; } ;
struct TYPE_16__ {int * scantid; scalar_t__ heapkeyspace; int anynullkeys; } ;
struct TYPE_15__ {int t_tid; } ;
typedef int Relation ;
typedef int Page ;
typedef int OffsetNumber ;
typedef int IndexUniqueCheck ;
typedef TYPE_1__* IndexTuple ;
typedef void* Buffer ;
typedef int * BTStack ;
typedef TYPE_2__* BTScanInsert ;
typedef scalar_t__ BTPageOpaque ;
typedef TYPE_3__ BTInsertStateData ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int ,int *,void*) ;
 scalar_t__ FUNC_3 (void*) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ) ;
 void* FUNC_14 (int ,scalar_t__) ;
 scalar_t__ FUNC_15 (int ) ;
 int FUNC_16 (int ,scalar_t__) ;
 int FUNC_17 (void*) ;
 int FUNC_18 (int ,scalar_t__) ;
 scalar_t__ FUNC_19 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_20 (int ,int ,int *,int ) ;
 int FUNC_21 (int ,TYPE_3__*,int ,int ,int*,scalar_t__*) ;
 int FUNC_22 (int ,void*) ;
 scalar_t__ FUNC_23 (int ,TYPE_2__*,int ,scalar_t__) ;
 int FUNC_24 (int ,TYPE_3__*,int,int *,int ) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (int ,TYPE_2__*,void*,void*,int *,TYPE_1__*,int ,int) ;
 TYPE_2__* FUNC_27 (int ,TYPE_1__*) ;
 int FUNC_28 (int ,void*) ;
 int * FUNC_29 (int ,TYPE_2__*,void**,int ,int *) ;
 int FUNC_30 (TYPE_2__*) ;

bool
FUNC_31(Relation VAR_6, IndexTuple VAR_7,
    IndexUniqueCheck VAR_8, Relation VAR_9)
{
 bool VAR_10 = 0;
 BTInsertStateData VAR_11;
 BTScanInsert VAR_12;
 BTStack VAR_13 = ((void*)0);
 Buffer VAR_14;
 bool VAR_15;
 bool VAR_16 = (VAR_8 != VAR_4);


 VAR_12 = FUNC_27(VAR_6, VAR_7);

 if (VAR_16)
 {
  if (!VAR_12->anynullkeys)
  {

   VAR_12->scantid = ((void*)0);
  }
  else
  {
   VAR_16 = 0;

   FUNC_0(VAR_8 != VAR_3);
   VAR_10 = 1;
  }
 }





 VAR_11.itup = VAR_7;

 VAR_11.itemsz = FUNC_5(FUNC_4(VAR_7));
 VAR_11.itup_key = VAR_12;
 VAR_11.bounds_valid = 0;
 VAR_11.buf = VAR_2;
top:
 VAR_15 = 0;
 if (FUNC_15(VAR_6) != VAR_1)
 {
  Page VAR_17;
  BTPageOpaque VAR_18;







  VAR_14 = FUNC_14(VAR_6, FUNC_15(VAR_6));

  if (FUNC_3(VAR_14))
  {
   FUNC_22(VAR_6, VAR_14);

   VAR_17 = FUNC_1(VAR_14);

   VAR_18 = (BTPageOpaque) FUNC_13(VAR_17);






   if (FUNC_9(VAR_18) && FUNC_10(VAR_18) &&
    !FUNC_7(VAR_18) &&
    (FUNC_11(VAR_17) > VAR_11.itemsz) &&
    FUNC_12(VAR_17) >= FUNC_6(VAR_18) &&
    FUNC_23(VAR_6, VAR_12, VAR_17, FUNC_6(VAR_18)) > 0)
   {




    FUNC_0(!FUNC_8(VAR_18));
    VAR_15 = 1;
   }
   else
   {
    FUNC_28(VAR_6, VAR_14);






    FUNC_16(VAR_6, VAR_1);
   }
  }
  else
  {
   FUNC_17(VAR_14);





   FUNC_16(VAR_6, VAR_1);
  }
 }

 if (!VAR_15)
 {




  VAR_13 = FUNC_29(VAR_6, VAR_12, &VAR_14, VAR_0, ((void*)0));
 }

 VAR_11.buf = VAR_14;
 VAR_14 = VAR_2;
 if (VAR_16)
 {
  TransactionId VAR_19;
  uint32 VAR_20;

  VAR_19 = FUNC_21(VAR_6, &VAR_11, VAR_9, VAR_8,
         &VAR_10, &VAR_20);

  if (FUNC_19(VAR_19))
  {

   FUNC_28(VAR_6, VAR_11.buf);
   VAR_11.buf = VAR_2;






   if (VAR_20)
    FUNC_18(VAR_19, VAR_20);
   else
    FUNC_20(VAR_19, VAR_6, &VAR_7->t_tid, VAR_5);


   if (VAR_13)
    FUNC_25(VAR_13);
   goto top;
  }


  if (VAR_12->heapkeyspace)
   VAR_12->scantid = &VAR_7->t_tid;
 }

 if (VAR_8 != VAR_3)
 {
  OffsetNumber VAR_21;
  FUNC_2(VAR_6, ((void*)0), VAR_11.buf);






  VAR_21 = FUNC_24(VAR_6, &VAR_11, VAR_16,
            VAR_13, VAR_9);
  FUNC_26(VAR_6, VAR_12, VAR_11.buf, VAR_2, VAR_13,
        VAR_7, VAR_21, 0);
 }
 else
 {

  FUNC_28(VAR_6, VAR_11.buf);
 }


 if (VAR_13)
  FUNC_25(VAR_13);
 FUNC_30(VAR_12);

 return VAR_10;
}
