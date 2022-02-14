
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_gl_info {int dummy; } ;
struct wined3d_context {struct wined3d_gl_info* gl_info; } ;
typedef int GLuint ;
typedef scalar_t__ GLenum ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct wined3d_context*,int ) ;
 int FUNC_2 (scalar_t__,int ) ;

void FUNC_3(struct wined3d_context *VAR_2, GLenum VAR_3, GLuint VAR_4)
{
    const struct wined3d_gl_info *VAR_5 = VAR_2->gl_info;

    if (VAR_3 == VAR_0)
        FUNC_1(VAR_2, VAR_1);

    FUNC_0(FUNC_2(VAR_3, VAR_4));
}
