
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_sm1_opcode_info {scalar_t__ handler_idx; unsigned int dst_count; unsigned int param_count; } ;
struct wined3d_sm1_data {int * src_rel_addr; int * src_param; int pred_rel_addr; int pred_param; int dst_rel_addr; int dst_param; } ;
struct TYPE_2__ {int semantic; } ;
struct wined3d_shader_instruction {scalar_t__ handler_idx; int flags; int coissue; int dst_count; unsigned int src_count; int * predicate; TYPE_1__ declaration; int texel_offset; int * src; int * dst; } ;
typedef int DWORD ;


 int FUNC_0 (char*,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int *,int ,int) ;
 struct wined3d_sm1_opcode_info* FUNC_2 (struct wined3d_sm1_data*,int) ;
 int FUNC_3 (struct wined3d_sm1_data*,struct wined3d_sm1_opcode_info const*,int) ;
 int FUNC_4 (struct wined3d_sm1_data*,int const*) ;
 int FUNC_5 (int const**) ;
 int FUNC_6 (struct wined3d_sm1_data*,int const**,int *,int *) ;
 int FUNC_7 (int const**,int *,int ,int ) ;
 int FUNC_8 (int const**,int *) ;
 int FUNC_9 (struct wined3d_sm1_data*,int const**,int *,int *) ;
 int FUNC_10 (struct wined3d_shader_instruction*) ;

__attribute__((used)) static void FUNC_11(void *VAR_14, const DWORD **VAR_15, struct wined3d_shader_instruction *VAR_16)
{
    const struct wined3d_sm1_opcode_info *VAR_17;
    struct wined3d_sm1_data *VAR_18 = VAR_14;
    DWORD VAR_19;
    unsigned int VAR_20;
    const DWORD *VAR_21;

    FUNC_5(VAR_15);

    VAR_19 = *(*VAR_15)++;
    if (!(VAR_17 = FUNC_2(VAR_18, VAR_19)))
    {
        FUNC_0("Unrecognized opcode: token=0x%08x.\n", VAR_19);
        VAR_16->handler_idx = VAR_4;
        *VAR_15 += FUNC_4(VAR_18, *VAR_15);
        return;
    }

    VAR_16->handler_idx = VAR_17->handler_idx;
    VAR_16->flags = (VAR_19 & VAR_11) >> VAR_12;
    VAR_16->coissue = VAR_19 & VAR_10;
    VAR_16->predicate = VAR_19 & VAR_13 ? &VAR_18->pred_param : ((void*)0);
    VAR_16->dst_count = VAR_17->dst_count ? 1 : 0;
    VAR_16->dst = &VAR_18->dst_param;
    VAR_16->src_count = VAR_17->param_count - VAR_17->dst_count;
    VAR_16->src = VAR_18->src_param;
    FUNC_1(&VAR_16->texel_offset, 0, sizeof(VAR_16->texel_offset));

    VAR_21 = *VAR_15;
    *VAR_15 += FUNC_3(VAR_18, VAR_17, VAR_19);

    if (VAR_16->handler_idx == VAR_0)
    {
        FUNC_8(&VAR_21, &VAR_16->declaration.semantic);
    }
    else if (VAR_16->handler_idx == VAR_1)
    {
        FUNC_6(VAR_18, &VAR_21, &VAR_18->dst_param, &VAR_18->dst_rel_addr);
        FUNC_7(&VAR_21, &VAR_18->src_param[0], VAR_9, VAR_5);
    }
    else if (VAR_16->handler_idx == VAR_2)
    {
        FUNC_6(VAR_18, &VAR_21, &VAR_18->dst_param, &VAR_18->dst_rel_addr);
        FUNC_7(&VAR_21, &VAR_18->src_param[0], VAR_8, VAR_7);
    }
    else if (VAR_16->handler_idx == VAR_3)
    {
        FUNC_6(VAR_18, &VAR_21, &VAR_18->dst_param, &VAR_18->dst_rel_addr);
        FUNC_7(&VAR_21, &VAR_18->src_param[0], VAR_9, VAR_6);
    }
    else
    {

        if (VAR_16->dst_count)
            FUNC_6(VAR_18, &VAR_21, &VAR_18->dst_param, &VAR_18->dst_rel_addr);


        if (VAR_16->predicate)
            FUNC_9(VAR_18, &VAR_21, &VAR_18->pred_param, &VAR_18->pred_rel_addr);


        for (VAR_20 = 0; VAR_20 < VAR_16->src_count; ++VAR_20)
            FUNC_9(VAR_18, &VAR_21, &VAR_18->src_param[VAR_20], &VAR_18->src_rel_addr[VAR_20]);
    }

    FUNC_10(VAR_16);
}
