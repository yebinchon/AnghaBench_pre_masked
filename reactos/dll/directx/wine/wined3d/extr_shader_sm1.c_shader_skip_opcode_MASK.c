
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_sm1_opcode_info {unsigned int param_count; } ;
struct TYPE_2__ {int major; } ;
struct wined3d_sm1_data {TYPE_1__ shader_version; } ;
typedef unsigned int DWORD ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;

__attribute__((used)) static unsigned int FUNC_0(const struct wined3d_sm1_data *VAR_2,
        const struct wined3d_sm1_opcode_info *VAR_3, DWORD VAR_4)
{
    unsigned int VAR_5;


    VAR_5 = (VAR_4 & VAR_0) >> VAR_1;
    return (VAR_2->shader_version.major >= 2) ? VAR_5 : VAR_3->param_count;
}
