
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_vertex_pipe_ops {int dummy; } ;
struct wined3d_shader_backend_ops {int dummy; } ;
struct wined3d_gl_info {scalar_t__* supported; } ;


 size_t VAR_0 ;
 struct wined3d_vertex_pipe_ops const VAR_1 ;
 struct wined3d_shader_backend_ops const VAR_2 ;
 struct wined3d_vertex_pipe_ops const VAR_3 ;

__attribute__((used)) static const struct wined3d_vertex_pipe_ops *FUNC_0(const struct wined3d_gl_info *VAR_4,
        const struct wined3d_shader_backend_ops *VAR_5)
{
    if (VAR_5 == &VAR_2 && VAR_4->supported[VAR_0])
        return &VAR_3;
    return &VAR_1;
}
