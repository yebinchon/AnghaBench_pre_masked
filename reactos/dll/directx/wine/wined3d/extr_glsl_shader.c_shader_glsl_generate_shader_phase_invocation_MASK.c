
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_string_buffer {int dummy; } ;
struct wined3d_shader_phase {scalar_t__ instance_count; } ;


 int FUNC_0 (struct wined3d_string_buffer*,char*,...) ;

__attribute__((used)) static void FUNC_1(struct wined3d_string_buffer *VAR_0,
        const struct wined3d_shader_phase *VAR_1, const char *VAR_2, unsigned int VAR_3)
{
    if (VAR_1->instance_count)
    {
        FUNC_0(VAR_0, "for (int i = 0; i < %u; ++i)\n{\n", VAR_1->instance_count);
        FUNC_0(VAR_0, "hs_%s_phase%u(i);\n", VAR_2, VAR_3);
        FUNC_0(VAR_0, "}\n");
    }
    else
    {
        FUNC_0(VAR_0, "hs_%s_phase%u();\n", VAR_2, VAR_3);
    }
}
