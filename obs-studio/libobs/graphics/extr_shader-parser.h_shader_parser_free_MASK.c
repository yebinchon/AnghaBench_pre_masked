
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t num; scalar_t__ array; } ;
struct shader_parser {TYPE_1__ funcs; TYPE_1__ samplers; TYPE_1__ structs; TYPE_1__ params; int cfp; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static inline void FUNC_6(struct shader_parser *VAR_0)
{
 size_t VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->params.num; VAR_1++)
  FUNC_5(VAR_0->params.array + VAR_1);
 for (VAR_1 = 0; VAR_1 < VAR_0->structs.num; VAR_1++)
  FUNC_4(VAR_0->structs.array + VAR_1);
 for (VAR_1 = 0; VAR_1 < VAR_0->samplers.num; VAR_1++)
  FUNC_3(VAR_0->samplers.array + VAR_1);
 for (VAR_1 = 0; VAR_1 < VAR_0->funcs.num; VAR_1++)
  FUNC_2(VAR_0->funcs.array + VAR_1);

 FUNC_0(&VAR_0->cfp);
 FUNC_1(VAR_0->params);
 FUNC_1(VAR_0->structs);
 FUNC_1(VAR_0->samplers);
 FUNC_1(VAR_0->funcs);
}
