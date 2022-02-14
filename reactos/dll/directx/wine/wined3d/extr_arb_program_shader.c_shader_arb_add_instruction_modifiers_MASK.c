
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_string_buffer {int dummy; } ;
struct wined3d_shader_instruction {struct wined3d_shader_dst_param* dst; int dst_count; TYPE_1__* ctx; } ;
struct wined3d_shader_dst_param {size_t shift; int reg; } ;
struct TYPE_2__ {struct wined3d_string_buffer* buffer; } ;
typedef size_t DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (struct wined3d_string_buffer*,char*,int ,char*,char*,char*,int ) ;
 int FUNC_1 (struct wined3d_shader_instruction const*) ;
 int FUNC_2 (struct wined3d_shader_instruction const*,int *,char*,int *) ;
 int FUNC_3 (struct wined3d_shader_instruction const*,struct wined3d_shader_dst_param const*,char*) ;
 int * VAR_1 ;

__attribute__((used)) static void FUNC_4(const struct wined3d_shader_instruction *VAR_2) {
    DWORD VAR_3;
    char VAR_4[20], VAR_5[50];
    struct wined3d_string_buffer *VAR_6 = VAR_2->ctx->buffer;
    BOOL VAR_7 = VAR_0;
    const struct wined3d_shader_dst_param *VAR_8;

    if (!VAR_2->dst_count) return;

    VAR_8 = &VAR_2->dst[0];
    VAR_3 = VAR_8->shift;
    if (!VAR_3) return;

    FUNC_3(VAR_2, VAR_8, VAR_4);
    FUNC_2(VAR_2, &VAR_8->reg, VAR_5, &VAR_7);





    FUNC_0(VAR_6, "MUL%s %s%s, %s, %s;\n", FUNC_1(VAR_2),
                   VAR_5, VAR_4, VAR_5, VAR_1[VAR_3]);
}
