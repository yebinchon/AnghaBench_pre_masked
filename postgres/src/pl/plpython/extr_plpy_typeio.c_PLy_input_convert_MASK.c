
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * (* func ) (TYPE_1__*,int ) ;} ;
typedef int PyObject ;
typedef int PLyExecutionContext ;
typedef TYPE_1__ PLyDatumToOb ;
typedef int MemoryContext ;
typedef int Datum ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (TYPE_1__*,int ) ;

PyObject *
FUNC_5(PLyDatumToOb *VAR_0, Datum VAR_1)
{
 PyObject *VAR_2;
 PLyExecutionContext *VAR_3 = FUNC_2();
 MemoryContext VAR_4 = FUNC_3(VAR_3);
 MemoryContext VAR_5;
 FUNC_0(VAR_4);

 VAR_5 = FUNC_1(VAR_4);

 VAR_2 = VAR_0->func(VAR_0, VAR_1);

 FUNC_1(VAR_5);

 return VAR_2;
}
