
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int sqlerrcode; } ;
struct TYPE_7__ {int * exc; } ;
typedef int ResourceOwner ;
typedef int PyObject ;
typedef TYPE_1__ PLyExceptionEntry ;
typedef int MemoryContext ;
typedef TYPE_2__ ErrorData ;


 TYPE_2__* FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int * VAR_2 ;
 int FUNC_4 (int *,TYPE_2__*) ;
 int VAR_3 ;
 int FUNC_5 () ;
 TYPE_1__* FUNC_6 (int ,int *,int ,int *) ;

void
FUNC_7(MemoryContext VAR_4, ResourceOwner VAR_5)
{
 ErrorData *VAR_6;
 PLyExceptionEntry *VAR_7;
 PyObject *VAR_8;


 FUNC_3(VAR_4);
 VAR_6 = FUNC_0();
 FUNC_1();


 FUNC_5();
 FUNC_3(VAR_4);
 VAR_0 = VAR_5;


 VAR_7 = FUNC_6(VAR_3, &(VAR_6->sqlerrcode),
      VAR_1, ((void*)0));





 VAR_8 = VAR_7 ? VAR_7->exc : VAR_2;

 FUNC_4(VAR_8, VAR_6);
 FUNC_2(VAR_6);
}
