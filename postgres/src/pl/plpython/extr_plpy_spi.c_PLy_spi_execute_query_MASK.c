
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* curr_proc; } ;
struct TYPE_4__ {int fn_readonly; } ;
typedef int ResourceOwner ;
typedef int PyObject ;
typedef TYPE_2__ PLyExecutionContext ;
typedef int MemoryContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 TYPE_2__* FUNC_3 () ;
 int VAR_2 ;
 int FUNC_4 (int ,char*,int ) ;
 int * FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int volatile,int volatile) ;
 int FUNC_7 (int volatile,int volatile) ;
 int FUNC_8 (int volatile,int volatile) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char*,int ,long) ;
 int VAR_3 ;
 int FUNC_11 (int) ;
 int VAR_4 ;
 int FUNC_12 (char*,int ,int) ;
 int FUNC_13 (char*) ;

__attribute__((used)) static PyObject *
FUNC_14(char *VAR_5, long VAR_6)
{
 int VAR_7;
 volatile MemoryContext VAR_8;
 volatile ResourceOwner VAR_9;
 PyObject *VAR_10 = ((void*)0);

 VAR_8 = VAR_0;
 VAR_9 = VAR_1;

 FUNC_7(VAR_8, VAR_9);

 FUNC_2();
 {
  PLyExecutionContext *VAR_11 = FUNC_3();

  FUNC_12(VAR_5, FUNC_13(VAR_5), 0);
  VAR_7 = FUNC_10(VAR_5, VAR_11->curr_proc->fn_readonly, VAR_6);
  VAR_10 = FUNC_5(VAR_4, VAR_3, VAR_7);

  FUNC_8(VAR_8, VAR_9);
 }
 FUNC_0();
 {
  FUNC_6(VAR_8, VAR_9);
  return ((void*)0);
 }
 FUNC_1();

 if (VAR_7 < 0)
 {
  FUNC_9(VAR_10);
  FUNC_4(VAR_2,
        "SPI_execute failed: %s",
        FUNC_11(VAR_7));
  return ((void*)0);
 }

 return VAR_10;
}
