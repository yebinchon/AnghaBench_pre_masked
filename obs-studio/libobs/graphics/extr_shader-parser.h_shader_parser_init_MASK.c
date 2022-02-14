
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shader_parser {int funcs; int samplers; int structs; int params; int cfp; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline void FUNC_2(struct shader_parser *VAR_0)
{
 FUNC_0(&VAR_0->cfp);

 FUNC_1(VAR_0->params);
 FUNC_1(VAR_0->structs);
 FUNC_1(VAR_0->samplers);
 FUNC_1(VAR_0->funcs);
}
