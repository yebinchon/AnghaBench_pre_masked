
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t num; scalar_t__ array; } ;
struct gl_shader_parser {int parser; int gl_string; TYPE_1__ texture_samplers; TYPE_1__ attribs; } ;


 int FUNC_0 (TYPE_1__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static inline void FUNC_4(struct gl_shader_parser *VAR_0)
{
 size_t VAR_1;
 for (VAR_1 = 0; VAR_1 < VAR_0->attribs.num; VAR_1++)
  FUNC_2(VAR_0->attribs.array + VAR_1);

 FUNC_0(VAR_0->attribs);
 FUNC_0(VAR_0->texture_samplers);
 FUNC_1(&VAR_0->gl_string);
 FUNC_3(&VAR_0->parser);
}
