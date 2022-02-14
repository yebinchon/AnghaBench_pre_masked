
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ magic; int is_complete; int is_oneshot; int num_params; int is_saved; int num_custom_plans; int total_custom_cost; int generic_cost; int generation; int is_valid; int * gplan; int dependsOnRLS; int rewriteRowSecurity; int rewriteRoleId; void* query_context; scalar_t__ search_path; void* invalItems; void* relationOids; void* query_list; void* context; int * resultDesc; int fixed_result; int cursor_options; int parserSetupArg; int parserSetup; int * param_types; int commandTag; int query_string; void* raw_parse_tree; } ;
typedef int Oid ;
typedef void* MemoryContext ;
typedef TYPE_1__ CachedPlanSource ;


 int VAR_0 ;
 void* FUNC_0 (void*,char*,int ) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int * FUNC_3 (int *) ;
 void* VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (void*,int ) ;
 void* FUNC_5 (void*) ;
 void* FUNC_6 (void*) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int *,int *,int) ;
 scalar_t__ FUNC_9 (int) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (int ) ;

CachedPlanSource *
FUNC_12(CachedPlanSource *VAR_4)
{
 CachedPlanSource *VAR_5;
 MemoryContext VAR_6;
 MemoryContext VAR_7;
 MemoryContext VAR_8;

 FUNC_1(VAR_4->magic == VAR_1);
 FUNC_1(VAR_4->is_complete);





 if (VAR_4->is_oneshot)
  FUNC_7(VAR_3, "cannot copy a one-shot cached plan");

 VAR_6 = FUNC_0(VAR_2,
             "CachedPlanSource",
             VAR_0);

 VAR_8 = FUNC_5(VAR_6);

 VAR_5 = (CachedPlanSource *) FUNC_10(sizeof(CachedPlanSource));
 VAR_5->magic = VAR_1;
 VAR_5->raw_parse_tree = FUNC_6(VAR_4->raw_parse_tree);
 VAR_5->query_string = FUNC_11(VAR_4->query_string);
 FUNC_4(VAR_6, VAR_5->query_string);
 VAR_5->commandTag = VAR_4->commandTag;
 if (VAR_4->num_params > 0)
 {
  VAR_5->param_types = (Oid *)
   FUNC_9(VAR_4->num_params * sizeof(Oid));
  FUNC_8(VAR_5->param_types, VAR_4->param_types,
      VAR_4->num_params * sizeof(Oid));
 }
 else
  VAR_5->param_types = ((void*)0);
 VAR_5->num_params = VAR_4->num_params;
 VAR_5->parserSetup = VAR_4->parserSetup;
 VAR_5->parserSetupArg = VAR_4->parserSetupArg;
 VAR_5->cursor_options = VAR_4->cursor_options;
 VAR_5->fixed_result = VAR_4->fixed_result;
 if (VAR_4->resultDesc)
  VAR_5->resultDesc = FUNC_3(VAR_4->resultDesc);
 else
  VAR_5->resultDesc = ((void*)0);
 VAR_5->context = VAR_6;

 VAR_7 = FUNC_0(VAR_6,
             "CachedPlanQuery",
             VAR_0);
 FUNC_5(VAR_7);
 VAR_5->query_list = FUNC_6(VAR_4->query_list);
 VAR_5->relationOids = FUNC_6(VAR_4->relationOids);
 VAR_5->invalItems = FUNC_6(VAR_4->invalItems);
 if (VAR_4->search_path)
  VAR_5->search_path = FUNC_2(VAR_4->search_path);
 VAR_5->query_context = VAR_7;
 VAR_5->rewriteRoleId = VAR_4->rewriteRoleId;
 VAR_5->rewriteRowSecurity = VAR_4->rewriteRowSecurity;
 VAR_5->dependsOnRLS = VAR_4->dependsOnRLS;

 VAR_5->gplan = ((void*)0);

 VAR_5->is_oneshot = 0;
 VAR_5->is_complete = 1;
 VAR_5->is_saved = 0;
 VAR_5->is_valid = VAR_4->is_valid;
 VAR_5->generation = VAR_4->generation;


 VAR_5->generic_cost = VAR_4->generic_cost;
 VAR_5->total_custom_cost = VAR_4->total_custom_cost;
 VAR_5->num_custom_plans = VAR_4->num_custom_plans;

 FUNC_5(VAR_8);

 return VAR_5;
}
