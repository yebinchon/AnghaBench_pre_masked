
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct vec3 {int dummy; } ;
struct gs_vertex_buffer {int vertex_buffer; int normal_buffer; int tangent_buffer; int color_buffer; int vao; TYPE_1__* data; scalar_t__ dynamic; int uv_sizes; int uv_buffers; } ;
struct gs_tvertarray {int width; scalar_t__ array; } ;
struct TYPE_2__ {int num; size_t num_tex; struct gs_tvertarray* tvarray; scalar_t__ colors; scalar_t__ tangents; scalar_t__ normals; scalar_t__ points; } ;
typedef int GLuint ;
typedef int GLenum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int*) ;
 int FUNC_1 (int ,size_t) ;
 int FUNC_2 (int ,int*,size_t,scalar_t__,int ) ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static bool FUNC_5(struct gs_vertex_buffer *VAR_3)
{
 GLenum VAR_4 = VAR_3->dynamic ? VAR_2 : VAR_1;
 size_t VAR_5;

 if (!FUNC_2(VAR_0, &VAR_3->vertex_buffer,
         VAR_3->data->num * sizeof(struct vec3),
         VAR_3->data->points, VAR_4))
  return 0;

 if (VAR_3->data->normals) {
  if (!FUNC_2(VAR_0, &VAR_3->normal_buffer,
          VAR_3->data->num * sizeof(struct vec3),
          VAR_3->data->normals, VAR_4))
   return 0;
 }

 if (VAR_3->data->tangents) {
  if (!FUNC_2(VAR_0, &VAR_3->tangent_buffer,
          VAR_3->data->num * sizeof(struct vec3),
          VAR_3->data->tangents, VAR_4))
   return 0;
 }

 if (VAR_3->data->colors) {
  if (!FUNC_2(VAR_0, &VAR_3->color_buffer,
          VAR_3->data->num * sizeof(uint32_t),
          VAR_3->data->colors, VAR_4))
   return 0;
 }

 FUNC_1(VAR_3->uv_buffers, VAR_3->data->num_tex);
 FUNC_1(VAR_3->uv_sizes, VAR_3->data->num_tex);

 for (VAR_5 = 0; VAR_5 < VAR_3->data->num_tex; VAR_5++) {
  GLuint VAR_6;
  struct gs_tvertarray *VAR_7 = VAR_3->data->tvarray + VAR_5;
  size_t VAR_8 = VAR_3->data->num * sizeof(float) * VAR_7->width;

  if (!FUNC_2(VAR_0, &VAR_6, VAR_8,
          VAR_7->array, VAR_4))
   return 0;

  FUNC_0(VAR_3->uv_buffers, &VAR_6);
  FUNC_0(VAR_3->uv_sizes, &VAR_7->width);
 }

 if (!VAR_3->dynamic) {
  FUNC_4(VAR_3->data);
  VAR_3->data = ((void*)0);
 }

 if (!FUNC_3(1, &VAR_3->vao))
  return 0;

 return 1;
}
