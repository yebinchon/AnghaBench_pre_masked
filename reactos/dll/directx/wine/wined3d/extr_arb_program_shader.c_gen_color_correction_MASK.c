
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_string_buffer {int dummy; } ;
struct color_fixup_masks {int sign; scalar_t__ source; } ;
struct color_fixup_desc {int w_source; int z_source; int y_source; int x_source; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct wined3d_string_buffer*,char*,char const*,char const*,char const*,char const*,char const*,...) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct wined3d_string_buffer *VAR_5, const char *VAR_6,
        const char *VAR_7, const char *VAR_8, const char *VAR_9,
        struct color_fixup_desc VAR_10, struct color_fixup_masks VAR_11)
{
    const char *VAR_12 = VAR_6;

    if (VAR_11.source)
    {
        if (VAR_11.sign)
            VAR_12 = "TA";

        FUNC_0(VAR_5, "SWZ %s, %s, %s, %s, %s, %s;\n", VAR_12, VAR_7,
                FUNC_1(VAR_10.x_source), FUNC_1(VAR_10.y_source),
                FUNC_1(VAR_10.z_source), FUNC_1(VAR_10.w_source));
    }
    else if (VAR_11.sign)
    {
        VAR_12 = VAR_7;
    }

    if (VAR_11.sign)
    {
        char VAR_13[6];
        char *VAR_14 = VAR_13;

        if (VAR_11.sign != VAR_4)
        {
            *VAR_14++ = '.';
            if (VAR_11.sign & VAR_0)
                *VAR_14++ = 'x';
            if (VAR_11.sign & VAR_1)
                *VAR_14++ = 'y';
            if (VAR_11.sign & VAR_2)
                *VAR_14++ = 'z';
            if (VAR_11.sign & VAR_3)
                *VAR_14++ = 'w';
        }
        *VAR_14 = '\0';

        FUNC_0(VAR_5, "MAD %s%s, %s, %s, -%s;\n", VAR_6, VAR_13, VAR_12, VAR_9, VAR_8);
    }
}
