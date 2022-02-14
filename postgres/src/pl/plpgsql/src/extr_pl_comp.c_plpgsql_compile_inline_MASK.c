
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_12__ {char* arg; struct TYPE_12__* previous; int callback; } ;
struct TYPE_11__ {int out_param_varno; scalar_t__ fn_rettype; int fn_retset; int fn_retistuple; int fn_retisdomain; int fn_retbyval; int fn_rettyplen; int fn_readonly; scalar_t__ fn_nargs; int action; int found_varno; int fn_prokind; scalar_t__ nstatements; scalar_t__ extra_errors; scalar_t__ extra_warnings; int print_strict_params; int resolve_option; int * fn_cxt; int fn_input_collation; int fn_is_trigger; int fn_signature; } ;
struct TYPE_10__ {int dno; } ;
typedef TYPE_1__ PLpgSQL_variable ;
typedef TYPE_2__ PLpgSQL_function ;
typedef int * MemoryContext ;
typedef TYPE_3__ ErrorContextCallback ;


 int VAR_0 ;
 int * FUNC_0 (int ,char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_1 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_9 ;
 int FUNC_3 (int ,char*,int) ;
 TYPE_3__* VAR_10 ;
 scalar_t__ FUNC_4 (int) ;
 int VAR_11 ;
 int FUNC_5 (int ,int,int ,int *) ;
 TYPE_1__* FUNC_6 (char*,int ,int ,int) ;
 int VAR_12 ;
 int VAR_13 ;
 int * VAR_14 ;
 TYPE_2__* VAR_15 ;
 char* VAR_16 ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 () ;
 int FUNC_9 (char*,int ) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_10 () ;
 int FUNC_11 (char*) ;
 int FUNC_12 () ;
 int VAR_19 ;
 int FUNC_13 () ;
 int FUNC_14 (char*) ;

PLpgSQL_function *
FUNC_15(char *VAR_20)
{
 char *VAR_21 = "inline_code_block";
 PLpgSQL_function *VAR_22;
 ErrorContextCallback VAR_23;
 PLpgSQL_variable *VAR_24;
 int VAR_25;
 MemoryContext VAR_26;






 FUNC_11(VAR_20);

 VAR_16 = VAR_21;




 VAR_23.callback = VAR_13;
 VAR_23.arg = VAR_20;
 VAR_23.previous = VAR_10;
 VAR_10 = &VAR_23;


 VAR_12 = VAR_9;


 VAR_22 = (PLpgSQL_function *) FUNC_4(sizeof(PLpgSQL_function));

 VAR_15 = VAR_22;





 VAR_26 = FUNC_0(VAR_2,
          "PL/pgSQL inline code context",
          VAR_0);
 VAR_14 = FUNC_1(VAR_26);

 VAR_22->fn_signature = FUNC_14(VAR_21);
 VAR_22->fn_is_trigger = VAR_6;
 VAR_22->fn_input_collation = VAR_4;
 VAR_22->fn_cxt = VAR_26;
 VAR_22->out_param_varno = -1;
 VAR_22->resolve_option = VAR_19;
 VAR_22->print_strict_params = VAR_18;





 VAR_22->extra_warnings = 0;
 VAR_22->extra_errors = 0;

 VAR_22->nstatements = 0;

 FUNC_8();
 FUNC_9(VAR_21, VAR_5);
 VAR_11 = 0;
 FUNC_12();


 VAR_22->fn_rettype = VAR_8;
 VAR_22->fn_retset = 0;
 VAR_22->fn_retistuple = 0;
 VAR_22->fn_retisdomain = 0;
 VAR_22->fn_prokind = VAR_7;

 VAR_22->fn_retbyval = 1;
 VAR_22->fn_rettyplen = sizeof(int32);





 VAR_22->fn_readonly = 0;




 VAR_24 = FUNC_6("found", 0,
         FUNC_5(VAR_1,
              -1,
              VAR_4,
              ((void*)0)),
         1);
 VAR_22->found_varno = VAR_24->dno;




 VAR_25 = FUNC_13();
 if (VAR_25 != 0)
  FUNC_3(VAR_3, "plpgsql parser returned %d", VAR_25);
 VAR_22->action = VAR_17;

 FUNC_10();





 if (VAR_22->fn_rettype == VAR_8)
  FUNC_2(VAR_22);




 VAR_22->fn_nargs = 0;

 FUNC_7(VAR_22);




 VAR_10 = VAR_23.previous;
 VAR_16 = ((void*)0);

 VAR_12 = 0;

 FUNC_1(VAR_14);
 VAR_14 = ((void*)0);
 return VAR_22;
}
