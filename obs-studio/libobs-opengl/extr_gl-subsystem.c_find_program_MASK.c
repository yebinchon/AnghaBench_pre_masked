
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gs_program {scalar_t__ vertex_shader; scalar_t__ pixel_shader; struct gs_program* next; } ;
struct gs_device {scalar_t__ cur_vertex_shader; scalar_t__ cur_pixel_shader; struct gs_program* first_program; } ;



__attribute__((used)) static inline struct gs_program *FUNC_0(const struct gs_device *VAR_0)
{
 struct gs_program *VAR_1 = VAR_0->first_program;

 while (VAR_1) {
  if (VAR_1->vertex_shader == VAR_0->cur_vertex_shader &&
      VAR_1->pixel_shader == VAR_0->cur_pixel_shader)
   return VAR_1;

  VAR_1 = VAR_1->next;
 }

 return ((void*)0);
}
