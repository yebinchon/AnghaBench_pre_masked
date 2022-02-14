
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_string_buffer {int dummy; } ;
struct wined3d_shader_dst_param {int modifiers; int shift; } ;
typedef int DWORD ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct wined3d_string_buffer*,char*,...) ;

__attribute__((used)) static void FUNC_2(struct wined3d_string_buffer *VAR_3,
        const struct wined3d_shader_dst_param *VAR_4)
{
    DWORD VAR_5 = VAR_4->modifiers;

    switch (VAR_4->shift)
    {
        case 0: break;
        case 13: FUNC_1(VAR_3, "_d8"); break;
        case 14: FUNC_1(VAR_3, "_d4"); break;
        case 15: FUNC_1(VAR_3, "_d2"); break;
        case 1: FUNC_1(VAR_3, "_x2"); break;
        case 2: FUNC_1(VAR_3, "_x4"); break;
        case 3: FUNC_1(VAR_3, "_x8"); break;
        default: FUNC_1(VAR_3, "_unhandled_shift(%d)", VAR_4->shift); break;
    }

    if (VAR_5 & VAR_2) FUNC_1(VAR_3, "_sat");
    if (VAR_5 & VAR_1) FUNC_1(VAR_3, "_pp");
    if (VAR_5 & VAR_0) FUNC_1(VAR_3, "_centroid");

    VAR_5 &= ~(VAR_2 | VAR_1 | VAR_0);
    if (VAR_5) FUNC_0("Unrecognised modifier %#x.\n", VAR_5);
}
