
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* query_string; char const* commandTag; int fixed_result; int rewriteRowSecurity; int dependsOnRLS; int is_oneshot; int is_complete; int is_saved; int is_valid; int generic_cost; scalar_t__ num_custom_plans; scalar_t__ total_custom_cost; scalar_t__ generation; int * gplan; int rewriteRoleId; int * query_context; int * search_path; void* invalItems; void* relationOids; void* query_list; int context; int * resultDesc; scalar_t__ cursor_options; int * parserSetupArg; int * parserSetup; scalar_t__ num_params; int * param_types; int * raw_parse_tree; int magic; } ;
typedef int RawStmt ;
typedef TYPE_1__ CachedPlanSource ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 scalar_t__ FUNC_1 (int) ;

CachedPlanSource *
FUNC_2(RawStmt *VAR_4,
      const char *VAR_5,
      const char *VAR_6)
{
 CachedPlanSource *VAR_7;

 FUNC_0(VAR_5 != ((void*)0));





 VAR_7 = (CachedPlanSource *) FUNC_1(sizeof(CachedPlanSource));
 VAR_7->magic = VAR_0;
 VAR_7->raw_parse_tree = VAR_4;
 VAR_7->query_string = VAR_5;
 VAR_7->commandTag = VAR_6;
 VAR_7->param_types = ((void*)0);
 VAR_7->num_params = 0;
 VAR_7->parserSetup = ((void*)0);
 VAR_7->parserSetupArg = ((void*)0);
 VAR_7->cursor_options = 0;
 VAR_7->fixed_result = 0;
 VAR_7->resultDesc = ((void*)0);
 VAR_7->context = VAR_1;
 VAR_7->query_list = VAR_3;
 VAR_7->relationOids = VAR_3;
 VAR_7->invalItems = VAR_3;
 VAR_7->search_path = ((void*)0);
 VAR_7->query_context = ((void*)0);
 VAR_7->rewriteRoleId = VAR_2;
 VAR_7->rewriteRowSecurity = 0;
 VAR_7->dependsOnRLS = 0;
 VAR_7->gplan = ((void*)0);
 VAR_7->is_oneshot = 1;
 VAR_7->is_complete = 0;
 VAR_7->is_saved = 0;
 VAR_7->is_valid = 0;
 VAR_7->generation = 0;
 VAR_7->generic_cost = -1;
 VAR_7->total_custom_cost = 0;
 VAR_7->num_custom_plans = 0;

 return VAR_7;
}
