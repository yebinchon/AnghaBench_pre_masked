
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_string_buffer {int dummy; } ;


 int FUNC_0 (struct wined3d_string_buffer*,char*,char const*,...) ;

__attribute__((used)) static void FUNC_1(struct wined3d_string_buffer *VAR_0,
        const char *VAR_1, const char *VAR_2)
{
    FUNC_0(VAR_0, "SUB %s.x, state.fog.params.z, fragment.fogcoord.x;\n", VAR_2);
    FUNC_0(VAR_0, "MUL_SAT %s.x, %s.x, state.fog.params.w;\n", VAR_2, VAR_2);
    FUNC_0(VAR_0, "LRP %s.rgb, %s.x, %s, state.fog.color;\n", VAR_1, VAR_2, VAR_1);
}
