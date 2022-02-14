
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int texture; } ;
struct gs_texture_2d {TYPE_1__ base; } ;
typedef int gs_texture_t ;
struct TYPE_6__ {int gl_type; int gl_format; int pack_buffer; } ;
typedef TYPE_2__ gs_stagesurf_t ;
typedef int gs_device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (TYPE_2__*,struct gs_texture_2d*) ;
 int FUNC_3 (int ,int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (char*) ;

void FUNC_7(gs_device_t *VAR_3, gs_stagesurf_t *VAR_4,
     gs_texture_t *VAR_5)
{
 struct gs_texture_2d *VAR_6 = (struct gs_texture_2d *)VAR_5;
 if (!FUNC_2(VAR_4, VAR_6))
  goto failed;

 if (!FUNC_4(VAR_0, VAR_4->pack_buffer))
  goto failed;
 if (!FUNC_5(VAR_1, VAR_6->base.texture))
  goto failed;

 FUNC_3(VAR_1, 0, VAR_4->gl_format, VAR_4->gl_type, 0);
 if (!FUNC_6("glGetTexImage"))
  goto failed;

 FUNC_5(VAR_1, 0);
 FUNC_4(VAR_0, 0);
 return;

failed:
 FUNC_4(VAR_0, 0);
 FUNC_5(VAR_1, 0);
 FUNC_1(VAR_2, "device_stage_texture (GL) failed");

 FUNC_0(VAR_3);
}
