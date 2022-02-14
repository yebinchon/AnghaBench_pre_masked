
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TupleDesc ;
typedef int HeapTuple ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,int ,int*) ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int VAR_5 ;

void
FUNC_6(void)
{
 HeapTuple VAR_6;
 TupleDesc VAR_7;
 int VAR_8;

 FUNC_1(VAR_0, "inserting row with %d columns", VAR_4);

 VAR_7 = FUNC_0(VAR_4, VAR_2);
 VAR_6 = FUNC_2(VAR_7, VAR_5, VAR_1);
 FUNC_4(VAR_7);

 FUNC_5(VAR_3, VAR_6);
 FUNC_3(VAR_6);
 FUNC_1(VAR_0, "row inserted");




 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++)
  VAR_1[VAR_8] = 0;
}
