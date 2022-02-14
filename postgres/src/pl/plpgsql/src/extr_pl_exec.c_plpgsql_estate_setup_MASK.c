
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_14__ ;


typedef int plpgsql_CastHashKey ;
typedef int plpgsql_CastHashEntry ;
typedef int ctl ;
struct TYPE_22__ {int (* func_setup ) (TYPE_4__*,TYPE_3__*) ;int assign_expr; int error_callback; } ;
struct TYPE_21__ {int keysize; int entrysize; void* hcxt; } ;
struct TYPE_20__ {int retisnull; int atomic; int * plugin_info; int * err_text; int * err_stmt; int * eval_econtext; scalar_t__ eval_processed; int * eval_tuptable; void* stmt_mcontext_parent; int * stmt_mcontext; void* cast_hash_context; int * cast_hash; int * simple_eval_estate; int ndatums; TYPE_14__* paramLI; void* datum_context; int * datums; int found_varno; TYPE_2__* rsi; int * tuple_store_owner; int * tuple_store_cxt; int * tuple_store_desc; int * tuple_store; int * cur_error; int * exitlabel; int readonly_func; int retisset; int retistuple; int fn_rettype; int rettype; scalar_t__ retval; int * evtrigdata; int * trigdata; TYPE_3__* func; } ;
struct TYPE_19__ {int ndatums; int found_varno; int fn_readonly; int fn_retset; int fn_retistuple; int fn_rettype; TYPE_4__* cur_estate; } ;
struct TYPE_18__ {TYPE_1__* econtext; } ;
struct TYPE_17__ {int * ecxt_per_query_memory; } ;
struct TYPE_16__ {int numParams; int * parserSetupArg; scalar_t__ parserSetup; int * paramCompileArg; int paramCompile; void* paramFetchArg; int paramFetch; } ;
typedef TYPE_2__ ReturnSetInfo ;
typedef scalar_t__ ParserSetupHook ;
typedef TYPE_3__ PLpgSQL_function ;
typedef TYPE_4__ PLpgSQL_execstate ;
typedef TYPE_5__ HASHCTL ;
typedef int EState ;
typedef scalar_t__ Datum ;


 int VAR_0 ;
 void* FUNC_0 (int ,char*,int ) ;
 void* VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_1 (char*,int,TYPE_5__*,int) ;
 TYPE_14__* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_5__*,int ,int) ;
 int FUNC_4 (TYPE_4__*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 TYPE_8__** VAR_13 ;
 void* VAR_14 ;
 int * VAR_15 ;
 int * VAR_16 ;
 int FUNC_5 (TYPE_4__*,TYPE_3__*) ;

__attribute__((used)) static void
FUNC_6(PLpgSQL_execstate *VAR_17,
      PLpgSQL_function *VAR_18,
      ReturnSetInfo *VAR_19,
      EState *VAR_20)
{
 HASHCTL VAR_21;


 VAR_18->cur_estate = VAR_17;

 VAR_17->func = VAR_18;
 VAR_17->trigdata = ((void*)0);
 VAR_17->evtrigdata = ((void*)0);

 VAR_17->retval = (Datum) 0;
 VAR_17->retisnull = 1;
 VAR_17->rettype = VAR_6;

 VAR_17->fn_rettype = VAR_18->fn_rettype;
 VAR_17->retistuple = VAR_18->fn_retistuple;
 VAR_17->retisset = VAR_18->fn_retset;

 VAR_17->readonly_func = VAR_18->fn_readonly;
 VAR_17->atomic = 1;

 VAR_17->exitlabel = ((void*)0);
 VAR_17->cur_error = ((void*)0);

 VAR_17->tuple_store = ((void*)0);
 VAR_17->tuple_store_desc = ((void*)0);
 if (VAR_19)
 {
  VAR_17->tuple_store_cxt = VAR_19->econtext->ecxt_per_query_memory;
  VAR_17->tuple_store_owner = VAR_2;
 }
 else
 {
  VAR_17->tuple_store_cxt = ((void*)0);
  VAR_17->tuple_store_owner = ((void*)0);
 }
 VAR_17->rsi = VAR_19;

 VAR_17->found_varno = VAR_18->found_varno;
 VAR_17->ndatums = VAR_18->ndatums;
 VAR_17->datums = ((void*)0);

 VAR_17->datum_context = VAR_1;


 VAR_17->paramLI = FUNC_2(0);
 VAR_17->paramLI->paramFetch = VAR_11;
 VAR_17->paramLI->paramFetchArg = (void *) VAR_17;
 VAR_17->paramLI->paramCompile = VAR_10;
 VAR_17->paramLI->paramCompileArg = ((void*)0);
 VAR_17->paramLI->parserSetup = (ParserSetupHook) VAR_12;
 VAR_17->paramLI->parserSetupArg = ((void*)0);
 VAR_17->paramLI->numParams = VAR_17->ndatums;


 if (VAR_20)
 {
  VAR_17->simple_eval_estate = VAR_20;

  FUNC_3(&VAR_21, 0, sizeof(VAR_21));
  VAR_21.keysize = sizeof(plpgsql_CastHashKey);
  VAR_21.entrysize = sizeof(plpgsql_CastHashEntry);
  VAR_21.hcxt = VAR_1;
  VAR_17->cast_hash = FUNC_1("PLpgSQL private cast cache",
          16,
          &VAR_21,
          VAR_5 | VAR_3 | VAR_4);
  VAR_17->cast_hash_context = VAR_1;
 }
 else
 {
  VAR_17->simple_eval_estate = VAR_16;

  if (VAR_15 == ((void*)0))
  {
   VAR_14 = FUNC_0(VAR_7,
              "PLpgSQL cast info",
              VAR_0);
   FUNC_3(&VAR_21, 0, sizeof(VAR_21));
   VAR_21.keysize = sizeof(plpgsql_CastHashKey);
   VAR_21.entrysize = sizeof(plpgsql_CastHashEntry);
   VAR_21.hcxt = VAR_14;
   VAR_15 = FUNC_1("PLpgSQL cast cache",
             16,
             &VAR_21,
             VAR_5 | VAR_3 | VAR_4);
  }
  VAR_17->cast_hash = VAR_15;
  VAR_17->cast_hash_context = VAR_14;
 }






 VAR_17->stmt_mcontext = ((void*)0);
 VAR_17->stmt_mcontext_parent = VAR_1;

 VAR_17->eval_tuptable = ((void*)0);
 VAR_17->eval_processed = 0;
 VAR_17->eval_econtext = ((void*)0);

 VAR_17->err_stmt = ((void*)0);
 VAR_17->err_text = ((void*)0);

 VAR_17->plugin_info = ((void*)0);




 FUNC_4(VAR_17);







 if (*VAR_13)
 {
  (*VAR_13)->error_callback = VAR_9;
  (*VAR_13)->assign_expr = VAR_8;

  if ((*VAR_13)->func_setup)
   ((*VAR_13)->func_setup) (VAR_17, VAR_18);
 }
}
