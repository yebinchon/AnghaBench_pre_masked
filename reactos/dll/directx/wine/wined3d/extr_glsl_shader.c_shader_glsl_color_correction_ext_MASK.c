
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_string_buffer {int dummy; } ;
struct color_fixup_desc {int w_source; int w_sign_fixup; int z_source; int z_sign_fixup; int y_source; int y_sign_fixup; int x_source; int x_sign_fixup; } ;
typedef enum complex_fixup { ____Placeholder_complex_fixup } complex_fixup ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct color_fixup_desc) ;
 scalar_t__ FUNC_2 (struct color_fixup_desc) ;
 int FUNC_3 (struct wined3d_string_buffer*,char*,char const*,char*,...) ;
 int FUNC_4 (char*,char const*,int ,int ) ;
 unsigned int FUNC_5 (int) ;
 int FUNC_6 (int,char*) ;
 int FUNC_7 (char*,char*) ;

__attribute__((used)) static void FUNC_8(struct wined3d_string_buffer *VAR_8,
        const char *VAR_9, DWORD VAR_10, struct color_fixup_desc VAR_11)
{
    unsigned int VAR_12, VAR_13;
    DWORD VAR_14 = 0;
    char VAR_15[256];
    char VAR_16[6];

    if (VAR_11.x_sign_fixup || VAR_11.x_source != VAR_1) VAR_14 |= VAR_4;
    if (VAR_11.y_sign_fixup || VAR_11.y_source != VAR_2) VAR_14 |= VAR_5;
    if (VAR_11.z_sign_fixup || VAR_11.z_source != VAR_3) VAR_14 |= VAR_6;
    if (VAR_11.w_sign_fixup || VAR_11.w_source != VAR_0) VAR_14 |= VAR_7;
    if (!(VAR_10 &= VAR_14))
        return;

    if (FUNC_2(VAR_11))
    {
        enum complex_fixup VAR_17 = FUNC_1(VAR_11);
        FUNC_0("Complex fixup (%#x) not supported\n",VAR_17);
        return;
    }

    FUNC_6(VAR_10, VAR_16);
    VAR_12 = FUNC_5(VAR_10);

    VAR_15[0] = '\0';
    VAR_13 = VAR_12;
    if (VAR_10 & VAR_4)
    {
        FUNC_4(VAR_15, VAR_9, VAR_11.x_sign_fixup, VAR_11.x_source);
        if (--VAR_13) FUNC_7(VAR_15, ", ");
    }
    if (VAR_10 & VAR_5)
    {
        FUNC_4(VAR_15, VAR_9, VAR_11.y_sign_fixup, VAR_11.y_source);
        if (--VAR_13) FUNC_7(VAR_15, ", ");
    }
    if (VAR_10 & VAR_6)
    {
        FUNC_4(VAR_15, VAR_9, VAR_11.z_sign_fixup, VAR_11.z_source);
        if (--VAR_13) FUNC_7(VAR_15, ", ");
    }
    if (VAR_10 & VAR_7)
    {
        FUNC_4(VAR_15, VAR_9, VAR_11.w_sign_fixup, VAR_11.w_source);
        if (--VAR_13) FUNC_7(VAR_15, ", ");
    }

    if (VAR_12 > 1)
        FUNC_3(VAR_8, "%s%s = vec%u(%s);\n", VAR_9, VAR_16, VAR_12, VAR_15);
    else
        FUNC_3(VAR_8, "%s%s = %s;\n", VAR_9, VAR_16, VAR_15);
}
