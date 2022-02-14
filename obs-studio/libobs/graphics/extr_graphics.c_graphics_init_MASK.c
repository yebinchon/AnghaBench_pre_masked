
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct matrix4 {int dummy; } ;
struct TYPE_4__ {int (* device_leave_context ) (int ) ;int (* device_blend_function_separate ) (int ,int ,void*,int ,void*) ;int (* device_enter_context ) (int ) ;} ;
struct TYPE_3__ {int enabled; void* dest_a; int src_a; void* dest_c; int src_c; } ;
struct graphics_subsystem {int device; TYPE_2__ exports; TYPE_1__ cur_blend_state; int effect_mutex; int mutex; int matrix_stack; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct matrix4*) ;
 int FUNC_1 (struct graphics_subsystem*) ;
 int FUNC_2 (struct graphics_subsystem*) ;
 int FUNC_3 () ;
 int FUNC_4 (struct matrix4*) ;
 scalar_t__ FUNC_5 (int *,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,void*,int ,void*) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static bool FUNC_9(struct graphics_subsystem *VAR_3)
{
 struct matrix4 VAR_4;

 FUNC_4(&VAR_4);
 FUNC_0(VAR_3->matrix_stack, &VAR_4);

 VAR_3->exports.device_enter_context(VAR_3->device);

 if (!FUNC_1(VAR_3))
  return 0;
 if (!FUNC_2(VAR_3))
  return 0;
 if (FUNC_5(&VAR_3->mutex, ((void*)0)) != 0)
  return 0;
 if (FUNC_5(&VAR_3->effect_mutex, ((void*)0)) != 0)
  return 0;

 VAR_3->exports.device_blend_function_separate(
  VAR_3->device, VAR_2, VAR_0,
  VAR_1, VAR_0);
 VAR_3->cur_blend_state.enabled = 1;
 VAR_3->cur_blend_state.src_c = VAR_2;
 VAR_3->cur_blend_state.dest_c = VAR_0;
 VAR_3->cur_blend_state.src_a = VAR_1;
 VAR_3->cur_blend_state.dest_a = VAR_0;

 VAR_3->exports.device_leave_context(VAR_3->device);

 FUNC_3();
 return 1;
}
