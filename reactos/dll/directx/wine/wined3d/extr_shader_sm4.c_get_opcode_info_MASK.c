
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_sm4_opcode_info {int opcode; } ;
typedef enum wined3d_sm4_opcode { ____Placeholder_wined3d_sm4_opcode } wined3d_sm4_opcode ;


 unsigned int FUNC_0 (struct wined3d_sm4_opcode_info const*) ;
 struct wined3d_sm4_opcode_info const* VAR_0 ;

__attribute__((used)) static const struct wined3d_sm4_opcode_info *FUNC_1(enum wined3d_sm4_opcode VAR_1)
{
    unsigned int VAR_2;

    for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); ++VAR_2)
    {
        if (VAR_1 == VAR_0[VAR_2].opcode) return &VAR_0[VAR_2];
    }

    return ((void*)0);
}
