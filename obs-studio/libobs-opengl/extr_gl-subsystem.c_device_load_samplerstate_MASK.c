
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int gs_samplerstate_t ;
struct TYPE_4__ {int ** cur_samplers; int cur_pixel_shader; } ;
typedef TYPE_1__ gs_device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_1__*,int *,int) ;

void FUNC_2(gs_device_t *VAR_1, gs_samplerstate_t *VAR_2,
         int VAR_3)
{

 if (!VAR_1->cur_pixel_shader)
  VAR_2 = ((void*)0);

 if (VAR_1->cur_samplers[VAR_3] == VAR_2)
  return;

 VAR_1->cur_samplers[VAR_3] = VAR_2;

 if (!VAR_2)
  return;

 if (!FUNC_1(VAR_1, VAR_2, VAR_3))
  FUNC_0(VAR_0, "device_load_samplerstate (GL) failed");

 return;
}
