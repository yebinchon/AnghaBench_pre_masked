
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_sm1_opcode_info {scalar_t__ handler_idx; scalar_t__ opcode; scalar_t__ min_version; scalar_t__ max_version; } ;
struct TYPE_2__ {int minor; int major; } ;
struct wined3d_sm1_data {struct wined3d_sm1_opcode_info* opcode_table; TYPE_1__ shader_version; } ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (char*,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static const struct wined3d_sm1_opcode_info *FUNC_2(const struct wined3d_sm1_data *VAR_2, DWORD VAR_3)
{
    DWORD VAR_4 = FUNC_1(VAR_2->shader_version.major, VAR_2->shader_version.minor);
    const struct wined3d_sm1_opcode_info *VAR_5 = VAR_2->opcode_table;
    unsigned int VAR_6 = 0;

    while (VAR_5[VAR_6].handler_idx != VAR_0)
    {
        if ((VAR_3 & VAR_1) == VAR_5[VAR_6].opcode
                && VAR_4 >= VAR_5[VAR_6].min_version
                && (!VAR_5[VAR_6].max_version || VAR_4 <= VAR_5[VAR_6].max_version))
        {
            return &VAR_5[VAR_6];
        }
        ++VAR_6;
    }

    FUNC_0("Unsupported opcode %#x, token 0x%08x, shader version %#x.\n",
            VAR_3 & VAR_1, VAR_3, VAR_4);

    return ((void*)0);
}
