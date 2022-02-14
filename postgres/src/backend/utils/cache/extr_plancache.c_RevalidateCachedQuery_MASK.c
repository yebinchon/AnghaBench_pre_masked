
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int * TupleDesc ;
struct TYPE_7__ {int is_valid; scalar_t__ rewriteRoleId; scalar_t__ rewriteRowSecurity; int is_complete; int * query_list; int * query_context; int * context; int * search_path; scalar_t__ dependsOnRLS; int * invalItems; int * relationOids; int * resultDesc; scalar_t__ fixed_result; int num_params; int param_types; int query_string; int parserSetupArg; int * parserSetup; int * raw_parse_tree; TYPE_1__* gplan; scalar_t__ is_oneshot; } ;
struct TYPE_6__ {int is_valid; } ;
typedef int RawStmt ;
typedef int QueryEnvironment ;
typedef int Node ;
typedef int * MemoryContext ;
typedef int List ;
typedef TYPE_2__ CachedPlanSource ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 () ;
 int * FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int) ;
 int * FUNC_4 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 () ;
 scalar_t__ FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int *) ;
 int * FUNC_12 (int *) ;
 int * VAR_4 ;
 int FUNC_13 (int *) ;
 int * FUNC_14 (int *) ;
 int FUNC_15 () ;
 int FUNC_16 (int ) ;
 int FUNC_17 (TYPE_2__*) ;
 void* FUNC_18 (int *) ;
 int FUNC_19 (int *,int *) ;
 int FUNC_20 (int ,int ) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (char*) ;
 int FUNC_23 (int *,int **,int **,scalar_t__*) ;
 int * FUNC_24 (int *,int ,int ,int ,int *) ;
 int * FUNC_25 (int *,int ,int *,int ,int *) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static List *
FUNC_26(CachedPlanSource *VAR_6,
       QueryEnvironment *VAR_7)
{
 bool VAR_8;
 RawStmt *VAR_9;
 List *VAR_10;
 List *VAR_11;
 TupleDesc VAR_12;
 MemoryContext VAR_13;
 MemoryContext VAR_14;
 if (VAR_6->is_oneshot || FUNC_9(VAR_6))
 {
  FUNC_3(VAR_6->is_valid);
  return VAR_4;
 }






 if (VAR_6->is_valid)
 {
  FUNC_3(VAR_6->search_path != ((void*)0));
  if (!FUNC_13(VAR_6->search_path))
  {

   VAR_6->is_valid = 0;
   if (VAR_6->gplan)
    VAR_6->gplan->is_valid = 0;
  }
 }





 if (VAR_6->is_valid && VAR_6->dependsOnRLS &&
  (VAR_6->rewriteRoleId != FUNC_8() ||
   VAR_6->rewriteRowSecurity != VAR_5))
  VAR_6->is_valid = 0;






 if (VAR_6->is_valid)
 {
  FUNC_0(VAR_6->query_list, 1);





  if (VAR_6->is_valid)
  {

   return VAR_4;
  }


  FUNC_0(VAR_6->query_list, 0);
 }






 VAR_6->is_valid = 0;
 VAR_6->query_list = VAR_4;
 VAR_6->relationOids = VAR_4;
 VAR_6->invalItems = VAR_4;
 VAR_6->search_path = ((void*)0);







 if (VAR_6->query_context)
 {
  MemoryContext VAR_15 = VAR_6->query_context;

  VAR_6->query_context = ((void*)0);
  FUNC_10(VAR_15);
 }


 FUNC_17(VAR_6);





 FUNC_3(VAR_6->is_complete);
 VAR_8 = 0;
 if (!FUNC_1())
 {
  FUNC_16(FUNC_7());
  VAR_8 = 1;
 }






 VAR_9 = FUNC_18(VAR_6->raw_parse_tree);
 if (VAR_9 == ((void*)0))
  VAR_10 = VAR_4;
 else if (VAR_6->parserSetup != ((void*)0))
  VAR_10 = FUNC_25(VAR_9,
             VAR_6->query_string,
             VAR_6->parserSetup,
             VAR_6->parserSetupArg,
             VAR_7);
 else
  VAR_10 = FUNC_24(VAR_9,
            VAR_6->query_string,
            VAR_6->param_types,
            VAR_6->num_params,
            VAR_7);


 if (VAR_8)
  FUNC_15();
 VAR_12 = FUNC_14(VAR_10);
 if (VAR_12 == ((void*)0) && VAR_6->resultDesc == ((void*)0))
 {

 }
 else if (VAR_12 == ((void*)0) || VAR_6->resultDesc == ((void*)0) ||
    !FUNC_19(VAR_12, VAR_6->resultDesc))
 {

  if (VAR_6->fixed_result)
   FUNC_20(VAR_3,
     (FUNC_21(VAR_2),
      FUNC_22("cached plan must not change result type")));
  VAR_14 = FUNC_12(VAR_6->context);
  if (VAR_12)
   VAR_12 = FUNC_4(VAR_12);
  if (VAR_6->resultDesc)
   FUNC_5(VAR_6->resultDesc);
  VAR_6->resultDesc = VAR_12;
  FUNC_12(VAR_14);
 }





 VAR_13 = FUNC_2(VAR_1,
             "CachedPlanQuery",
             VAR_0);
 VAR_14 = FUNC_12(VAR_13);

 VAR_11 = FUNC_18(VAR_10);






 FUNC_23((Node *) VAR_11,
          &VAR_6->relationOids,
          &VAR_6->invalItems,
          &VAR_6->dependsOnRLS);


 VAR_6->rewriteRoleId = FUNC_8();
 VAR_6->rewriteRowSecurity = VAR_5;






 VAR_6->search_path = FUNC_6(VAR_13);

 FUNC_12(VAR_14);


 FUNC_11(VAR_13, VAR_6->context);

 VAR_6->query_context = VAR_13;
 VAR_6->query_list = VAR_11;
 VAR_6->is_valid = 1;


 return VAR_10;
}
