
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_3__ {int cur_render_target; int cur_swap; int cur_vertex_buffer; int cur_pixel_shader; int cur_vertex_shader; } ;
typedef TYPE_1__ gs_device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static inline bool FUNC_1(const gs_device_t *VAR_1, uint32_t VAR_2)
{
 if (!VAR_1->cur_vertex_shader) {
  FUNC_0(VAR_0, "No vertex shader specified");
  return 0;
 }

 if (!VAR_1->cur_pixel_shader) {
  FUNC_0(VAR_0, "No pixel shader specified");
  return 0;
 }

 if (!VAR_1->cur_vertex_buffer && (VAR_2 == 0)) {
  FUNC_0(VAR_0, "No vertex buffer specified");
  return 0;
 }

 if (!VAR_1->cur_swap && !VAR_1->cur_render_target) {
  FUNC_0(VAR_0, "No active swap chain or render target");
  return 0;
 }

 return 1;
}
