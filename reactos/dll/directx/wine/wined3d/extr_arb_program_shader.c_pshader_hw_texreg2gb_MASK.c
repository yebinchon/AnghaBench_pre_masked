
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct wined3d_string_buffer {int dummy; } ;
struct wined3d_shader_instruction {int * src; TYPE_4__* dst; TYPE_2__* ctx; } ;
struct TYPE_5__ {TYPE_3__* idx; } ;
struct TYPE_8__ {TYPE_1__ reg; } ;
struct TYPE_7__ {int offset; } ;
struct TYPE_6__ {struct wined3d_string_buffer* buffer; } ;
typedef int DWORD ;


 int FUNC_0 (struct wined3d_string_buffer*,char*,char*) ;
 int FUNC_1 (struct wined3d_shader_instruction const*,TYPE_4__*,char*) ;
 int FUNC_2 (struct wined3d_shader_instruction const*,int *,int ,char*) ;
 int FUNC_3 (struct wined3d_shader_instruction const*,int ,char*,char*,int ,int *,int *) ;

__attribute__((used)) static void FUNC_4(const struct wined3d_shader_instruction *VAR_0)
{
     struct wined3d_string_buffer *VAR_1 = VAR_0->ctx->buffer;

     DWORD VAR_2 = VAR_0->dst[0].reg.idx[0].offset;
     char VAR_3[50];
     char VAR_4[50];


     FUNC_1(VAR_0, &VAR_0->dst[0], VAR_3);
     FUNC_2(VAR_0, &VAR_0->src[0], 0, VAR_4);
     FUNC_0(VAR_1, "MOV TA.x, %s.y;\n", VAR_4);
     FUNC_0(VAR_1, "MOV TA.y, %s.z;\n", VAR_4);
     FUNC_3(VAR_0, VAR_2, VAR_3, "TA", 0, ((void*)0), ((void*)0));
}
