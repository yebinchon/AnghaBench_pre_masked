
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vec3 {int dummy; } ;
struct vec2 {int dummy; } ;
struct gs_vb_data {int num; int num_tex; TYPE_1__* tvarray; void* points; } ;
struct gs_tvertarray {int dummy; } ;
struct TYPE_4__ {int (* device_vertexbuffer_create ) (int ,struct gs_vb_data*,int ) ;} ;
struct graphics_subsystem {int sprite_buffer; int device; TYPE_2__ exports; } ;
struct TYPE_3__ {int width; void* array; } ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 struct gs_vb_data* FUNC_1 () ;
 int FUNC_2 (void*,int ,int) ;
 int FUNC_3 (int ,struct gs_vb_data*,int ) ;

__attribute__((used)) static bool FUNC_4(struct graphics_subsystem *VAR_1)
{
 struct gs_vb_data *VAR_2;

 VAR_2 = FUNC_1();
 VAR_2->num = 4;
 VAR_2->points = FUNC_0(sizeof(struct vec3) * 4);
 VAR_2->num_tex = 1;
 VAR_2->tvarray = FUNC_0(sizeof(struct gs_tvertarray));
 VAR_2->tvarray[0].width = 2;
 VAR_2->tvarray[0].array = FUNC_0(sizeof(struct vec2) * 4);

 FUNC_2(VAR_2->points, 0, sizeof(struct vec3) * 4);
 FUNC_2(VAR_2->tvarray[0].array, 0, sizeof(struct vec2) * 4);

 VAR_1->sprite_buffer = VAR_1->exports.device_vertexbuffer_create(
  VAR_1->device, VAR_2, VAR_0);
 if (!VAR_1->sprite_buffer)
  return 0;

 return 1;
}
