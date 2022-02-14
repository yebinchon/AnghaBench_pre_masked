
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int result_typioparam; int result_in_func; scalar_t__ fn_retistuple; int fn_retisset; } ;
typedef TYPE_1__ pltcl_proc_desc ;
struct TYPE_8__ {TYPE_3__* ret_tupdesc; int * tuple_store; TYPE_1__* prodesc; int * fcinfo; } ;
typedef TYPE_2__ pltcl_call_state ;
typedef int Tcl_Obj ;
typedef int Tcl_Interp ;
struct TYPE_9__ {int natts; } ;
typedef int ResourceOwner ;
typedef int MemoryContext ;
typedef int HeapTuple ;
typedef int * FunctionCallInfo ;
typedef int Datum ;
typedef int ClientData ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,int ,int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (int * const) ;
 int FUNC_6 (int *,int * const,int*,int ***) ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int,int * const*,char*) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (int *,int **,int,TYPE_2__*) ;
 TYPE_2__* VAR_5 ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (int *,int ,int ) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int *,int ) ;
 int FUNC_16 (int *,TYPE_3__*,int *,int*) ;
 int FUNC_17 (char*) ;

__attribute__((used)) static int
FUNC_18(ClientData VAR_6, Tcl_Interp *VAR_7,
     int VAR_8, Tcl_Obj *const VAR_9[])
{
 pltcl_call_state *VAR_10 = VAR_5;
 FunctionCallInfo VAR_11 = VAR_10->fcinfo;
 pltcl_proc_desc *VAR_12 = VAR_10->prodesc;
 MemoryContext VAR_13 = VAR_0;
 ResourceOwner VAR_14 = VAR_1;
 volatile int VAR_15 = VAR_4;




 if (VAR_11 == ((void*)0))
 {
  FUNC_8(VAR_7,
       FUNC_7("return_next cannot be used in triggers", -1));
  return VAR_3;
 }

 if (!VAR_12->fn_retisset)
 {
  FUNC_8(VAR_7,
       FUNC_7("return_next cannot be used in non-set-returning functions", -1));
  return VAR_3;
 }




 if (VAR_8 != 2)
 {
  FUNC_9(VAR_7, 1, VAR_9, "result");
  return VAR_3;
 }
 FUNC_0(((void*)0));
 FUNC_4();
 {

  if (VAR_10->tuple_store == ((void*)0))
   FUNC_12(VAR_10);

  if (VAR_12->fn_retistuple)
  {
   Tcl_Obj **VAR_16;
   int VAR_17;


   if (FUNC_6(VAR_7, VAR_9[1], &VAR_17, &VAR_16) == VAR_3)
    VAR_15 = VAR_3;
   else
   {
    HeapTuple VAR_18;

    VAR_18 = FUNC_11(VAR_7, VAR_16, VAR_17,
             VAR_10);
    FUNC_15(VAR_10->tuple_store, VAR_18);
   }
  }
  else
  {
   Datum VAR_19;
   bool VAR_20 = 0;


   if (VAR_10->ret_tupdesc->natts != 1)
    FUNC_10(VAR_2, "wrong result type supplied in return_next");

   VAR_19 = FUNC_1(&VAR_12->result_in_func,
            FUNC_17((char *) FUNC_5(VAR_9[1])),
            VAR_12->result_typioparam,
            -1);
   FUNC_16(VAR_10->tuple_store, VAR_10->ret_tupdesc,
         &VAR_19, &VAR_20);
  }

  FUNC_14(VAR_13, VAR_14);
 }
 FUNC_2();
 {
  FUNC_13(VAR_7, VAR_13, VAR_14);
  return VAR_3;
 }
 FUNC_3();

 return VAR_15;
}
