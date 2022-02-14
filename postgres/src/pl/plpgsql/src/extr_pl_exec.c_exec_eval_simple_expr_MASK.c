
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_17__ ;


typedef int int32 ;
struct TYPE_25__ {scalar_t__ generation; } ;
struct TYPE_24__ {int * ecxt_param_list_info; } ;
struct TYPE_23__ {int readonly_func; TYPE_2__* paramLI; TYPE_1__* simple_eval_estate; TYPE_5__* eval_econtext; } ;
struct TYPE_22__ {int expr_simple_in_use; scalar_t__ expr_simple_lxid; scalar_t__ expr_simple_generation; scalar_t__ rwparam; int expr_simple_state; int * expr_simple_expr; int expr_simple_typmod; int expr_simple_type; int plan; } ;
struct TYPE_21__ {void* parserSetupArg; } ;
struct TYPE_20__ {int es_query_cxt; } ;
struct TYPE_19__ {scalar_t__ lxid; } ;
typedef TYPE_3__ PLpgSQL_expr ;
typedef TYPE_4__ PLpgSQL_execstate ;
typedef int Oid ;
typedef int MemoryContext ;
typedef scalar_t__ LocalTransactionId ;
typedef TYPE_5__ ExprContext ;
typedef int Datum ;
typedef TYPE_6__ CachedPlan ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,TYPE_5__*,int*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 TYPE_17__* VAR_0 ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_6__*,int) ;
 TYPE_6__* FUNC_9 (int ) ;
 int FUNC_10 (TYPE_3__*,scalar_t__) ;
 int FUNC_11 (TYPE_3__*,TYPE_6__*) ;
 int FUNC_12 (TYPE_4__*) ;
 int * FUNC_13 (TYPE_4__*,TYPE_3__*) ;

__attribute__((used)) static bool
FUNC_14(PLpgSQL_execstate *VAR_1,
       PLpgSQL_expr *VAR_2,
       Datum *VAR_3,
       bool *VAR_4,
       Oid *VAR_5,
       int32 *VAR_6)
{
 ExprContext *VAR_7 = VAR_1->eval_econtext;
 LocalTransactionId VAR_8 = VAR_0->lxid;
 CachedPlan *VAR_9;
 void *VAR_10;
 MemoryContext VAR_11;




 if (VAR_2->expr_simple_expr == ((void*)0))
  return 0;




 if (VAR_2->expr_simple_in_use && VAR_2->expr_simple_lxid == VAR_8)
  return 0;






 VAR_11 = FUNC_5(FUNC_12(VAR_1));
 VAR_9 = FUNC_9(VAR_2->plan);
 FUNC_5(VAR_11);






 FUNC_0(VAR_9 != ((void*)0));


 if (VAR_9->generation != VAR_2->expr_simple_generation)
 {
  FUNC_11(VAR_2, VAR_9);

  if (VAR_2->rwparam >= 0)
   FUNC_10(VAR_2, VAR_2->rwparam);
 }




 *VAR_5 = VAR_2->expr_simple_type;
 *VAR_6 = VAR_2->expr_simple_typmod;





 VAR_10 = VAR_1->paramLI->parserSetupArg;

 VAR_7->ecxt_param_list_info = FUNC_13(VAR_1, VAR_2);






 if (VAR_2->expr_simple_lxid != VAR_8)
 {
  VAR_11 = FUNC_5(VAR_1->simple_eval_estate->es_query_cxt);
  VAR_2->expr_simple_state =
   FUNC_3(VAR_2->expr_simple_expr,
           VAR_7->ecxt_param_list_info);
  VAR_2->expr_simple_in_use = 0;
  VAR_2->expr_simple_lxid = VAR_8;
  FUNC_5(VAR_11);
 }







 VAR_11 = FUNC_5(FUNC_12(VAR_1));
 if (!VAR_1->readonly_func)
 {
  FUNC_1();
  FUNC_7(FUNC_4());
 }




 VAR_2->expr_simple_in_use = 1;




 *VAR_3 = FUNC_2(VAR_2->expr_simple_state,
         VAR_7,
         VAR_4);


 VAR_2->expr_simple_in_use = 0;

 VAR_7->ecxt_param_list_info = ((void*)0);

 VAR_1->paramLI->parserSetupArg = VAR_10;

 if (!VAR_1->readonly_func)
  FUNC_6();

 FUNC_5(VAR_11);




 FUNC_8(VAR_9, 1);




 return 1;
}
