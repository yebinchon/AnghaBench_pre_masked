
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_string_buffer {int dummy; } ;
struct wined3d_gl_info {int dummy; } ;


 unsigned int FUNC_0 (struct wined3d_gl_info const*) ;
 int FUNC_1 (struct wined3d_string_buffer*,char*,unsigned int,char const*,char const*,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct wined3d_string_buffer *VAR_0,
        const struct wined3d_gl_info *VAR_1, const char *VAR_2, const char *VAR_3,
        unsigned int VAR_4)
{
    FUNC_1(VAR_0, "%s %s4 vs_in_%s%u;\n",
            FUNC_0(VAR_1), VAR_2, VAR_3, VAR_4);
    FUNC_1(VAR_0, "vec4 vs_in%u = %sBitsToFloat(vs_in_%s%u);\n",
            VAR_4, VAR_3, VAR_3, VAR_4);
}
