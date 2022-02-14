
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tmp_ins ;
struct TYPE_8__ {TYPE_3__* idx; } ;
struct TYPE_6__ {int member_0; } ;
struct wined3d_shader_src_param {TYPE_4__ reg; TYPE_2__ member_0; } ;
struct wined3d_shader_instruction {int dst_count; int src_count; int handler_idx; struct wined3d_shader_src_param* src; struct wined3d_shader_dst_param* dst; int ctx; } ;
struct TYPE_5__ {int member_0; } ;
struct wined3d_shader_dst_param {int write_mask; TYPE_1__ member_0; } ;
struct TYPE_7__ {int offset; } ;


 void* VAR_0 ;
 void* VAR_1 ;





 int VAR_2 ;
 int FUNC_0 (struct wined3d_shader_instruction*,int ,int) ;
 int FUNC_1 (struct wined3d_shader_instruction*) ;

__attribute__((used)) static void FUNC_2(const struct wined3d_shader_instruction *VAR_3)
{
    int VAR_4;
    int VAR_5 = 0;
    struct wined3d_shader_dst_param VAR_6 = {0};
    struct wined3d_shader_src_param VAR_7[2] = {{{0}}};
    struct wined3d_shader_instruction VAR_8;

    FUNC_0(&VAR_8, 0, sizeof(VAR_8));


    VAR_8.ctx = VAR_3->ctx;
    VAR_8.dst_count = 1;
    VAR_8.dst = &VAR_6;
    VAR_8.src_count = 2;
    VAR_8.src = VAR_7;

    switch(VAR_3->handler_idx)
    {
        case 128:
            VAR_5 = 4;
            VAR_8.handler_idx = VAR_1;
            break;
        case 129:
            VAR_5 = 3;
            VAR_8.handler_idx = VAR_1;
            break;
        case 130:
            VAR_5 = 4;
            VAR_8.handler_idx = VAR_0;
            break;
        case 131:
            VAR_5 = 3;
            VAR_8.handler_idx = VAR_0;
            break;
        case 132:
            VAR_5 = 2;
            VAR_8.handler_idx = VAR_0;
            break;
        default:
            break;
    }

    VAR_6 = VAR_3->dst[0];
    VAR_7[0] = VAR_3->src[0];
    VAR_7[1] = VAR_3->src[1];
    for (VAR_4 = 0; VAR_4 < VAR_5; ++VAR_4)
    {
        VAR_6.write_mask = VAR_2 << VAR_4;
        FUNC_1(&VAR_8);
        ++VAR_7[1].reg.idx[0].offset;
    }
}
