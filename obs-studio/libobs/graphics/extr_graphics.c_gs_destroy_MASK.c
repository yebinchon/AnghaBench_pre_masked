
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct gs_effect {struct gs_effect* next; } ;
struct TYPE_7__ {int (* device_destroy ) (scalar_t__) ;int (* gs_vertexbuffer_destroy ) (int ) ;int (* device_enter_context ) (scalar_t__) ;} ;
struct TYPE_8__ {scalar_t__ module; int blend_state_stack; int viewport_stack; int matrix_stack; int effect_mutex; int mutex; scalar_t__ device; TYPE_1__ exports; int immediate_vertbuffer; int sprite_buffer; struct gs_effect* first_effect; } ;
typedef TYPE_2__ graphics_t ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct gs_effect*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_2__*,char*) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (scalar_t__) ;
 TYPE_2__* VAR_0 ;

void FUNC_12(graphics_t *VAR_1)
{
 if (!FUNC_7(VAR_1, "gs_destroy"))
  return;

 while (VAR_0)
  FUNC_4();

 if (VAR_1->device) {
  struct gs_effect *VAR_2 = VAR_1->first_effect;

  VAR_0 = VAR_1;
  VAR_1->exports.device_enter_context(VAR_1->device);

  while (VAR_2) {
   struct gs_effect *VAR_3 = VAR_2->next;
   FUNC_2(VAR_2);
   VAR_2 = VAR_3;
  }

  VAR_1->exports.gs_vertexbuffer_destroy(
   VAR_1->sprite_buffer);
  VAR_1->exports.gs_vertexbuffer_destroy(
   VAR_1->immediate_vertbuffer);
  VAR_1->exports.device_destroy(VAR_1->device);

  VAR_0 = ((void*)0);
 }

 FUNC_6(&VAR_1->mutex);
 FUNC_6(&VAR_1->effect_mutex);
 FUNC_1(VAR_1->matrix_stack);
 FUNC_1(VAR_1->viewport_stack);
 FUNC_1(VAR_1->blend_state_stack);
 if (VAR_1->module)
  FUNC_5(VAR_1->module);
 FUNC_0(VAR_1);

 FUNC_3();
}
