
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int TransactionId ;
struct TYPE_18__ {int t_self; void* t_len; TYPE_2__* t_data; int t_tableOid; } ;
struct TYPE_17__ {int t_ctid; } ;
struct TYPE_16__ {int latestRemovedXid; scalar_t__* marked; } ;
typedef int Relation ;
typedef TYPE_1__ PruneState ;
typedef int Page ;
typedef size_t OffsetNumber ;
typedef int ItemId ;
typedef TYPE_2__* HeapTupleHeader ;
typedef TYPE_3__ HeapTupleData ;
typedef int Buffer ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 size_t VAR_1 ;





 int FUNC_3 (TYPE_2__*,int *) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_3__*,int ,int ) ;
 size_t VAR_2 ;
 int VAR_3 ;
 void* FUNC_10 (int ) ;
 size_t FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 scalar_t__ FUNC_16 (int *) ;
 size_t FUNC_17 (int *) ;
 int FUNC_18 (int *,scalar_t__,size_t) ;
 int VAR_4 ;
 scalar_t__ FUNC_19 (size_t) ;
 scalar_t__ FUNC_20 (int ,int ) ;
 int FUNC_21 (int ,size_t) ;
 size_t FUNC_22 (int ) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int ,int ) ;
 scalar_t__ FUNC_25 (int ) ;
 int FUNC_26 (int ,char*) ;
 int FUNC_27 (TYPE_1__*,size_t) ;
 int FUNC_28 (TYPE_1__*,int ) ;
 int FUNC_29 (TYPE_1__*,size_t,size_t) ;
 int FUNC_30 (TYPE_1__*,size_t) ;

__attribute__((used)) static int
FUNC_31(Relation VAR_5, Buffer VAR_6, OffsetNumber VAR_7,
     TransactionId VAR_8,
     PruneState *VAR_9)
{
 int VAR_10 = 0;
 Page VAR_11 = (Page) FUNC_2(VAR_6);
 TransactionId VAR_12 = VAR_3;
 ItemId VAR_13;
 HeapTupleHeader VAR_14;
 OffsetNumber VAR_15 = VAR_2,
    VAR_16 = FUNC_22(VAR_11),
    VAR_17;
 OffsetNumber VAR_18[VAR_4];
 int VAR_19 = 0,
    VAR_20;
 HeapTupleData VAR_21;

 VAR_21.t_tableOid = FUNC_23(VAR_5);

 VAR_13 = FUNC_21(VAR_11, VAR_7);




 if (FUNC_13(VAR_13))
 {
  VAR_14 = (HeapTupleHeader) FUNC_20(VAR_11, VAR_13);

  VAR_21.t_data = VAR_14;
  VAR_21.t_len = FUNC_10(VAR_13);
  FUNC_18(&(VAR_21.t_self), FUNC_1(VAR_6), VAR_7);

  if (FUNC_7(VAR_14))
  {
   if (FUNC_9(&VAR_21, VAR_8, VAR_6)
    == 132 && !FUNC_8(VAR_14))
   {
    FUNC_30(VAR_9, VAR_7);
    FUNC_3(VAR_14,
                &VAR_9->latestRemovedXid);
    VAR_10++;
   }


   return VAR_10;
  }
 }


 VAR_17 = VAR_7;


 for (;;)
 {
  ItemId VAR_22;
  bool VAR_23,
     VAR_24;


  if (VAR_17 < VAR_1 || VAR_17 > VAR_16)
   break;


  if (VAR_9->marked[VAR_17])
   break;

  VAR_22 = FUNC_21(VAR_11, VAR_17);


  if (!FUNC_15(VAR_22))
   break;






  if (FUNC_14(VAR_22))
  {
   if (VAR_19 > 0)
    break;
   VAR_18[VAR_19++] = VAR_17;
   VAR_17 = FUNC_11(VAR_13);
   continue;
  }






  if (FUNC_12(VAR_22))
   break;

  FUNC_0(FUNC_13(VAR_22));
  VAR_14 = (HeapTupleHeader) FUNC_20(VAR_11, VAR_22);

  VAR_21.t_data = VAR_14;
  VAR_21.t_len = FUNC_10(VAR_22);
  FUNC_18(&(VAR_21.t_self), FUNC_1(VAR_6), VAR_17);




  if (FUNC_25(VAR_12) &&
   !FUNC_24(FUNC_5(VAR_14), VAR_12))
   break;




  VAR_18[VAR_19++] = VAR_17;




  VAR_23 = VAR_24 = 0;

  switch (FUNC_9(&VAR_21, VAR_8, VAR_6))
  {
   case 132:
    VAR_23 = 1;
    break;

   case 128:
    VAR_24 = 1;





    FUNC_28(VAR_9,
             FUNC_4(VAR_14));
    break;

   case 131:





    FUNC_28(VAR_9,
             FUNC_4(VAR_14));
    break;

   case 129:
   case 130:







    break;

   default:
    FUNC_26(VAR_0, "unexpected HeapTupleSatisfiesVacuum result");
    break;
  }
  if (VAR_23)
  {
   VAR_15 = VAR_17;
   FUNC_3(VAR_14,
               &VAR_9->latestRemovedXid);
  }
  else if (!VAR_24)
   break;





  if (!FUNC_8(VAR_14))
   break;


  FUNC_0(!FUNC_6(VAR_14));




  FUNC_0(FUNC_16(&VAR_14->t_ctid) ==
      FUNC_1(VAR_6));
  VAR_17 = FUNC_17(&VAR_14->t_ctid);
  VAR_12 = FUNC_4(VAR_14);
 }






 if (FUNC_19(VAR_15))
 {







  for (VAR_20 = 1; (VAR_20 < VAR_19) && (VAR_18[VAR_20 - 1] != VAR_15); VAR_20++)
  {
   FUNC_30(VAR_9, VAR_18[VAR_20]);
   VAR_10++;
  }






  if (FUNC_13(VAR_13))
   VAR_10++;






  if (VAR_20 >= VAR_19)
   FUNC_27(VAR_9, VAR_7);
  else
   FUNC_29(VAR_9, VAR_7, VAR_18[VAR_20]);
 }
 else if (VAR_19 < 2 && FUNC_14(VAR_13))
 {







  FUNC_27(VAR_9, VAR_7);
 }

 return VAR_10;
}
