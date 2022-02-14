
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int TupleTableSlot ;
typedef int Trigger ;
typedef int TransactionId ;
struct TYPE_5__ {int confmatchtype; } ;
typedef int Relation ;
typedef TYPE_1__ RI_ConstraintInfo ;
typedef int Datum ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (int *,int ,int) ;
 scalar_t__ FUNC_5 (int ,int *,int *,TYPE_1__ const*,int) ;
 int FUNC_6 (int ,int *,TYPE_1__ const*,int) ;
 int FUNC_7 (int *,int ,int*) ;

bool
FUNC_8(Trigger *VAR_3, Relation VAR_4,
         TupleTableSlot *VAR_5, TupleTableSlot *VAR_6)
{
 const RI_ConstraintInfo *VAR_7;
 int VAR_8;
 Datum VAR_9;
 TransactionId VAR_10;
 bool VAR_11;

 VAR_7 = FUNC_4(VAR_3, VAR_4, 0);

 VAR_8 = FUNC_6(FUNC_2(VAR_4), VAR_6, VAR_7, 0);





 if (VAR_8 == VAR_1)
  return 0;





 else if (VAR_8 == VAR_2)
 {
  switch (VAR_7->confmatchtype)
  {
   case 128:





    return 0;

   case 129:




    break;

   case 130:
    return 1;
  }
 }
 VAR_9 = FUNC_7(VAR_5, VAR_0, &VAR_11);
 FUNC_0(!VAR_11);
 VAR_10 = FUNC_1(VAR_9);
 if (FUNC_3(VAR_10))
  return 1;


 if (FUNC_5(VAR_4, VAR_5, VAR_6, VAR_7, 0))
  return 0;


 return 1;
}
