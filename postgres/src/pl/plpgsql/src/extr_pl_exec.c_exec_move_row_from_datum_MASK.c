
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_5__ ;
typedef struct TYPE_33__ TYPE_4__ ;
typedef struct TYPE_32__ TYPE_3__ ;
typedef struct TYPE_31__ TYPE_2__ ;
typedef struct TYPE_30__ TYPE_1__ ;


typedef scalar_t__ int32 ;
typedef int TupleDesc ;
struct TYPE_34__ {scalar_t__ er_magic; scalar_t__ er_decltypeid; int flags; scalar_t__ er_typeid; scalar_t__ er_typmod; int dnulls; int dvalues; TYPE_4__* fvalue; } ;
struct TYPE_33__ {int t_data; int t_tableOid; int t_self; int t_len; } ;
struct TYPE_32__ {int atomic; } ;
struct TYPE_31__ {scalar_t__ rectypeid; TYPE_5__* erh; } ;
struct TYPE_30__ {scalar_t__ dtype; } ;
typedef TYPE_1__ PLpgSQL_variable ;
typedef TYPE_2__ PLpgSQL_rec ;
typedef TYPE_3__ PLpgSQL_execstate ;
typedef scalar_t__ Oid ;
typedef int MemoryContext ;
typedef int HeapTupleHeader ;
typedef TYPE_4__ HeapTupleData ;
typedef TYPE_5__ ExpandedRecordHeader ;
typedef int Datum ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (TYPE_5__*) ;
 scalar_t__ FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int VAR_2 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (TYPE_3__*,TYPE_2__*,TYPE_5__*) ;
 int FUNC_15 (TYPE_5__*) ;
 int FUNC_16 (TYPE_3__*,TYPE_1__*,TYPE_4__*,int ) ;
 int FUNC_17 (TYPE_3__*,TYPE_1__*,TYPE_5__*,int ,int ,int ) ;
 int FUNC_18 (TYPE_5__*) ;
 int FUNC_19 (TYPE_5__*,TYPE_4__*,int,int) ;
 int FUNC_20 (TYPE_3__*) ;
 int FUNC_21 (scalar_t__,scalar_t__) ;
 TYPE_5__* FUNC_22 (TYPE_3__*,TYPE_2__*,int *,TYPE_5__*) ;
 TYPE_5__* FUNC_23 (scalar_t__,scalar_t__,int ) ;
 int FUNC_24 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_25(PLpgSQL_execstate *VAR_5,
       PLpgSQL_variable *VAR_6,
       Datum VAR_7)
{

 if (FUNC_12(FUNC_3(VAR_7)))
 {
  ExpandedRecordHeader *VAR_8 = (ExpandedRecordHeader *) FUNC_1(VAR_7);
  ExpandedRecordHeader *VAR_9 = ((void*)0);

  FUNC_0(VAR_8->er_magic == VAR_1);


  if (VAR_6->dtype == VAR_3)
  {
   PLpgSQL_rec *VAR_10 = (PLpgSQL_rec *) VAR_6;
   if (VAR_8 == VAR_10->erh)
    return;




   FUNC_24(VAR_10);
   if (FUNC_13(FUNC_3(VAR_7)) &&
    (VAR_10->rectypeid == VAR_8->er_decltypeid ||
     (VAR_10->rectypeid == VAR_4 &&
      !FUNC_4(VAR_8))))
   {
    FUNC_14(VAR_5, VAR_10, VAR_8);
    return;
   }
   if (VAR_10->erh &&
    (VAR_8->flags & VAR_0) &&
    VAR_8->er_typeid == VAR_10->erh->er_typeid &&
    (VAR_8->er_typeid != VAR_4 ||
     (VAR_8->er_typmod == VAR_10->erh->er_typmod &&
      VAR_8->er_typmod >= 0)))
   {
    FUNC_19(VAR_10->erh, VAR_8->fvalue,
            1, !VAR_5->atomic);
    return;
   }






   VAR_9 = FUNC_22(VAR_5, VAR_10, ((void*)0), VAR_8);
   if ((VAR_8->flags & VAR_0) &&
    (VAR_10->rectypeid == VAR_4 ||
     VAR_10->rectypeid == VAR_8->er_typeid))
   {
    FUNC_19(VAR_9, VAR_8->fvalue,
            1, !VAR_5->atomic);
    FUNC_14(VAR_5, VAR_10, VAR_9);
    return;
   }





   if (FUNC_5(VAR_8))
   {

    FUNC_15(VAR_9);
    FUNC_14(VAR_5, VAR_10, VAR_9);
    return;
   }
  }







  if (FUNC_5(VAR_8))
  {
   FUNC_16(VAR_5, VAR_6, ((void*)0),
        FUNC_18(VAR_8));
   return;
  }





  FUNC_15(VAR_8);
  FUNC_17(VAR_5, VAR_6, VAR_9,
          VAR_8->dvalues, VAR_8->dnulls,
          FUNC_18(VAR_8));
 }
 else
 {





  HeapTupleHeader VAR_11;
  HeapTupleData VAR_12;
  Oid VAR_13;
  int32 VAR_14;
  TupleDesc VAR_15;
  MemoryContext VAR_16;


  VAR_16 = FUNC_10(FUNC_20(VAR_5));

  VAR_11 = FUNC_2(VAR_7);
  FUNC_10(VAR_16);


  VAR_12.t_len = FUNC_6(VAR_11);
  FUNC_9(&(VAR_12.t_self));
  VAR_12.t_tableOid = VAR_2;
  VAR_12.t_data = VAR_11;


  VAR_13 = FUNC_8(VAR_11);
  VAR_14 = FUNC_7(VAR_11);


  if (VAR_6->dtype == VAR_3)
  {
   PLpgSQL_rec *VAR_17 = (PLpgSQL_rec *) VAR_6;
   if (VAR_17->erh &&
    VAR_13 == VAR_17->erh->er_typeid &&
    (VAR_13 != VAR_4 ||
     (VAR_14 == VAR_17->erh->er_typmod &&
      VAR_14 >= 0)))
   {
    FUNC_19(VAR_17->erh, &VAR_12,
            1, !VAR_5->atomic);
    return;
   }







   if (VAR_17->rectypeid == VAR_4 || VAR_17->rectypeid == VAR_13)
   {
    ExpandedRecordHeader *VAR_18;
    MemoryContext VAR_19 = FUNC_20(VAR_5);

    VAR_18 = FUNC_23(VAR_13, VAR_14,
                VAR_19);
    FUNC_19(VAR_18, &VAR_12,
            1, !VAR_5->atomic);
    FUNC_14(VAR_5, VAR_17, VAR_18);
    return;
   }





  }





  VAR_15 = FUNC_21(VAR_13, VAR_14);


  FUNC_16(VAR_5, VAR_6, &VAR_12, VAR_15);


  FUNC_11(VAR_15);
 }
}
