
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ParseState {void* p_ref_hook_state; int p_paramref_hook; int p_post_columnref_hook; int p_pre_columnref_hook; } ;
typedef int PLpgSQL_expr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void
FUNC_0(struct ParseState *VAR_3, PLpgSQL_expr *VAR_4)
{
 VAR_3->p_pre_columnref_hook = VAR_2;
 VAR_3->p_post_columnref_hook = VAR_1;
 VAR_3->p_paramref_hook = VAR_0;

 VAR_3->p_ref_hook_state = (void *) VAR_4;
}
