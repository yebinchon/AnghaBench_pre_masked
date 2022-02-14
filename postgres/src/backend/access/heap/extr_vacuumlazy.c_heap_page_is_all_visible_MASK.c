
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int TransactionId ;
struct TYPE_3__ {scalar_t__ t_data; int t_tableOid; int t_len; int t_self; } ;
typedef int Relation ;
typedef int Page ;
typedef scalar_t__ OffsetNumber ;
typedef int ItemId ;
typedef scalar_t__ HeapTupleHeader ;
typedef TYPE_1__ HeapTupleData ;
typedef int Buffer ;
typedef int BlockNumber ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;





 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (TYPE_1__*,int ,int ) ;
 int VAR_2 ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *,int ,scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 int VAR_3 ;
 scalar_t__ FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,scalar_t__) ;
 scalar_t__ FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (int ,int ) ;
 int FUNC_19 (int ,char*) ;
 int FUNC_20 (scalar_t__) ;

__attribute__((used)) static bool
FUNC_21(Relation VAR_4, Buffer VAR_5,
       TransactionId *VAR_6,
       bool *VAR_7)
{
 Page VAR_8 = FUNC_2(VAR_5);
 BlockNumber VAR_9 = FUNC_1(VAR_5);
 OffsetNumber VAR_10,
    VAR_11;
 bool VAR_12 = 1;

 *VAR_6 = VAR_2;
 *VAR_7 = 1;





 VAR_11 = FUNC_15(VAR_8);
 for (VAR_10 = VAR_1;
   VAR_10 <= VAR_11 && VAR_12;
   VAR_10 = FUNC_12(VAR_10))
 {
  ItemId VAR_13;
  HeapTupleData VAR_14;

  VAR_13 = FUNC_14(VAR_8, VAR_10);


  if (!FUNC_10(VAR_13) || FUNC_9(VAR_13))
   continue;

  FUNC_11(&(VAR_14.t_self), VAR_9, VAR_10);





  if (FUNC_7(VAR_13))
  {
   VAR_12 = 0;
   *VAR_7 = 0;
   break;
  }

  FUNC_0(FUNC_8(VAR_13));

  VAR_14.t_data = (HeapTupleHeader) FUNC_13(VAR_8, VAR_13);
  VAR_14.t_len = FUNC_6(VAR_13);
  VAR_14.t_tableOid = FUNC_16(VAR_4);

  switch (FUNC_5(&VAR_14, VAR_3, VAR_5))
  {
   case 129:
    {
     TransactionId VAR_15;


     if (!FUNC_4(VAR_14.t_data))
     {
      VAR_12 = 0;
      *VAR_7 = 0;
      break;
     }





     VAR_15 = FUNC_3(VAR_14.t_data);
     if (!FUNC_18(VAR_15, VAR_3))
     {
      VAR_12 = 0;
      *VAR_7 = 0;
      break;
     }


     if (FUNC_17(VAR_15, *VAR_6))
      *VAR_6 = VAR_15;


     if (VAR_12 && *VAR_7 &&
      FUNC_20(VAR_14.t_data))
      *VAR_7 = 0;
    }
    break;

   case 132:
   case 128:
   case 130:
   case 131:
    {
     VAR_12 = 0;
     *VAR_7 = 0;
     break;
    }
   default:
    FUNC_19(VAR_0, "unexpected HeapTupleSatisfiesVacuum result");
    break;
  }
 }

 return VAR_12;
}
