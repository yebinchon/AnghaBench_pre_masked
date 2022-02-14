
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct vec3 {int dummy; } ;
struct gs_vb_data {size_t num_tex; int num; struct gs_tvertarray* tvarray; scalar_t__ colors; scalar_t__ tangents; scalar_t__ normals; scalar_t__ points; } ;
struct gs_tvertarray {int width; scalar_t__ array; } ;
struct TYPE_6__ {scalar_t__* array; } ;
struct TYPE_7__ {TYPE_2__ uv_buffers; scalar_t__ color_buffer; scalar_t__ tangent_buffer; scalar_t__ normal_buffer; scalar_t__ vertex_buffer; int dynamic; TYPE_1__* data; } ;
typedef TYPE_3__ gs_vertbuffer_t ;
struct TYPE_5__ {size_t num_tex; } ;
typedef scalar_t__ GLuint ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,scalar_t__,scalar_t__,size_t) ;

__attribute__((used)) static inline void FUNC_2(gs_vertbuffer_t *VAR_2,
        const struct gs_vb_data *VAR_3)
{
 size_t VAR_4;
 size_t VAR_5 = VAR_3->num_tex < VAR_2->data->num_tex ? VAR_3->num_tex
          : VAR_2->data->num_tex;

 if (!VAR_2->dynamic) {
  FUNC_0(VAR_1, "vertex buffer is not dynamic");
  goto failed;
 }

 if (VAR_3->points) {
  if (!FUNC_1(VAR_0, VAR_2->vertex_buffer,
       VAR_3->points,
       VAR_3->num * sizeof(struct vec3)))
   goto failed;
 }

 if (VAR_2->normal_buffer && VAR_3->normals) {
  if (!FUNC_1(VAR_0, VAR_2->normal_buffer,
       VAR_3->normals,
       VAR_3->num * sizeof(struct vec3)))
   goto failed;
 }

 if (VAR_2->tangent_buffer && VAR_3->tangents) {
  if (!FUNC_1(VAR_0, VAR_2->tangent_buffer,
       VAR_3->tangents,
       VAR_3->num * sizeof(struct vec3)))
   goto failed;
 }

 if (VAR_2->color_buffer && VAR_3->colors) {
  if (!FUNC_1(VAR_0, VAR_2->color_buffer,
       VAR_3->colors, VAR_3->num * sizeof(uint32_t)))
   goto failed;
 }

 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) {
  GLuint VAR_6 = VAR_2->uv_buffers.array[VAR_4];
  struct gs_tvertarray *VAR_7 = VAR_3->tvarray + VAR_4;
  size_t VAR_8 = VAR_3->num * VAR_7->width * sizeof(float);

  if (!FUNC_1(VAR_0, VAR_6, VAR_7->array, VAR_8))
   goto failed;
 }

 return;

failed:
 FUNC_0(VAR_1, "gs_vertexbuffer_flush (GL) failed");
}
