
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct vec3 {int dummy; } ;
struct vec2 {int dummy; } ;
struct gs_vb_data {int num; int num_tex; TYPE_1__* tvarray; void* colors; void* normals; void* points; } ;
struct gs_tvertarray {int dummy; } ;
struct TYPE_4__ {int (* device_vertexbuffer_create ) (int ,struct gs_vb_data*,int ) ;} ;
struct graphics_subsystem {int immediate_vertbuffer; int device; TYPE_2__ exports; } ;
struct TYPE_3__ {int width; void* array; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 struct gs_vb_data* FUNC_1 () ;
 int FUNC_2 (int ,struct gs_vb_data*,int ) ;

__attribute__((used)) static bool FUNC_3(struct graphics_subsystem *VAR_2)
{
 struct gs_vb_data *VAR_3;

 VAR_3 = FUNC_1();
 VAR_3->num = VAR_1;
 VAR_3->points = FUNC_0(sizeof(struct vec3) * VAR_1);
 VAR_3->normals = FUNC_0(sizeof(struct vec3) * VAR_1);
 VAR_3->colors = FUNC_0(sizeof(uint32_t) * VAR_1);
 VAR_3->num_tex = 1;
 VAR_3->tvarray = FUNC_0(sizeof(struct gs_tvertarray));
 VAR_3->tvarray[0].width = 2;
 VAR_3->tvarray[0].array = FUNC_0(sizeof(struct vec2) * VAR_1);

 VAR_2->immediate_vertbuffer =
  VAR_2->exports.device_vertexbuffer_create(VAR_2->device,
            VAR_3, VAR_0);
 if (!VAR_2->immediate_vertbuffer)
  return 0;

 return 1;
}
