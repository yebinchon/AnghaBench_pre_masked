
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gs_program {TYPE_2__* vertex_shader; int obj; TYPE_1__* pixel_shader; struct gs_program* next; struct gs_program** prev_next; struct gs_device* device; } ;
struct gs_device {struct gs_program* first_program; TYPE_1__* cur_pixel_shader; TYPE_2__* cur_vertex_shader; } ;
struct TYPE_4__ {int obj; } ;
struct TYPE_3__ {int obj; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gs_program*) ;
 int FUNC_1 (struct gs_program*) ;
 struct gs_program* FUNC_2 (int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (struct gs_program*) ;
 int FUNC_10 (int ) ;

struct gs_program *FUNC_11(struct gs_device *VAR_2)
{
 struct gs_program *VAR_3 = FUNC_2(sizeof(*VAR_3));
 int VAR_4 = 0;

 VAR_3->device = VAR_2;
 VAR_3->vertex_shader = VAR_2->cur_vertex_shader;
 VAR_3->pixel_shader = VAR_2->cur_pixel_shader;

 VAR_3->obj = FUNC_4();
 if (!FUNC_8("glCreateProgram"))
  goto error_detach_neither;

 FUNC_3(VAR_3->obj, VAR_3->vertex_shader->obj);
 if (!FUNC_8("glAttachShader (vertex)"))
  goto error_detach_neither;

 FUNC_3(VAR_3->obj, VAR_3->pixel_shader->obj);
 if (!FUNC_8("glAttachShader (pixel)"))
  goto error_detach_vertex;

 FUNC_7(VAR_3->obj);
 if (!FUNC_8("glLinkProgram"))
  goto error;

 FUNC_6(VAR_3->obj, VAR_1, &VAR_4);
 if (!FUNC_8("glGetProgramiv"))
  goto error;

 if (VAR_4 == VAR_0) {
  FUNC_10(VAR_3->obj);
  goto error;
 }

 if (!FUNC_0(VAR_3))
  goto error;
 if (!FUNC_1(VAR_3))
  goto error;

 FUNC_5(VAR_3->obj, VAR_3->vertex_shader->obj);
 FUNC_8("glDetachShader (vertex)");

 FUNC_5(VAR_3->obj, VAR_3->pixel_shader->obj);
 FUNC_8("glDetachShader (pixel)");

 VAR_3->next = VAR_2->first_program;
 VAR_3->prev_next = &VAR_2->first_program;
 VAR_2->first_program = VAR_3;
 if (VAR_3->next)
  VAR_3->next->prev_next = &VAR_3->next;

 return VAR_3;

error:
 FUNC_5(VAR_3->obj, VAR_3->pixel_shader->obj);
 FUNC_8("glDetachShader (pixel)");

error_detach_vertex:
 FUNC_5(VAR_3->obj, VAR_3->vertex_shader->obj);
 FUNC_8("glDetachShader (vertex)");

error_detach_neither:
 FUNC_9(VAR_3);
 return ((void*)0);
}
