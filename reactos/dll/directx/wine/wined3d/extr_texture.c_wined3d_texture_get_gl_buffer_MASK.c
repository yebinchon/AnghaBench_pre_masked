
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_texture {struct wined3d_swapchain* swapchain; } ;
struct wined3d_swapchain {struct wined3d_texture const** back_buffers; struct wined3d_texture const* front_buffer; } ;
typedef int GLenum ;


 int FUNC_0 (char*,struct wined3d_texture const*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*,...) ;

GLenum FUNC_3(const struct wined3d_texture *VAR_3)
{
    const struct wined3d_swapchain *VAR_4 = VAR_3->swapchain;

    FUNC_2("texture %p.\n", VAR_3);

    if (!VAR_4)
    {
        FUNC_0("Texture %p is not part of a swapchain.\n", VAR_3);
        return VAR_2;
    }

    if (VAR_3 == VAR_4->front_buffer)
    {
        FUNC_2("Returning GL_FRONT.\n");
        return VAR_1;
    }

    if (VAR_3 == VAR_4->back_buffers[0])
    {
        FUNC_2("Returning GL_BACK.\n");
        return VAR_0;
    }

    FUNC_1("Higher back buffer, returning GL_BACK.\n");
    return VAR_0;
}
