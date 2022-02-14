
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t num; scalar_t__ array; } ;
struct shader_func {TYPE_1__ params; } ;
struct gl_shader_parser {int gl_string; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct gl_shader_parser*,scalar_t__,int,char*) ;

__attribute__((used)) static inline void FUNC_2(struct gl_shader_parser *VAR_0,
       struct shader_func *VAR_1)
{
 size_t VAR_2;
 for (VAR_2 = 0; VAR_2 < VAR_1->params.num; VAR_2++)
  FUNC_1(VAR_0, VAR_1->params.array + VAR_2, 1,
         "inputval_");
 FUNC_0(&VAR_0->gl_string, "\n");
}
