
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_context {unsigned int shader_update_mask; struct glsl_context_data* shader_backend_data; } ;
struct glsl_context_data {int * glsl_program; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;

__attribute__((used)) static void FUNC_0(struct wined3d_context *VAR_6)
{
    struct glsl_context_data *VAR_7 = VAR_6->shader_backend_data;

    VAR_7->glsl_program = ((void*)0);
    VAR_6->shader_update_mask = (1u << VAR_4)
            | (1u << VAR_5)
            | (1u << VAR_2)
            | (1u << VAR_3)
            | (1u << VAR_1)
            | (1u << VAR_0);
}
