
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* commandTag; int fixed_result; int rewriteRowSecurity; int dependsOnRLS; int is_oneshot; int is_complete; int is_saved; int is_valid; int generic_cost; scalar_t__ num_custom_plans; scalar_t__ total_custom_cost; scalar_t__ generation; int * gplan; int rewriteRoleId; int * query_context; int * search_path; void* invalItems; void* relationOids; void* query_list; int context; int * resultDesc; scalar_t__ cursor_options; int * parserSetupArg; int * parserSetup; scalar_t__ num_params; int * param_types; int query_string; int raw_parse_tree; int magic; } ;
typedef int RawStmt ;
typedef int MemoryContext ;
typedef TYPE_1__ CachedPlanSource ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 void* VAR_4 ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (char const*) ;

CachedPlanSource *
FUNC_7(RawStmt *VAR_5,
     const char *VAR_6,
     const char *VAR_7)
{
 CachedPlanSource *VAR_8;
 MemoryContext VAR_9;
 MemoryContext VAR_10;

 FUNC_1(VAR_6 != ((void*)0));
 VAR_9 = FUNC_0(VAR_2,
             "CachedPlanSource",
             VAR_0);





 VAR_10 = FUNC_3(VAR_9);

 VAR_8 = (CachedPlanSource *) FUNC_5(sizeof(CachedPlanSource));
 VAR_8->magic = VAR_1;
 VAR_8->raw_parse_tree = FUNC_4(VAR_5);
 VAR_8->query_string = FUNC_6(VAR_6);
 FUNC_2(VAR_9, VAR_8->query_string);
 VAR_8->commandTag = VAR_7;
 VAR_8->param_types = ((void*)0);
 VAR_8->num_params = 0;
 VAR_8->parserSetup = ((void*)0);
 VAR_8->parserSetupArg = ((void*)0);
 VAR_8->cursor_options = 0;
 VAR_8->fixed_result = 0;
 VAR_8->resultDesc = ((void*)0);
 VAR_8->context = VAR_9;
 VAR_8->query_list = VAR_4;
 VAR_8->relationOids = VAR_4;
 VAR_8->invalItems = VAR_4;
 VAR_8->search_path = ((void*)0);
 VAR_8->query_context = ((void*)0);
 VAR_8->rewriteRoleId = VAR_3;
 VAR_8->rewriteRowSecurity = 0;
 VAR_8->dependsOnRLS = 0;
 VAR_8->gplan = ((void*)0);
 VAR_8->is_oneshot = 0;
 VAR_8->is_complete = 0;
 VAR_8->is_saved = 0;
 VAR_8->is_valid = 0;
 VAR_8->generation = 0;
 VAR_8->generic_cost = -1;
 VAR_8->total_custom_cost = 0;
 VAR_8->num_custom_plans = 0;

 FUNC_3(VAR_10);

 return VAR_8;
}
