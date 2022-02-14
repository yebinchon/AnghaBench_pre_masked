
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int t_tableOid; int t_len; int * t_data; int t_self; } ;
typedef int Snapshot ;
typedef int Relation ;
typedef int Page ;
typedef scalar_t__ OffsetNumber ;
typedef int * ItemPointer ;
typedef int ItemId ;
typedef int * HeapTupleHeader ;
typedef TYPE_1__* HeapTuple ;
typedef int Buffer ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ,TYPE_1__*,int ,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (TYPE_1__*,int ,int ) ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,scalar_t__) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int ,TYPE_1__*,int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,int ,int ) ;

bool
FUNC_16(Relation VAR_4,
     Snapshot VAR_5,
     HeapTuple VAR_6,
     Buffer *VAR_7)
{
 ItemPointer VAR_8 = &(VAR_6->t_self);
 ItemId VAR_9;
 Buffer VAR_10;
 Page VAR_11;
 OffsetNumber VAR_12;
 bool VAR_13;




 VAR_10 = FUNC_12(VAR_4, FUNC_5(VAR_8));




 FUNC_7(VAR_10, VAR_0);
 VAR_11 = FUNC_0(VAR_10);
 FUNC_15(VAR_5, VAR_4, VAR_11);





 VAR_12 = FUNC_6(VAR_8);
 if (VAR_12 < VAR_2 || VAR_12 > FUNC_10(VAR_11))
 {
  FUNC_7(VAR_10, VAR_1);
  FUNC_14(VAR_10);
  *VAR_7 = VAR_3;
  VAR_6->t_data = ((void*)0);
  return 0;
 }




 VAR_9 = FUNC_9(VAR_11, VAR_12);




 if (!FUNC_4(VAR_9))
 {
  FUNC_7(VAR_10, VAR_1);
  FUNC_14(VAR_10);
  *VAR_7 = VAR_3;
  VAR_6->t_data = ((void*)0);
  return 0;
 }




 VAR_6->t_data = (HeapTupleHeader) FUNC_8(VAR_11, VAR_9);
 VAR_6->t_len = FUNC_3(VAR_9);
 VAR_6->t_tableOid = FUNC_13(VAR_4);




 VAR_13 = FUNC_2(VAR_6, VAR_5, VAR_10);

 if (VAR_13)
  FUNC_11(VAR_4, VAR_6, VAR_5);

 FUNC_1(VAR_13, VAR_4, VAR_6, VAR_10, VAR_5);

 FUNC_7(VAR_10, VAR_1);

 if (VAR_13)
 {




  *VAR_7 = VAR_10;

  return 1;
 }


 FUNC_14(VAR_10);
 *VAR_7 = VAR_3;

 return 0;
}
