
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_gl_info {int dummy; } ;
struct wined3d_context {unsigned int active_texture; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (scalar_t__) ;

void FUNC_3(struct wined3d_context *VAR_1, const struct wined3d_gl_info *VAR_2, unsigned int VAR_3)
{
    FUNC_0(FUNC_2(VAR_0 + VAR_3));
    FUNC_1("glActiveTexture");
    VAR_1->active_texture = VAR_3;
}
