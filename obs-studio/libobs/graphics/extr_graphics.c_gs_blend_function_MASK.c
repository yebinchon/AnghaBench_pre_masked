
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int (* device_blend_function ) (int ,int,int) ;} ;
struct TYPE_5__ {int src_c; int dest_c; int src_a; int dest_a; } ;
struct TYPE_7__ {int device; TYPE_2__ exports; TYPE_1__ cur_blend_state; } ;
typedef TYPE_3__ graphics_t ;
typedef enum gs_blend_type { ____Placeholder_gs_blend_type } gs_blend_type ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int,int) ;
 TYPE_3__* VAR_0 ;

void FUNC_2(enum gs_blend_type VAR_1, enum gs_blend_type VAR_2)
{
 graphics_t *VAR_3 = VAR_0;

 if (!FUNC_0("gs_blend_function"))
  return;

 VAR_3->cur_blend_state.src_c = VAR_1;
 VAR_3->cur_blend_state.dest_c = VAR_2;
 VAR_3->cur_blend_state.src_a = VAR_1;
 VAR_3->cur_blend_state.dest_a = VAR_2;
 VAR_3->exports.device_blend_function(VAR_3->device, VAR_1, VAR_2);
}
