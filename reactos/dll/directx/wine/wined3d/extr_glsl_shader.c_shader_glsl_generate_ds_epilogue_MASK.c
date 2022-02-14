
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_string_buffer {int dummy; } ;
struct wined3d_shader {int dummy; } ;
struct wined3d_gl_info {int * supported; } ;
struct ds_compile_args {scalar_t__ next_shader_type; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct wined3d_string_buffer*,char*) ;
 int FUNC_1 (struct wined3d_string_buffer*) ;

__attribute__((used)) static void FUNC_2(const struct wined3d_gl_info *VAR_2,
        struct wined3d_string_buffer *VAR_3, const struct wined3d_shader *VAR_4,
        const struct ds_compile_args *VAR_5)
{
    FUNC_0(VAR_3, "setup_ds_output(ds_out);\n");

    if (VAR_5->next_shader_type == VAR_1 && !VAR_2->supported[VAR_0])
        FUNC_1(VAR_3);
}
