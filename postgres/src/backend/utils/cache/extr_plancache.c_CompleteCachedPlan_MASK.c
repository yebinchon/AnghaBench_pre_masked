
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ magic; int is_complete; int num_params; int cursor_options; int fixed_result; int is_valid; int resultDesc; void* parserSetupArg; int parserSetup; int * param_types; int search_path; int rewriteRowSecurity; int rewriteRoleId; int dependsOnRLS; int invalItems; int relationOids; scalar_t__ is_oneshot; int * query_list; int * query_context; int * context; } ;
typedef int ParserSetupHook ;
typedef int Oid ;
typedef int Node ;
typedef int * MemoryContext ;
typedef int List ;
typedef TYPE_1__ CachedPlanSource ;


 int VAR_0 ;
 int * FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;
 int FUNC_9 (int *,int *,int *,int *) ;
 int FUNC_10 (int *,int *,int) ;
 scalar_t__ FUNC_11 (int) ;
 int VAR_3 ;

void
FUNC_12(CachedPlanSource *VAR_4,
       List *VAR_5,
       MemoryContext VAR_6,
       Oid *VAR_7,
       int VAR_8,
       ParserSetupHook VAR_9,
       void *VAR_10,
       int VAR_11,
       bool VAR_12)
{
 MemoryContext VAR_13 = VAR_4->context;
 MemoryContext VAR_14 = VAR_2;


 FUNC_1(VAR_4->magic == VAR_1);
 FUNC_1(!VAR_4->is_complete);
 if (VAR_4->is_oneshot)
 {
  VAR_6 = VAR_2;
 }
 else if (VAR_6 != ((void*)0))
 {
  FUNC_5(VAR_6, VAR_13);
  FUNC_6(VAR_6);
 }
 else
 {

  VAR_6 = FUNC_0(VAR_13,
              "CachedPlanQuery",
              VAR_0);
  FUNC_6(VAR_6);
  VAR_5 = FUNC_8(VAR_5);
 }

 VAR_4->query_context = VAR_6;
 VAR_4->query_list = VAR_5;

 if (!VAR_4->is_oneshot && !FUNC_4(VAR_4))
 {






  FUNC_9((Node *) VAR_5,
           &VAR_4->relationOids,
           &VAR_4->invalItems,
           &VAR_4->dependsOnRLS);


  VAR_4->rewriteRoleId = FUNC_3();
  VAR_4->rewriteRowSecurity = VAR_3;
  VAR_4->search_path = FUNC_2(VAR_6);
 }






 FUNC_6(VAR_13);

 if (VAR_8 > 0)
 {
  VAR_4->param_types = (Oid *) FUNC_11(VAR_8 * sizeof(Oid));
  FUNC_10(VAR_4->param_types, VAR_7, VAR_8 * sizeof(Oid));
 }
 else
  VAR_4->param_types = ((void*)0);
 VAR_4->num_params = VAR_8;
 VAR_4->parserSetup = VAR_9;
 VAR_4->parserSetupArg = VAR_10;
 VAR_4->cursor_options = VAR_11;
 VAR_4->fixed_result = VAR_12;
 VAR_4->resultDesc = FUNC_7(VAR_5);

 FUNC_6(VAR_14);

 VAR_4->is_complete = 1;
 VAR_4->is_valid = 1;
}
