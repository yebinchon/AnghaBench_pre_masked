
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ParseState {void* p_ref_hook_state; int p_paramref_hook; int p_post_columnref_hook; int * p_pre_columnref_hook; } ;
typedef scalar_t__ SQLFunctionParseInfoPtr ;


 int VAR_0 ;
 int VAR_1 ;

void
FUNC_0(struct ParseState *VAR_2, SQLFunctionParseInfoPtr VAR_3)
{
 VAR_2->p_pre_columnref_hook = ((void*)0);
 VAR_2->p_post_columnref_hook = VAR_1;
 VAR_2->p_paramref_hook = VAR_0;

 VAR_2->p_ref_hook_state = (void *) VAR_3;
}
