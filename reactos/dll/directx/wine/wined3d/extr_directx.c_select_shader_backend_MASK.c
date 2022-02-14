
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_shader_backend_ops {int dummy; } ;
struct wined3d_gl_info {scalar_t__ glsl_version; scalar_t__* supported; } ;
struct TYPE_2__ {scalar_t__ glslRequested; } ;
typedef int BOOL ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ FUNC_0 (int,int) ;
 struct wined3d_shader_backend_ops const VAR_4 ;
 struct wined3d_shader_backend_ops const VAR_5 ;
 struct wined3d_shader_backend_ops const VAR_6 ;
 TYPE_1__ VAR_7 ;

__attribute__((used)) static const struct wined3d_shader_backend_ops *FUNC_1(const struct wined3d_gl_info *VAR_8)
{
    BOOL VAR_9 = VAR_7.glslRequested && VAR_8->glsl_version >= FUNC_0(1, 20);

    if (VAR_9 && VAR_8->supported[VAR_3] && VAR_8->supported[VAR_1])
        return &VAR_5;
    if (VAR_8->supported[VAR_2] && VAR_8->supported[VAR_0])
        return &VAR_4;
    if (VAR_9 && (VAR_8->supported[VAR_3] || VAR_8->supported[VAR_1]))
        return &VAR_5;
    if (VAR_8->supported[VAR_2] || VAR_8->supported[VAR_0])
        return &VAR_4;
    return &VAR_6;
}
