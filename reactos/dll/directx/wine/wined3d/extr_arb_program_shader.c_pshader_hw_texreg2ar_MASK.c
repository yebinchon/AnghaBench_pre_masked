
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct wined3d_string_buffer {int dummy; } ;
struct wined3d_shader_instruction {TYPE_3__* ctx; int * src; TYPE_6__* dst; } ;
struct shader_arb_ctx_priv {TYPE_5__* cur_ps_args; } ;
struct TYPE_8__ {TYPE_1__* idx; } ;
struct TYPE_12__ {TYPE_2__ reg; } ;
struct TYPE_10__ {scalar_t__ tex_transform; } ;
struct TYPE_11__ {TYPE_4__ super; } ;
struct TYPE_9__ {struct shader_arb_ctx_priv* backend_data; struct wined3d_string_buffer* buffer; } ;
struct TYPE_7__ {scalar_t__ offset; } ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct wined3d_string_buffer*,char*,char*) ;
 int FUNC_1 (struct wined3d_shader_instruction const*,TYPE_6__*,char*) ;
 int FUNC_2 (struct wined3d_shader_instruction const*,int *,int ,char*) ;
 int FUNC_3 (struct wined3d_shader_instruction const*,scalar_t__,char*,char*,int ,int *,int *) ;

__attribute__((used)) static void FUNC_4(const struct wined3d_shader_instruction *VAR_4)
{
     struct wined3d_string_buffer *VAR_5 = VAR_4->ctx->buffer;
     DWORD VAR_6 = 0;

     DWORD VAR_7 = VAR_4->dst[0].reg.idx[0].offset;
     char VAR_8[50];
     char VAR_9[50];


     FUNC_1(VAR_4, &VAR_4->dst[0], VAR_8);
     FUNC_2(VAR_4, &VAR_4->src[0], 0, VAR_9);

     FUNC_0(VAR_5, "MOV TA.y, %s.x;\n", VAR_9);
     FUNC_0(VAR_5, "MOV TA.x, %s.w;\n", VAR_9);
     if (VAR_7 < VAR_0)
     {
         struct shader_arb_ctx_priv *VAR_10 = VAR_4->ctx->backend_data;
         VAR_6 = VAR_10->cur_ps_args->super.tex_transform >> VAR_7 * VAR_3;
     }
     FUNC_3(VAR_4, VAR_7, VAR_8, "TA", VAR_6 & VAR_2 ? VAR_1 : 0, ((void*)0), ((void*)0));
}
