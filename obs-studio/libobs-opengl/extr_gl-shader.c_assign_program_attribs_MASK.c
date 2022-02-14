
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct shader_attrib {int dummy; } ;
struct TYPE_2__ {size_t num; struct shader_attrib* array; } ;
struct gs_shader {TYPE_1__ attribs; } ;
struct gs_program {struct gs_shader* vertex_shader; } ;


 int FUNC_0 (struct gs_program*,struct shader_attrib*) ;

__attribute__((used)) static inline bool FUNC_1(struct gs_program *VAR_0)
{
 struct gs_shader *VAR_1 = VAR_0->vertex_shader;

 for (size_t VAR_2 = 0; VAR_2 < VAR_1->attribs.num; VAR_2++) {
  struct shader_attrib *VAR_3 = VAR_1->attribs.array + VAR_2;
  if (!FUNC_0(VAR_0, VAR_3))
   return 0;
 }

 return 1;
}
