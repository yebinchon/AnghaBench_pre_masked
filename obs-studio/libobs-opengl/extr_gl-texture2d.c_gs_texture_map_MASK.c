
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_5__ {int is_dynamic; } ;
struct gs_texture_2d {int width; int unpack_buffer; TYPE_1__ base; } ;
struct TYPE_6__ {int format; } ;
typedef TYPE_2__ gs_texture_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int * FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*,char*) ;

bool FUNC_6(gs_texture_t *VAR_3, uint8_t **VAR_4, uint32_t *VAR_5)
{
 struct gs_texture_2d *VAR_6 = (struct gs_texture_2d *)VAR_3;

 if (!FUNC_5(VAR_3, "gs_texture_map"))
  goto fail;

 if (!VAR_6->base.is_dynamic) {
  FUNC_0(VAR_2, "Texture is not dynamic");
  goto fail;
 }

 if (!FUNC_2(VAR_0, VAR_6->unpack_buffer))
  goto fail;

 *VAR_4 = FUNC_1(VAR_0, VAR_1);
 if (!FUNC_3("glMapBuffer"))
  goto fail;

 FUNC_2(VAR_0, 0);

 *VAR_5 = VAR_6->width * FUNC_4(VAR_3->format) / 8;
 *VAR_5 = (*VAR_5 + 3) & 0xFFFFFFFC;
 return 1;

fail:
 FUNC_0(VAR_2, "gs_texture_map (GL) failed");
 return 0;
}
