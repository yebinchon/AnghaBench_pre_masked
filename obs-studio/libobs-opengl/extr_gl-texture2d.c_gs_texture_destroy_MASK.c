
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct gs_texture_2d {scalar_t__ unpack_buffer; } ;
struct TYPE_5__ {scalar_t__ fbo; scalar_t__ texture; scalar_t__ is_dynamic; int is_dummy; scalar_t__ cur_sampler; } ;
typedef TYPE_1__ gs_texture_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__*) ;
 int FUNC_3 (int,scalar_t__*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (TYPE_1__*,char*) ;

void FUNC_6(gs_texture_t *VAR_0)
{
 struct gs_texture_2d *VAR_1 = (struct gs_texture_2d *)VAR_0;
 if (!VAR_0)
  return;

 if (!FUNC_5(VAR_0, "gs_texture_destroy"))
  return;

 if (VAR_0->cur_sampler)
  FUNC_4(VAR_0->cur_sampler);

 if (!VAR_0->is_dummy && VAR_0->is_dynamic && VAR_1->unpack_buffer)
  FUNC_2(1, &VAR_1->unpack_buffer);

 if (VAR_0->texture)
  FUNC_3(1, &VAR_0->texture);

 if (VAR_0->fbo)
  FUNC_1(VAR_0->fbo);

 FUNC_0(VAR_0);
}
