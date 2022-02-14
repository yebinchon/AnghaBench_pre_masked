
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ xmax; int offnum; int infobits_set; int flags; } ;
typedef TYPE_3__ xl_heap_delete ;
typedef int XLogRecPtr ;
typedef scalar_t__ TransactionId ;
struct TYPE_15__ {int t_self; TYPE_4__* t_data; int t_len; int t_tableOid; } ;
struct TYPE_11__ {scalar_t__ t_xmin; } ;
struct TYPE_12__ {TYPE_1__ t_heap; } ;
struct TYPE_14__ {int t_infomask; int t_infomask2; int t_ctid; TYPE_2__ t_choice; } ;
typedef int Relation ;
typedef int Page ;
typedef int * ItemPointer ;
typedef int ItemId ;
typedef TYPE_4__* HeapTupleHeader ;
typedef TYPE_5__ HeapTupleData ;
typedef int Buffer ;
typedef int BlockNumber ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int VAR_2 ;
 scalar_t__ FUNC_3 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (TYPE_4__*) ;
 scalar_t__ FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_4__*,int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ) ;
 scalar_t__ FUNC_16 (int ,int ) ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ,int ) ;
 int FUNC_20 (int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_21 (int ,int ) ;
 int VAR_9 ;
 int FUNC_22 (int ) ;
 scalar_t__ FUNC_23 (int ) ;
 int FUNC_24 (int ) ;
 int FUNC_25 () ;
 int VAR_10 ;
 int FUNC_26 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_27 () ;
 int FUNC_28 (int ,int ) ;
 int FUNC_29 (int ,int ,int ) ;
 int FUNC_30 (char*,int ) ;
 int FUNC_31 (int,int ) ;
 int FUNC_32 (int ,char*) ;
 int FUNC_33 (int ,TYPE_5__*,int) ;
 int FUNC_34 (int ) ;

void
FUNC_35(Relation VAR_13, ItemPointer VAR_14)
{
 TransactionId VAR_15 = FUNC_3();
 ItemId VAR_16;
 HeapTupleData VAR_17;
 Page VAR_18;
 BlockNumber VAR_19;
 Buffer VAR_20;

 FUNC_0(FUNC_13(VAR_14));

 VAR_19 = FUNC_11(VAR_14);
 VAR_20 = FUNC_21(VAR_13, VAR_19);
 VAR_18 = FUNC_1(VAR_20);

 FUNC_14(VAR_20, VAR_0);





 FUNC_0(!FUNC_18(VAR_18));

 VAR_16 = FUNC_17(VAR_18, FUNC_12(VAR_14));
 FUNC_0(FUNC_10(VAR_16));

 VAR_17.t_tableOid = FUNC_22(VAR_13);
 VAR_17.t_data = (HeapTupleHeader) FUNC_16(VAR_18, VAR_16);
 VAR_17.t_len = FUNC_9(VAR_16);
 VAR_17.t_self = *VAR_14;





 if (VAR_17.t_data->t_choice.t_heap.t_xmin != VAR_15)
  FUNC_32(VAR_2, "attempted to kill a tuple inserted by another transaction");
 if (!(FUNC_8(VAR_13) || FUNC_6(VAR_17.t_data)))
  FUNC_32(VAR_2, "attempted to kill a non-speculative tuple");
 FUNC_0(!FUNC_5(VAR_17.t_data));







 FUNC_25();







 FUNC_0(FUNC_26(VAR_9));
 FUNC_20(VAR_18, VAR_9);


 VAR_17.t_data->t_infomask &= ~(VAR_5 | VAR_4);
 VAR_17.t_data->t_infomask2 &= ~VAR_3;






 FUNC_7(VAR_17.t_data, VAR_6);


 VAR_17.t_data->t_ctid = VAR_17.t_self;

 FUNC_15(VAR_20);







 if (FUNC_23(VAR_13))
 {
  xl_heap_delete VAR_21;
  XLogRecPtr VAR_22;

  VAR_21.flags = VAR_11;
  VAR_21.infobits_set = FUNC_31(VAR_17.t_data->t_infomask,
             VAR_17.t_data->t_infomask2);
  VAR_21.offnum = FUNC_12(&VAR_17.t_self);
  VAR_21.xmax = VAR_15;

  FUNC_27();
  FUNC_30((char *) &VAR_21, VAR_10);
  FUNC_29(0, VAR_20, VAR_7);



  VAR_22 = FUNC_28(VAR_8, VAR_12);

  FUNC_19(VAR_18, VAR_22);
 }

 FUNC_2();

 FUNC_14(VAR_20, VAR_1);

 if (FUNC_4(&VAR_17))
 {
  FUNC_0(!FUNC_8(VAR_13));
  FUNC_33(VAR_13, &VAR_17, 1);
 }







 FUNC_24(VAR_20);


 FUNC_34(VAR_13);
}
