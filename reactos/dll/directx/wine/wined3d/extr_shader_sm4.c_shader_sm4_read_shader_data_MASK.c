
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned int vec4_count; int data; } ;
struct wined3d_sm4_data {TYPE_2__ icb; } ;
struct TYPE_3__ {TYPE_2__* icb; } ;
struct wined3d_shader_instruction {TYPE_1__ declaration; int handler_idx; } ;
typedef enum wined3d_sm4_shader_data_type { ____Placeholder_wined3d_sm4_shader_data_type } wined3d_sm4_shader_data_type ;
typedef int DWORD ;


 int FUNC_0 (char*,unsigned int) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int const*,int) ;

__attribute__((used)) static void FUNC_2(struct wined3d_shader_instruction *VAR_6,
        DWORD VAR_7, DWORD VAR_8, const DWORD *VAR_9, unsigned int VAR_10,
        struct wined3d_sm4_data *VAR_11)
{
    enum wined3d_sm4_shader_data_type VAR_12;
    unsigned int VAR_13;

    VAR_12 = (VAR_8 & VAR_4) >> VAR_5;
    if (VAR_12 != VAR_3)
    {
        FUNC_0("Ignoring shader data type %#x.\n", VAR_12);
        VAR_6->handler_idx = VAR_1;
        return;
    }

    ++VAR_9;
    VAR_13 = VAR_10 - 1;
    if (VAR_13 % 4 || VAR_13 > VAR_0)
    {
        FUNC_0("Unexpected immediate constant buffer size %u.\n", VAR_13);
        VAR_6->handler_idx = VAR_2;
        return;
    }

    VAR_11->icb.vec4_count = VAR_13 / 4;
    FUNC_1(VAR_11->icb.data, VAR_9, sizeof(*VAR_9) * VAR_13);
    VAR_6->declaration.icb = &VAR_11->icb;
}
