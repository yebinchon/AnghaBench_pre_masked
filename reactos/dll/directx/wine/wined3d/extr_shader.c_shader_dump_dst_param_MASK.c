
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_string_buffer {int dummy; } ;
struct wined3d_shader_version {int dummy; } ;
struct wined3d_shader_dst_param {int write_mask; int reg; } ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct wined3d_string_buffer*,char*,...) ;
 int FUNC_1 (struct wined3d_string_buffer*,int *,struct wined3d_shader_version const*) ;

__attribute__((used)) static void FUNC_2(struct wined3d_string_buffer *VAR_5,
        const struct wined3d_shader_dst_param *VAR_6, const struct wined3d_shader_version *VAR_7)
{
    DWORD VAR_8 = VAR_6->write_mask;

    FUNC_1(VAR_5, &VAR_6->reg, VAR_7);

    if (VAR_8 && VAR_8 != VAR_4)
    {
        static const char VAR_9[] = "xyzw";

        FUNC_0(VAR_5, ".");
        if (VAR_8 & VAR_0)
            FUNC_0(VAR_5, "%c", VAR_9[0]);
        if (VAR_8 & VAR_1)
            FUNC_0(VAR_5, "%c", VAR_9[1]);
        if (VAR_8 & VAR_2)
            FUNC_0(VAR_5, "%c", VAR_9[2]);
        if (VAR_8 & VAR_3)
            FUNC_0(VAR_5, "%c", VAR_9[3]);
    }
}
