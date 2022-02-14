
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_string_buffer {int dummy; } ;


 int FUNC_0 (struct wined3d_string_buffer*,char*) ;

__attribute__((used)) static void FUNC_1(struct wined3d_string_buffer *VAR_0)
{







    FUNC_0(VAR_0, "gl_Position.y = gl_Position.y * pos_fixup.y;\n");
    FUNC_0(VAR_0, "gl_Position.xy += pos_fixup.zw * gl_Position.ww;\n");
    FUNC_0(VAR_0, "gl_Position.z = gl_Position.z * 2.0 - gl_Position.w;\n");
}
