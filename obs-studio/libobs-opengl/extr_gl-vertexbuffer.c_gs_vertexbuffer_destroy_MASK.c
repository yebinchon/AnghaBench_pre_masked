
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__* array; scalar_t__ num; } ;
struct TYPE_5__ {int data; TYPE_3__ uv_buffers; TYPE_3__ uv_sizes; scalar_t__ vao; scalar_t__ color_buffer; scalar_t__ tangent_buffer; scalar_t__ normal_buffer; scalar_t__ vertex_buffer; } ;
typedef TYPE_1__ gs_vertbuffer_t ;
typedef int GLsizei ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_3__) ;
 int FUNC_2 (int,scalar_t__*) ;
 int FUNC_3 (int,scalar_t__*) ;
 int FUNC_4 (int ) ;

void FUNC_5(gs_vertbuffer_t *VAR_0)
{
 if (VAR_0) {
  if (VAR_0->vertex_buffer)
   FUNC_2(1, &VAR_0->vertex_buffer);
  if (VAR_0->normal_buffer)
   FUNC_2(1, &VAR_0->normal_buffer);
  if (VAR_0->tangent_buffer)
   FUNC_2(1, &VAR_0->tangent_buffer);
  if (VAR_0->color_buffer)
   FUNC_2(1, &VAR_0->color_buffer);
  if (VAR_0->uv_buffers.num)
   FUNC_2((GLsizei)VAR_0->uv_buffers.num,
       VAR_0->uv_buffers.array);

  if (VAR_0->vao)
   FUNC_3(1, &VAR_0->vao);

  FUNC_1(VAR_0->uv_sizes);
  FUNC_1(VAR_0->uv_buffers);
  FUNC_4(VAR_0->data);

  FUNC_0(VAR_0);
 }
}
