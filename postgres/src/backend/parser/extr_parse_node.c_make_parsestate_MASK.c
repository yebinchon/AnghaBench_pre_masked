
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int p_next_resno; int p_resolve_unknowns; int p_queryEnv; int p_ref_hook_state; int p_coerce_param_hook; int p_paramref_hook; int p_post_columnref_hook; int p_pre_columnref_hook; int p_sourcetext; struct TYPE_5__* parentParseState; } ;
typedef TYPE_1__ ParseState ;


 TYPE_1__* FUNC_0 (int) ;

ParseState *
FUNC_1(ParseState *VAR_0)
{
 ParseState *VAR_1;

 VAR_1 = FUNC_0(sizeof(ParseState));

 VAR_1->parentParseState = VAR_0;


 VAR_1->p_next_resno = 1;
 VAR_1->p_resolve_unknowns = 1;

 if (VAR_0)
 {
  VAR_1->p_sourcetext = VAR_0->p_sourcetext;

  VAR_1->p_pre_columnref_hook = VAR_0->p_pre_columnref_hook;
  VAR_1->p_post_columnref_hook = VAR_0->p_post_columnref_hook;
  VAR_1->p_paramref_hook = VAR_0->p_paramref_hook;
  VAR_1->p_coerce_param_hook = VAR_0->p_coerce_param_hook;
  VAR_1->p_ref_hook_state = VAR_0->p_ref_hook_state;

  VAR_1->p_queryEnv = VAR_0->p_queryEnv;
 }

 return VAR_1;
}
