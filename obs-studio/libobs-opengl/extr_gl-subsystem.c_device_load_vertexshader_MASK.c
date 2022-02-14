
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ type; } ;
typedef TYPE_1__ gs_shader_t ;
struct TYPE_6__ {TYPE_1__* cur_vertex_shader; } ;
typedef TYPE_2__ gs_device_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;

void FUNC_1(gs_device_t *VAR_2, gs_shader_t *VAR_3)
{
 if (VAR_2->cur_vertex_shader == VAR_3)
  return;

 if (VAR_3 && VAR_3->type != VAR_0) {
  FUNC_0(VAR_1, "Specified shader is not a vertex shader");
  FUNC_0(VAR_1, "device_load_vertexshader (GL) failed");
  return;
 }

 VAR_2->cur_vertex_shader = VAR_3;
}
