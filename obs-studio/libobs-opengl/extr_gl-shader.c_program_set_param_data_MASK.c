
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vec4 {int dummy; } ;
struct vec2 {int dummy; } ;
struct program_param {TYPE_2__* param; int obj; } ;
struct matrix4 {int dummy; } ;
struct gs_program {TYPE_3__* device; } ;
struct TYPE_6__ {int ** cur_samplers; } ;
struct TYPE_4__ {void* array; } ;
struct TYPE_5__ {scalar_t__ type; size_t sampler_id; int texture_id; int texture; int * next_sampler; TYPE_1__ cur_value; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (TYPE_3__*,int ,int ) ;
 int FUNC_1 (int ,int,float*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int,int*) ;
 int FUNC_4 (int ,int,float*) ;
 int FUNC_5 (int ,int,int*) ;
 int FUNC_6 (int ,int,float*) ;
 int FUNC_7 (int ,int,int*) ;
 int FUNC_8 (int ,int,float*) ;
 int FUNC_9 (int ,int,int*) ;
 int FUNC_10 (int ,int,int,float*) ;
 int FUNC_11 (char*) ;
 scalar_t__ FUNC_12 (struct program_param*,int) ;

__attribute__((used)) static void FUNC_13(struct gs_program *VAR_11,
       struct program_param *VAR_12)
{
 void *VAR_13 = VAR_12->param->cur_value.array;

 if (VAR_12->param->type == VAR_0 ||
     VAR_12->param->type == VAR_2) {
  if (FUNC_12(VAR_12, sizeof(int))) {
   FUNC_3(VAR_12->obj, 1, (int *)VAR_13);
   FUNC_11("glUniform1iv");
  }

 } else if (VAR_12->param->type == VAR_3) {
  if (FUNC_12(VAR_12, sizeof(int) * 2)) {
   FUNC_5(VAR_12->obj, 1, (int *)VAR_13);
   FUNC_11("glUniform2iv");
  }

 } else if (VAR_12->param->type == VAR_4) {
  if (FUNC_12(VAR_12, sizeof(int) * 3)) {
   FUNC_7(VAR_12->obj, 1, (int *)VAR_13);
   FUNC_11("glUniform3iv");
  }

 } else if (VAR_12->param->type == VAR_5) {
  if (FUNC_12(VAR_12, sizeof(int) * 4)) {
   FUNC_9(VAR_12->obj, 1, (int *)VAR_13);
   FUNC_11("glUniform4iv");
  }

 } else if (VAR_12->param->type == VAR_1) {
  if (FUNC_12(VAR_12, sizeof(float))) {
   FUNC_1(VAR_12->obj, 1, (float *)VAR_13);
   FUNC_11("glUniform1fv");
  }

 } else if (VAR_12->param->type == VAR_8) {
  if (FUNC_12(VAR_12, sizeof(struct vec2))) {
   FUNC_4(VAR_12->obj, 1, (float *)VAR_13);
   FUNC_11("glUniform2fv");
  }

 } else if (VAR_12->param->type == VAR_9) {
  if (FUNC_12(VAR_12, sizeof(float) * 3)) {
   FUNC_6(VAR_12->obj, 1, (float *)VAR_13);
   FUNC_11("glUniform3fv");
  }

 } else if (VAR_12->param->type == VAR_10) {
  if (FUNC_12(VAR_12, sizeof(struct vec4))) {
   FUNC_8(VAR_12->obj, 1, (float *)VAR_13);
   FUNC_11("glUniform4fv");
  }

 } else if (VAR_12->param->type == VAR_6) {
  if (FUNC_12(VAR_12, sizeof(struct matrix4))) {
   FUNC_10(VAR_12->obj, 1, 0, (float *)VAR_13);
   FUNC_11("glUniformMatrix4fv");
  }

 } else if (VAR_12->param->type == VAR_7) {
  if (VAR_12->param->next_sampler) {
   VAR_11->device->cur_samplers[VAR_12->param->sampler_id] =
    VAR_12->param->next_sampler;
   VAR_12->param->next_sampler = ((void*)0);
  }

  FUNC_2(VAR_12->obj, VAR_12->param->texture_id);
  FUNC_0(VAR_11->device, VAR_12->param->texture,
        VAR_12->param->texture_id);
 }
}
