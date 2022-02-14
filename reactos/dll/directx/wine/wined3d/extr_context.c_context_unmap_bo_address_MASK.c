
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_gl_info {int dummy; } ;
struct wined3d_context {struct wined3d_gl_info* gl_info; } ;
struct wined3d_bo_address {int buffer_object; } ;
typedef int GLenum ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct wined3d_context*,int ,int ) ;
 int FUNC_3 (int ) ;

void FUNC_4(struct wined3d_context *VAR_0,
        const struct wined3d_bo_address *VAR_1, GLenum VAR_2)
{
    const struct wined3d_gl_info *VAR_3;

    if (!VAR_1->buffer_object)
        return;

    VAR_3 = VAR_0->gl_info;
    FUNC_2(VAR_0, VAR_2, VAR_1->buffer_object);
    FUNC_0(FUNC_3(VAR_2));
    FUNC_2(VAR_0, VAR_2, 0);
    FUNC_1("Unmap buffer object");
}
