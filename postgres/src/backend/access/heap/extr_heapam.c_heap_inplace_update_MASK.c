
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {void* offnum; } ;
typedef TYPE_2__ xl_heap_inplace ;
typedef scalar_t__ uint32 ;
typedef int XLogRecPtr ;
struct TYPE_10__ {scalar_t__ t_len; int t_self; TYPE_1__* t_data; } ;
struct TYPE_9__ {scalar_t__ t_hoff; } ;
struct TYPE_7__ {scalar_t__ t_hoff; } ;
typedef int Relation ;
typedef scalar_t__ Page ;
typedef scalar_t__ OffsetNumber ;
typedef int * ItemId ;
typedef TYPE_3__* HeapTupleHeader ;
typedef TYPE_4__* HeapTuple ;
typedef int Buffer ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_4__*,int *) ;
 int FUNC_2 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 void* FUNC_8 (int *) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (scalar_t__,int *) ;
 int * FUNC_12 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_13 (scalar_t__) ;
 int FUNC_14 (scalar_t__,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_15 (int ,int ) ;
 scalar_t__ FUNC_16 (int ) ;
 int FUNC_17 () ;
 int VAR_5 ;
 int FUNC_18 (int ) ;
 int VAR_6 ;
 int FUNC_19 () ;
 int FUNC_20 (int ,int ) ;
 int FUNC_21 (int ,char*,scalar_t__) ;
 int FUNC_22 (int ,int ,int ) ;
 int FUNC_23 (char*,int ) ;
 int FUNC_24 (int ,char*) ;
 int FUNC_25 (int ,int ) ;
 int FUNC_26 (int ) ;
 int FUNC_27 (char*) ;
 int FUNC_28 (char*,char*,scalar_t__) ;

void
FUNC_29(Relation VAR_7, HeapTuple VAR_8)
{
 Buffer VAR_9;
 Page VAR_10;
 OffsetNumber VAR_11;
 ItemId VAR_12 = ((void*)0);
 HeapTupleHeader VAR_13;
 uint32 VAR_14;
 uint32 VAR_15;







 if (FUNC_4())
  FUNC_25(VAR_2,
    (FUNC_26(VAR_1),
     FUNC_27("cannot update tuples during a parallel operation")));

 VAR_9 = FUNC_15(VAR_7, FUNC_7(&(VAR_8->t_self)));
 FUNC_9(VAR_9, VAR_0);
 VAR_10 = (Page) FUNC_0(VAR_9);

 VAR_11 = FUNC_8(&(VAR_8->t_self));
 if (FUNC_13(VAR_10) >= VAR_11)
  VAR_12 = FUNC_12(VAR_10, VAR_11);

 if (FUNC_13(VAR_10) < VAR_11 || !FUNC_6(VAR_12))
  FUNC_24(VAR_2, "invalid lp");

 VAR_13 = (HeapTupleHeader) FUNC_11(VAR_10, VAR_12);

 VAR_14 = FUNC_5(VAR_12) - VAR_13->t_hoff;
 VAR_15 = VAR_8->t_len - VAR_8->t_data->t_hoff;
 if (VAR_14 != VAR_15 || VAR_13->t_hoff != VAR_8->t_data->t_hoff)
  FUNC_24(VAR_2, "wrong tuple length");


 FUNC_17();

 FUNC_28((char *) VAR_13 + VAR_13->t_hoff,
     (char *) VAR_8->t_data + VAR_8->t_data->t_hoff,
     VAR_15);

 FUNC_10(VAR_9);


 if (FUNC_16(VAR_7))
 {
  xl_heap_inplace VAR_16;
  XLogRecPtr VAR_17;

  VAR_16.offnum = FUNC_8(&VAR_8->t_self);

  FUNC_19();
  FUNC_23((char *) &VAR_16, VAR_5);

  FUNC_22(0, VAR_9, VAR_3);
  FUNC_21(0, (char *) VAR_13 + VAR_13->t_hoff, VAR_15);



  VAR_17 = FUNC_20(VAR_4, VAR_6);

  FUNC_14(VAR_10, VAR_17);
 }

 FUNC_2();

 FUNC_18(VAR_9);







 if (!FUNC_3())
  FUNC_1(VAR_7, VAR_8, ((void*)0));
}
