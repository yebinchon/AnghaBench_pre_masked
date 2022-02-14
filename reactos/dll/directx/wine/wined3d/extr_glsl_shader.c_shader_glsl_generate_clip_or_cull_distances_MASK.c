
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_string_buffer {int dummy; } ;
struct wined3d_shader_signature_element {scalar_t__ sysval_semantic; unsigned int mask; int register_idx; scalar_t__ semantic_idx; } ;
typedef int DWORD ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct wined3d_string_buffer*,char*,char const*,unsigned int,int ,char*) ;
 int FUNC_1 (unsigned int,char*) ;
 unsigned int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct wined3d_string_buffer *VAR_2,
        const struct wined3d_shader_signature_element *VAR_3, DWORD VAR_4)
{
    unsigned int VAR_5, VAR_6;
    const char *VAR_7;
    char VAR_8[6];

    VAR_7 = VAR_3->sysval_semantic == VAR_1 ? "Clip" : "Cull";

    VAR_6 = VAR_3->semantic_idx ? FUNC_2(VAR_4 & 0xf) : 0;
    for (VAR_5 = 0; VAR_5 < 4; ++VAR_5)
    {
        if (!(VAR_3->mask & (VAR_0 << VAR_5)))
            continue;

        FUNC_1(VAR_0 << VAR_5, VAR_8);
        FUNC_0(VAR_2, "gl_%sDistance[%u] = outputs[%u]%s;\n",
                VAR_7, VAR_6, VAR_3->register_idx, VAR_8);
        ++VAR_6;
    }
}
