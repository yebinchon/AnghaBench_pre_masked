
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_17__ {int datalen; int t_hoff; int t_infomask; int t_infomask2; } ;
typedef TYPE_2__ xl_multi_insert_tuple ;
struct TYPE_18__ {int ntuples; int* offsets; int flags; } ;
typedef TYPE_3__ xl_heap_multi_insert ;
typedef int uint8 ;
typedef int XLogRecPtr ;
struct TYPE_19__ {int tts_tid; int tts_tableOid; } ;
typedef TYPE_4__ TupleTableSlot ;
typedef int TransactionId ;
struct TYPE_21__ {int t_len; int t_self; TYPE_1__* t_data; int t_tableOid; } ;
struct TYPE_20__ {char* data; } ;
struct TYPE_16__ {int t_hoff; int t_infomask; int t_infomask2; } ;
typedef scalar_t__ Size ;
typedef int Relation ;
typedef int Page ;
typedef TYPE_5__ PGAlignedBlock ;
typedef int OffsetNumber ;
typedef TYPE_6__* HeapTuple ;
typedef int CommandId ;
typedef int BulkInsertState ;
typedef scalar_t__ Buffer ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,TYPE_6__*,int *) ;
 int FUNC_6 (int ,int *,scalar_t__) ;
 int FUNC_7 () ;
 TYPE_6__* FUNC_8 (TYPE_4__*,int,int *) ;
 int VAR_1 ;
 int FUNC_9 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int) ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 scalar_t__ FUNC_17 (int ) ;
 int FUNC_18 (int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_19 (int ,int,scalar_t__,int,int ,scalar_t__*,int *) ;
 int FUNC_20 (int ) ;
 scalar_t__ FUNC_21 (int ,int ) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (int ) ;
 scalar_t__ FUNC_24 (int ) ;
 int FUNC_25 (int ,scalar_t__,TYPE_6__*,int) ;
 int FUNC_26 (scalar_t__) ;
 scalar_t__ FUNC_27 (char*) ;
 int FUNC_28 () ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_29 (scalar_t__) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_30 () ;
 int FUNC_31 (int ,int ) ;
 int FUNC_32 (int ,char*,int) ;
 int FUNC_33 (int ,scalar_t__,int) ;
 int FUNC_34 (char*,int) ;
 int FUNC_35 (int ) ;
 TYPE_6__* FUNC_36 (int ,TYPE_6__*,int ,int ,int) ;
 int FUNC_37 (int ,TYPE_6__*) ;
 int FUNC_38 (char*,char*,int) ;
 TYPE_6__** FUNC_39 (int) ;
 int FUNC_40 (int ,int) ;
 int FUNC_41 (int ,int ,scalar_t__,int ) ;

void
FUNC_42(Relation VAR_20, TupleTableSlot **VAR_21, int VAR_22,
      CommandId VAR_23, int VAR_24, BulkInsertState VAR_25)
{
 TransactionId VAR_26 = FUNC_9();
 HeapTuple *VAR_27;
 int VAR_28;
 int VAR_29;
 PGAlignedBlock VAR_30;
 Page VAR_31;
 bool VAR_32;
 Size VAR_33;
 bool VAR_34 = FUNC_23(VAR_20);
 bool VAR_35 = FUNC_22(VAR_20);


 FUNC_1(!(VAR_24 & VAR_3));

 VAR_32 = !(VAR_24 & VAR_4) && FUNC_24(VAR_20);
 VAR_33 = FUNC_21(VAR_20,
               VAR_2);


 VAR_27 = FUNC_39(VAR_22 * sizeof(HeapTuple));
 for (VAR_28 = 0; VAR_28 < VAR_22; VAR_28++)
 {
  HeapTuple VAR_36;

  VAR_36 = FUNC_8(VAR_21[VAR_28], 1, ((void*)0));
  VAR_21[VAR_28]->tts_tableOid = FUNC_20(VAR_20);
  VAR_36->t_tableOid = VAR_21[VAR_28]->tts_tableOid;
  VAR_27[VAR_28] = FUNC_36(VAR_20, VAR_36, VAR_26, VAR_23,
           VAR_24);
 }
 FUNC_6(VAR_20, ((void*)0), VAR_5);

 VAR_29 = 0;
 while (VAR_29 < VAR_22)
 {
  Buffer VAR_37;
  Buffer VAR_38 = VAR_5;
  bool VAR_39 = 0;
  int VAR_40;

  FUNC_4();





  VAR_37 = FUNC_19(VAR_20, VAR_27[VAR_29]->t_len,
             VAR_5, VAR_24, VAR_25,
             &VAR_38, ((void*)0));
  VAR_31 = FUNC_3(VAR_37);


  FUNC_28();





  FUNC_25(VAR_20, VAR_37, VAR_27[VAR_29], 0);
  for (VAR_40 = 1; VAR_29 + VAR_40 < VAR_22; VAR_40++)
  {
   HeapTuple VAR_41 = VAR_27[VAR_29 + VAR_40];

   if (FUNC_15(VAR_31) < FUNC_12(VAR_41->t_len) + VAR_33)
    break;

   FUNC_25(VAR_20, VAR_37, VAR_41, 0);





   if (VAR_32 && VAR_35)
    FUNC_37(VAR_20, VAR_41);
  }

  if (FUNC_17(VAR_31))
  {
   VAR_39 = 1;
   FUNC_14(VAR_31);
   FUNC_41(VAR_20,
        FUNC_2(VAR_37),
        VAR_38, VAR_13);
  }





  FUNC_13(VAR_37);


  if (VAR_32)
  {
   XLogRecPtr VAR_42;
   xl_heap_multi_insert *VAR_43;
   uint8 VAR_44 = VAR_17;
   char *VAR_45;
   int VAR_46;
   char *VAR_47 = VAR_30.data;
   bool VAR_48;
   int VAR_49 = 0;





   VAR_48 = (FUNC_11(&(VAR_27[VAR_29]->t_self)) == VAR_1 &&
     FUNC_16(VAR_31) == VAR_1 + VAR_40 - 1);


   VAR_43 = (xl_heap_multi_insert *) VAR_47;
   VAR_47 += VAR_10;







   if (!VAR_48)
    VAR_47 += VAR_40 * sizeof(OffsetNumber);


   VAR_45 = VAR_47;

   VAR_43->flags = VAR_39 ? VAR_14 : 0;
   VAR_43->ntuples = VAR_40;





   for (VAR_28 = 0; VAR_28 < VAR_40; VAR_28++)
   {
    HeapTuple VAR_50 = VAR_27[VAR_29 + VAR_28];
    xl_multi_insert_tuple *VAR_51;
    int VAR_52;

    if (!VAR_48)
     VAR_43->offsets[VAR_28] = FUNC_11(&VAR_50->t_self);

    VAR_51 = (xl_multi_insert_tuple *) FUNC_27(VAR_47);
    VAR_47 = ((char *) VAR_51) + VAR_11;

    VAR_51->t_infomask2 = VAR_50->t_data->t_infomask2;
    VAR_51->t_infomask = VAR_50->t_data->t_infomask;
    VAR_51->t_hoff = VAR_50->t_data->t_hoff;


    VAR_52 = VAR_50->t_len - VAR_12;
    FUNC_38(VAR_47,
        (char *) VAR_50->t_data + VAR_12,
        VAR_52);
    VAR_51->datalen = VAR_52;
    VAR_47 += VAR_52;
   }
   VAR_46 = VAR_47 - VAR_45;
   FUNC_0((VAR_47 - VAR_30.data) < VAR_0);

   if (VAR_34)
    VAR_43->flags |= VAR_15;






   if (VAR_29 + VAR_40 == VAR_22)
    VAR_43->flags |= VAR_16;

   if (VAR_48)
   {
    VAR_44 |= VAR_18;
    VAR_49 |= VAR_8;
   }





   if (VAR_34)
    VAR_49 |= VAR_6;

   FUNC_30();
   FUNC_34((char *) VAR_43, VAR_45 - VAR_30.data);
   FUNC_33(0, VAR_37, VAR_7 | VAR_49);

   FUNC_32(0, VAR_45, VAR_46);


   FUNC_35(VAR_19);

   VAR_42 = FUNC_31(VAR_9, VAR_44);

   FUNC_18(VAR_31, VAR_42);
  }

  FUNC_7();

  FUNC_29(VAR_37);
  if (VAR_38 != VAR_5)
   FUNC_26(VAR_38);

  VAR_29 += VAR_40;
 }
 FUNC_6(VAR_20, ((void*)0), VAR_5);







 if (FUNC_10(VAR_20))
 {
  for (VAR_28 = 0; VAR_28 < VAR_22; VAR_28++)
   FUNC_5(VAR_20, VAR_27[VAR_28], ((void*)0));
 }


 for (VAR_28 = 0; VAR_28 < VAR_22; VAR_28++)
  VAR_21[VAR_28]->tts_tid = VAR_27[VAR_28]->t_self;

 FUNC_40(VAR_20, VAR_22);
}
