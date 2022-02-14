
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_string_buffer {int dummy; } ;
struct wined3d_shader_version {int dummy; } ;
struct wined3d_context {int dummy; } ;


 int FUNC_0 (char*,unsigned int) ;
 unsigned int VAR_0 ;
 int FUNC_1 (struct wined3d_string_buffer*,char*,unsigned int) ;
 unsigned int FUNC_2 (struct wined3d_context const*,struct wined3d_shader_version const*,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct wined3d_string_buffer *VAR_1,
        const struct wined3d_context *VAR_2, const struct wined3d_shader_version *VAR_3,
        unsigned int VAR_4)
{
    unsigned int VAR_5 = FUNC_2(VAR_2, VAR_3, VAR_4);
    if (VAR_5 != VAR_0)
        FUNC_1(VAR_1, "layout(binding = %u)\n", VAR_5);
    else
        FUNC_0("Unmapped sampler %u.\n", VAR_4);
}
