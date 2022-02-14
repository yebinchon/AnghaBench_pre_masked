
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64 ;
struct TYPE_5__ {double tuple_len; double free_space; double dead_tuple_len; int table_len; int scanned_percent; double tuple_percent; double dead_tuple_percent; double free_percent; int tuple_count; int dead_tuple_count; } ;
typedef TYPE_1__ output_type ;
typedef int TransactionId ;
struct TYPE_6__ {double t_len; int t_tableOid; scalar_t__ t_data; int t_self; } ;
typedef scalar_t__ Size ;
typedef int Relation ;
typedef int Page ;
typedef scalar_t__ OffsetNumber ;
typedef int ItemId ;
typedef scalar_t__ HeapTupleHeader ;
typedef TYPE_2__ HeapTupleData ;
typedef int BufferAccessStrategy ;
typedef int Buffer ;
typedef int BlockNumber ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 () ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ,int) ;





 int FUNC_7 (TYPE_2__*,int ,int ) ;
 int VAR_5 ;
 double FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *,int,scalar_t__) ;
 int FUNC_14 (int ,int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_15 (scalar_t__) ;
 int VAR_7 ;
 scalar_t__ FUNC_16 (int ) ;
 scalar_t__ FUNC_17 (int ,int ) ;
 int FUNC_18 (int ,scalar_t__) ;
 scalar_t__ FUNC_19 (int ) ;
 scalar_t__ FUNC_20 (int ) ;
 scalar_t__ FUNC_21 (int ) ;
 int VAR_8 ;
 int FUNC_22 (int ,int ,int,int ,int ) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int ) ;
 int FUNC_25 (int ) ;
 scalar_t__ VAR_9 ;
 int FUNC_26 (int ) ;
 scalar_t__ FUNC_27 (int ,int,int *) ;
 int FUNC_28 (int ,char*) ;
 int FUNC_29 (int ,int,int,int ) ;

__attribute__((used)) static void
FUNC_30(Relation VAR_10, output_type *VAR_11)
{
 BlockNumber VAR_12,
    VAR_13,
    VAR_14;
 Buffer VAR_15 = VAR_5;
 BufferAccessStrategy VAR_16;
 TransactionId VAR_17;

 VAR_17 = FUNC_5(VAR_10, VAR_7);
 VAR_16 = FUNC_4(VAR_0);

 VAR_13 = FUNC_23(VAR_10);
 VAR_12 = 0;

 for (VAR_14 = 0; VAR_14 < VAR_13; VAR_14++)
 {
  Buffer VAR_18;
  Page VAR_19;
  OffsetNumber VAR_20,
     VAR_21;
  Size VAR_22;

  FUNC_3();





  if (FUNC_27(VAR_10, VAR_14, &VAR_15))
  {
   VAR_22 = FUNC_6(VAR_10, VAR_14);
   VAR_11->tuple_len += VAR_1 - VAR_22;
   VAR_11->free_space += VAR_22;
   continue;
  }

  VAR_18 = FUNC_22(VAR_10, VAR_6, VAR_14,
         VAR_8, VAR_16);

  FUNC_14(VAR_18, VAR_2);

  VAR_19 = FUNC_1(VAR_18);





  if (!FUNC_21(VAR_19))
   VAR_11->free_space += FUNC_16(VAR_19);
  else
   VAR_11->free_space += VAR_1 - VAR_9;


  VAR_12++;

  if (FUNC_21(VAR_19) || FUNC_20(VAR_19))
  {
   FUNC_26(VAR_18);
   continue;
  }






  VAR_21 = FUNC_19(VAR_19);

  for (VAR_20 = VAR_4;
    VAR_20 <= VAR_21;
    VAR_20 = FUNC_15(VAR_20))
  {
   ItemId VAR_23;
   HeapTupleData VAR_24;

   VAR_23 = FUNC_18(VAR_19, VAR_20);

   if (!FUNC_12(VAR_23) || FUNC_11(VAR_23) ||
    FUNC_9(VAR_23))
   {
    continue;
   }

   FUNC_0(FUNC_10(VAR_23));

   FUNC_13(&(VAR_24.t_self), VAR_14, VAR_20);

   VAR_24.t_data = (HeapTupleHeader) FUNC_17(VAR_19, VAR_23);
   VAR_24.t_len = FUNC_8(VAR_23);
   VAR_24.t_tableOid = FUNC_24(VAR_10);







   switch (FUNC_7(&VAR_24, VAR_17, VAR_18))
   {
    case 129:
    case 131:
     VAR_11->tuple_len += VAR_24.t_len;
     VAR_11->tuple_count++;
     break;
    case 132:
    case 128:
    case 130:
     VAR_11->dead_tuple_len += VAR_24.t_len;
     VAR_11->dead_tuple_count++;
     break;
    default:
     FUNC_28(VAR_3, "unexpected HeapTupleSatisfiesVacuum result");
     break;
   }
  }

  FUNC_26(VAR_18);
 }

 VAR_11->table_len = (uint64) VAR_13 * VAR_1;
 VAR_11->tuple_count = FUNC_29(VAR_10, VAR_13, VAR_12,
              VAR_11->tuple_count);




 if (VAR_13 != 0)
 {
  VAR_11->scanned_percent = 100 * VAR_12 / VAR_13;
  VAR_11->tuple_percent = 100.0 * VAR_11->tuple_len / VAR_11->table_len;
  VAR_11->dead_tuple_percent = 100.0 * VAR_11->dead_tuple_len / VAR_11->table_len;
  VAR_11->free_percent = 100.0 * VAR_11->free_space / VAR_11->table_len;
 }

 if (FUNC_2(VAR_15))
 {
  FUNC_25(VAR_15);
  VAR_15 = VAR_5;
 }
}
