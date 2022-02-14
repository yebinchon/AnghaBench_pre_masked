
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gs_shader {int dummy; } ;
struct TYPE_2__ {size_t num; struct gl_parser_attrib* array; } ;
struct gl_shader_parser {TYPE_1__ attribs; } ;
struct gl_parser_attrib {int dummy; } ;


 int FUNC_0 (struct gs_shader*,struct gl_parser_attrib*) ;

__attribute__((used)) static inline bool FUNC_1(struct gs_shader *VAR_0,
          struct gl_shader_parser *VAR_1)
{
 size_t VAR_2;
 for (VAR_2 = 0; VAR_2 < VAR_1->attribs.num; VAR_2++) {
  struct gl_parser_attrib *VAR_3 = VAR_1->attribs.array + VAR_2;
  if (!FUNC_0(VAR_0, VAR_3))
   return 0;
 }

 return 1;
}
