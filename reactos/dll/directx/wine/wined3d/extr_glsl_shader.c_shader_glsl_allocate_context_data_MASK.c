
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_context {struct glsl_context_data* shader_backend_data; } ;
struct glsl_context_data {int vertex_color_clamp; } ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct glsl_context_data* FUNC_0 (int) ;

__attribute__((used)) static BOOL FUNC_1(struct wined3d_context *VAR_3)
{
    struct glsl_context_data *VAR_4;

    if (!(VAR_4 = FUNC_0(sizeof(*VAR_4))))
        return VAR_0;
    VAR_4->vertex_color_clamp = VAR_1;
    VAR_3->shader_backend_data = VAR_4;
    return VAR_2;
}
