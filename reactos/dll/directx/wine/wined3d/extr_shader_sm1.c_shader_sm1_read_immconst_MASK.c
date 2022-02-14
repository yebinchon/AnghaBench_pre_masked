
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int immconst_data; } ;
struct TYPE_6__ {int data_type; int immconst_type; TYPE_2__ u; TYPE_1__* idx; int type; } ;
struct wined3d_shader_src_param {scalar_t__ modifiers; int swizzle; TYPE_3__ reg; } ;
typedef enum wined3d_immconst_type { ____Placeholder_wined3d_immconst_type } wined3d_immconst_type ;
typedef enum wined3d_data_type { ____Placeholder_wined3d_data_type } wined3d_data_type ;
struct TYPE_4__ {unsigned int offset; int * rel_addr; } ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int const*,unsigned int) ;

__attribute__((used)) static void FUNC_1(const DWORD **VAR_3, struct wined3d_shader_src_param *VAR_4,
        enum wined3d_immconst_type VAR_5, enum wined3d_data_type VAR_6)
{
    unsigned int VAR_7 = VAR_5 == VAR_2 ? 4 : 1;
    VAR_4->reg.type = VAR_0;
    VAR_4->reg.data_type = VAR_6;
    VAR_4->reg.idx[0].offset = ~0U;
    VAR_4->reg.idx[0].rel_addr = ((void*)0);
    VAR_4->reg.idx[1].offset = ~0U;
    VAR_4->reg.idx[1].rel_addr = ((void*)0);
    VAR_4->reg.immconst_type = VAR_5;
    FUNC_0(VAR_4->reg.u.immconst_data, *VAR_3, VAR_7 * sizeof(DWORD));
    VAR_4->swizzle = VAR_1;
    VAR_4->modifiers = 0;

    *VAR_3 += VAR_7;
}
