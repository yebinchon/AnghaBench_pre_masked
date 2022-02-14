
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int texture; } ;
struct gs_texture_2d {int height; int width; TYPE_1__ base; int unpack_buffer; } ;
struct TYPE_6__ {int gl_type; int gl_format; int gl_internal_format; } ;
typedef TYPE_2__ gs_texture_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (TYPE_2__*,char*) ;

void FUNC_7(gs_texture_t *VAR_3)
{
 struct gs_texture_2d *VAR_4 = (struct gs_texture_2d *)VAR_3;
 if (!FUNC_6(VAR_3, "gs_texture_unmap"))
  goto failed;

 if (!FUNC_3(VAR_0, VAR_4->unpack_buffer))
  goto failed;

 FUNC_2(VAR_0);
 if (!FUNC_5("glUnmapBuffer"))
  goto failed;

 if (!FUNC_4(VAR_1, VAR_4->base.texture))
  goto failed;

 FUNC_1(VAR_1, 0, VAR_3->gl_internal_format, VAR_4->width,
       VAR_4->height, 0, VAR_3->gl_format, VAR_3->gl_type, 0);
 if (!FUNC_5("glTexImage2D"))
  goto failed;

 FUNC_3(VAR_0, 0);
 FUNC_4(VAR_1, 0);
 return;

failed:
 FUNC_3(VAR_0, 0);
 FUNC_4(VAR_1, 0);
 FUNC_0(VAR_2, "gs_texture_unmap (GL) failed");
}
