
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TM_Result ;
typedef int TM_FailureData ;
typedef int Snapshot ;
typedef int Relation ;
typedef int ItemPointer ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;




 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int,int *,int) ;

void
FUNC_3(Relation VAR_2, ItemPointer VAR_3, Snapshot VAR_4)
{
 TM_Result VAR_5;
 TM_FailureData VAR_6;

 VAR_5 = FUNC_2(VAR_2, VAR_3,
        FUNC_0(1),
        VAR_4, VAR_1,
        1 ,
        &VAR_6, 0 );

 switch (VAR_5)
 {
  case 129:

   FUNC_1(VAR_0, "tuple already updated by self");
   break;

  case 130:

   break;

  case 128:
   FUNC_1(VAR_0, "tuple concurrently updated");
   break;

  case 131:
   FUNC_1(VAR_0, "tuple concurrently deleted");
   break;

  default:
   FUNC_1(VAR_0, "unrecognized table_tuple_delete status: %u", VAR_5);
   break;
 }
}
