
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct effect_parser {int cfp; int * cur_pass; int tokens; int files; int techniques; int samplers; int funcs; int structs; int params; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline void FUNC_2(struct effect_parser *VAR_0)
{
 FUNC_1(VAR_0->params);
 FUNC_1(VAR_0->structs);
 FUNC_1(VAR_0->funcs);
 FUNC_1(VAR_0->samplers);
 FUNC_1(VAR_0->techniques);
 FUNC_1(VAR_0->files);
 FUNC_1(VAR_0->tokens);

 VAR_0->cur_pass = ((void*)0);
 FUNC_0(&VAR_0->cfp);
}
