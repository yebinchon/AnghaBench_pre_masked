
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_shader_backend_ops {int dummy; } ;
struct wined3d_gl_info {scalar_t__* supported; } ;
struct fragment_pipeline {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 struct fragment_pipeline const VAR_5 ;
 struct fragment_pipeline const VAR_6 ;
 struct fragment_pipeline const VAR_7 ;
 struct fragment_pipeline const VAR_8 ;
 struct wined3d_shader_backend_ops const VAR_9 ;
 struct fragment_pipeline const VAR_10 ;
 struct fragment_pipeline const VAR_11 ;

__attribute__((used)) static const struct fragment_pipeline *FUNC_0(const struct wined3d_gl_info *VAR_12,
        const struct wined3d_shader_backend_ops *VAR_13)
{
    if (VAR_13 == &VAR_9 && VAR_12->supported[VAR_1])
        return &VAR_8;
    if (VAR_12->supported[VAR_0])
        return &VAR_5;
    if (VAR_12->supported[VAR_2])
        return &VAR_6;
    if (VAR_12->supported[VAR_3] && VAR_12->supported[VAR_4])
        return &VAR_11;
    if (VAR_12->supported[VAR_3])
        return &VAR_10;
    return &VAR_7;
}
