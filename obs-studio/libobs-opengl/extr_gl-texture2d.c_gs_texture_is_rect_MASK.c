
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ gl_target; } ;
struct gs_texture_2d {TYPE_1__ base; } ;
typedef int gs_texture_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int const*,char*) ;

bool FUNC_2(const gs_texture_t *VAR_2)
{
 const struct gs_texture_2d *VAR_3 = (const struct gs_texture_2d *)VAR_2;
 if (!FUNC_1(VAR_2, "gs_texture_unmap")) {
  FUNC_0(VAR_1, "gs_texture_is_rect (GL) failed");
  return 0;
 }

 return VAR_3->base.gl_target == VAR_0;
}
