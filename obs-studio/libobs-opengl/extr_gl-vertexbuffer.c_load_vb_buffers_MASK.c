
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct shader_attrib {int dummy; } ;
struct gs_vertex_buffer {int vao; } ;
struct TYPE_4__ {size_t num; struct shader_attrib* array; } ;
struct gs_shader {TYPE_2__ attribs; } ;
struct TYPE_3__ {int * array; } ;
struct gs_program {TYPE_1__ attribs; struct gs_shader* vertex_shader; } ;
struct gs_index_buffer {int buffer; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct shader_attrib*,struct gs_vertex_buffer*,int ) ;

bool FUNC_3(struct gs_program *VAR_1, struct gs_vertex_buffer *VAR_2,
       struct gs_index_buffer *VAR_3)
{
 struct gs_shader *VAR_4 = VAR_1->vertex_shader;
 size_t VAR_5;

 if (!FUNC_1(VAR_2->vao))
  return 0;

 for (VAR_5 = 0; VAR_5 < VAR_4->attribs.num; VAR_5++) {
  struct shader_attrib *VAR_6 = VAR_4->attribs.array + VAR_5;
  if (!FUNC_2(VAR_6, VAR_2, VAR_1->attribs.array[VAR_5]))
   return 0;
 }

 if (VAR_3 && !FUNC_0(VAR_0, VAR_3->buffer))
  return 0;

 return 1;
}
