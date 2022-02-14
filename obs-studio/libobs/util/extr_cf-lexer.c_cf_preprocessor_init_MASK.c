
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cf_preprocessor {int ignore_state; int * ed; int * lex; int tokens; int dependencies; int sys_include_dirs; int defines; } ;


 int FUNC_0 (int ) ;

void FUNC_1(struct cf_preprocessor *VAR_0)
{
 FUNC_0(VAR_0->defines);
 FUNC_0(VAR_0->sys_include_dirs);
 FUNC_0(VAR_0->dependencies);
 FUNC_0(VAR_0->tokens);
 VAR_0->lex = ((void*)0);
 VAR_0->ed = ((void*)0);
 VAR_0->ignore_state = 0;
}
