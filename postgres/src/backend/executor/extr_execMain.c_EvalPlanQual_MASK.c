
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TupleTableSlot ;
typedef int Relation ;
typedef int Index ;
typedef int EPQState ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

TupleTableSlot *
FUNC_8(EPQState *VAR_0, Relation VAR_1,
    Index VAR_2, TupleTableSlot *VAR_3)
{
 TupleTableSlot *VAR_4;
 TupleTableSlot *VAR_5;

 FUNC_0(VAR_2 > 0);




 FUNC_1(VAR_0);





 VAR_5 = FUNC_3(VAR_0, VAR_1, VAR_2);
 if (VAR_5 != VAR_3)
  FUNC_5(VAR_5, VAR_3);




 VAR_4 = FUNC_2(VAR_0);
 if (!FUNC_7(VAR_4))
  FUNC_6(VAR_4);






 FUNC_4(VAR_5);

 return VAR_4;
}
