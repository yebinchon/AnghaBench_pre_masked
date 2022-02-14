
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_string_buffer {int dummy; } ;
struct wined3d_gl_info {int dummy; } ;
typedef enum wined3d_cmp_func { ____Placeholder_wined3d_cmp_func } wined3d_cmp_func ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct wined3d_gl_info const*) ;
 int FUNC_1 (struct wined3d_string_buffer*,char*,...) ;

__attribute__((used)) static void FUNC_2(struct wined3d_string_buffer *VAR_2,
        const struct wined3d_gl_info *VAR_3, enum wined3d_cmp_func VAR_4)
{
    const char *VAR_5 = FUNC_0(VAR_3) ? "gl_FragData[0]" : "ps_out0";



    static const char * const VAR_6[] =
    {
        "",
        "<",
        "==",
        "<=",
        ">",
        "!=",
        ">=",
        ""
    };

    if (VAR_4 == VAR_0)
        return;

    if (VAR_4 != VAR_1)
        FUNC_1(VAR_2, "if (!(%s.a %s alpha_test_ref))\n",
                VAR_5, VAR_6[VAR_4 - VAR_1]);
    FUNC_1(VAR_2, "    discard;\n");
}
