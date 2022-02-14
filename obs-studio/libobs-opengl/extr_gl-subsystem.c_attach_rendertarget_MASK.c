
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct fbo_info {TYPE_1__* cur_render_target; } ;
struct TYPE_3__ {scalar_t__ type; int texture; } ;
typedef TYPE_1__ gs_texture_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,int ,scalar_t__,int ,int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static bool FUNC_2(struct fbo_info *VAR_6, gs_texture_t *VAR_7,
    int VAR_8)
{
 if (VAR_6->cur_render_target == VAR_7)
  return 1;

 VAR_6->cur_render_target = VAR_7;

 if (VAR_7->type == VAR_4) {
  FUNC_0(VAR_1,
           VAR_0, VAR_2,
           VAR_7->texture, 0);

 } else if (VAR_7->type == VAR_5) {
  FUNC_0(VAR_1,
           VAR_0,
           VAR_3 + VAR_8,
           VAR_7->texture, 0);

 } else {
  return 0;
 }

 return FUNC_1("glFramebufferTexture2D");
}
