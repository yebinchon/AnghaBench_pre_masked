
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int y; } ;
struct TYPE_7__ {int y; } ;
struct TYPE_6__ {int y; } ;
struct TYPE_5__ {int y; } ;
struct matrix4 {TYPE_4__ t; TYPE_3__ z; TYPE_2__ y; TYPE_1__ x; } ;
struct gs_shader {scalar_t__ viewproj; } ;
struct gs_device {int cur_viewproj; int cur_view; scalar_t__ cur_fbo; int cur_proj; struct gs_shader* cur_vertex_shader; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__,int *) ;
 int FUNC_4 (struct matrix4*,int *) ;
 int FUNC_5 (int *,int *,struct matrix4*) ;
 int FUNC_6 (int *,int *) ;

__attribute__((used)) static void FUNC_7(struct gs_device *VAR_2)
{
 struct gs_shader *VAR_3 = VAR_2->cur_vertex_shader;
 struct matrix4 VAR_4;

 FUNC_2(&VAR_2->cur_view);
 FUNC_4(&VAR_4, &VAR_2->cur_proj);

 if (VAR_2->cur_fbo) {
  VAR_4.x.y = -VAR_4.x.y;
  VAR_4.y.y = -VAR_4.y.y;
  VAR_4.z.y = -VAR_4.z.y;
  VAR_4.t.y = -VAR_4.t.y;

  FUNC_0(VAR_1);
 } else {
  FUNC_0(VAR_0);
 }

 FUNC_1("glFrontFace");

 FUNC_5(&VAR_2->cur_viewproj, &VAR_2->cur_view, &VAR_4);
 FUNC_6(&VAR_2->cur_viewproj, &VAR_2->cur_viewproj);

 if (VAR_3->viewproj)
  FUNC_3(VAR_3->viewproj, &VAR_2->cur_viewproj);
}
