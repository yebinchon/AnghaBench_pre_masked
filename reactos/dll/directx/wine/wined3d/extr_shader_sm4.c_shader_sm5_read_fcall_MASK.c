
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wined3d_sm4_data {TYPE_3__* src_param; } ;
struct wined3d_shader_instruction {int dummy; } ;
struct TYPE_4__ {int fp_body_idx; } ;
struct TYPE_5__ {TYPE_1__ u; } ;
struct TYPE_6__ {TYPE_2__ reg; } ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (struct wined3d_sm4_data*,int const**,int const*,int ,TYPE_3__*) ;

__attribute__((used)) static void FUNC_1(struct wined3d_shader_instruction *VAR_1,
        DWORD VAR_2, DWORD VAR_3, const DWORD *VAR_4, unsigned int VAR_5,
        struct wined3d_sm4_data *VAR_6)
{
    VAR_6->src_param[0].reg.u.fp_body_idx = *VAR_4++;
    FUNC_0(VAR_6, &VAR_4, &VAR_4[VAR_5], VAR_0, &VAR_6->src_param[0]);
}
