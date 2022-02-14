
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_shader_resource_view {int resource; } ;
struct wined3d_cs_generate_mipmaps {struct wined3d_shader_resource_view* view; } ;
struct wined3d_cs {int dummy; } ;


 int FUNC_0 (struct wined3d_shader_resource_view*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct wined3d_cs *VAR_0, const void *VAR_1)
{
    const struct wined3d_cs_generate_mipmaps *VAR_2 = VAR_1;
    struct wined3d_shader_resource_view *VAR_3 = VAR_2->view;

    FUNC_0(VAR_3);
    FUNC_1(VAR_3->resource);
}
