
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TupleDesc ;
typedef int PyObject ;
typedef int PLyExecutionContext ;
typedef int PLyDatumToOb ;
typedef int MemoryContext ;
typedef int HeapTuple ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int *,int ,int ,int) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;

PyObject *
FUNC_5(PLyDatumToOb *VAR_0, HeapTuple VAR_1, TupleDesc VAR_2, bool VAR_3)
{
 PyObject *VAR_4;
 PLyExecutionContext *VAR_5 = FUNC_3();
 MemoryContext VAR_6 = FUNC_4(VAR_5);
 MemoryContext VAR_7;




 FUNC_0(VAR_6);

 VAR_7 = FUNC_1(VAR_6);

 VAR_4 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3);

 FUNC_1(VAR_7);

 return VAR_4;
}
