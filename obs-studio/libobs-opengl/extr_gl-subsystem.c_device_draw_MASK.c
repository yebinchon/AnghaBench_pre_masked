
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct gs_vertex_buffer {scalar_t__ num; } ;
struct gs_program {int obj; } ;
struct gs_index_buffer {scalar_t__ width; int gl_type; scalar_t__ num; } ;
typedef int gs_effect_t ;
struct TYPE_6__ {struct gs_vertex_buffer* cur_vertex_buffer; struct gs_index_buffer* cur_index_buffer; struct gs_program* cur_program; int empty_vao; } ;
typedef TYPE_1__ gs_device_t ;
typedef enum gs_draw_mode { ____Placeholder_gs_draw_mode } gs_draw_mode ;
typedef int GLvoid ;
typedef int GLenum ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_1__*,scalar_t__) ;
 int FUNC_2 (int) ;
 struct gs_program* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,scalar_t__,scalar_t__) ;
 int FUNC_5 (int ,scalar_t__,int ,int const*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 () ;
 int FUNC_11 (struct gs_program*,struct gs_vertex_buffer*,struct gs_index_buffer*) ;
 int FUNC_12 (struct gs_program*) ;
 int FUNC_13 (TYPE_1__*) ;

void FUNC_14(gs_device_t *VAR_1, enum gs_draw_mode VAR_2,
   uint32_t VAR_3, uint32_t VAR_4)
{
 struct gs_vertex_buffer *VAR_5 = VAR_1->cur_vertex_buffer;
 struct gs_index_buffer *VAR_6 = VAR_1->cur_index_buffer;
 GLenum VAR_7 = FUNC_2(VAR_2);
 gs_effect_t *VAR_8 = FUNC_10();
 struct gs_program *VAR_9;

 if (!FUNC_1(VAR_1, VAR_4))
  goto fail;

 if (VAR_8)
  FUNC_9(VAR_8);

 VAR_9 = FUNC_3(VAR_1);
 if (!VAR_9)
  goto fail;

 if (VAR_5)
  FUNC_11(VAR_9, VAR_5, VAR_6);
 else
  FUNC_7(VAR_1->empty_vao);

 if (VAR_9 != VAR_1->cur_program && VAR_1->cur_program) {
  FUNC_6(0);
  FUNC_8("glUseProgram (zero)");
 }

 if (VAR_9 != VAR_1->cur_program) {
  VAR_1->cur_program = VAR_9;

  FUNC_6(VAR_9->obj);
  if (!FUNC_8("glUseProgram"))
   goto fail;
 }

 FUNC_13(VAR_1);

 FUNC_12(VAR_9);

 if (VAR_6) {
  if (VAR_4 == 0)
   VAR_4 = (uint32_t)VAR_1->cur_index_buffer->num;
  FUNC_5(VAR_7, VAR_4, VAR_6->gl_type,
          (const GLvoid *)(VAR_3 * VAR_6->width));
  if (!FUNC_8("glDrawElements"))
   goto fail;

 } else {
  if (VAR_4 == 0)
   VAR_4 = (uint32_t)VAR_1->cur_vertex_buffer->num;
  FUNC_4(VAR_7, VAR_3, VAR_4);
  if (!FUNC_8("glDrawArrays"))
   goto fail;
 }

 return;

fail:
 FUNC_0(VAR_0, "device_draw (GL) failed");
}
