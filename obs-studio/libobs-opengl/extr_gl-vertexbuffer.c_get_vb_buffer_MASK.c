
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {size_t num; int * array; } ;
struct TYPE_3__ {scalar_t__* array; } ;
struct gs_vertex_buffer {TYPE_2__ uv_buffers; TYPE_1__ uv_sizes; int color_buffer; int tangent_buffer; int normal_buffer; int vertex_buffer; } ;
typedef enum attrib_type { ____Placeholder_attrib_type } attrib_type ;
typedef int GLuint ;
typedef int GLint ;
typedef int GLenum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static inline GLuint FUNC_0(struct gs_vertex_buffer *VAR_7,
       enum attrib_type VAR_8, size_t VAR_9,
       GLint *VAR_10, GLenum *VAR_11)
{
 *VAR_11 = VAR_5;
 *VAR_10 = 4;

 if (VAR_8 == VAR_2) {
  return VAR_7->vertex_buffer;
 } else if (VAR_8 == VAR_1) {
  return VAR_7->normal_buffer;
 } else if (VAR_8 == VAR_3) {
  return VAR_7->tangent_buffer;
 } else if (VAR_8 == VAR_0) {
  *VAR_11 = VAR_6;
  return VAR_7->color_buffer;
 } else if (VAR_8 == VAR_4) {
  if (VAR_7->uv_buffers.num <= VAR_9)
   return 0;

  *VAR_10 = (GLint)VAR_7->uv_sizes.array[VAR_9];
  return VAR_7->uv_buffers.array[VAR_9];
 }

 return 0;
}
