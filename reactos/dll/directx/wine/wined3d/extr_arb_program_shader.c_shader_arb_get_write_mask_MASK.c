
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_shader_instruction {int dummy; } ;
struct wined3d_shader_dst_param {int write_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_0(const struct wined3d_shader_instruction *VAR_5,
        const struct wined3d_shader_dst_param *VAR_6, char *VAR_7)
{
    char *VAR_8 = VAR_7;

    if (VAR_6->write_mask != VAR_4)
    {
        *VAR_8++ = '.';
        if (VAR_6->write_mask & VAR_0) *VAR_8++ = 'x';
        if (VAR_6->write_mask & VAR_1) *VAR_8++ = 'y';
        if (VAR_6->write_mask & VAR_2) *VAR_8++ = 'z';
        if (VAR_6->write_mask & VAR_3) *VAR_8++ = 'w';
    }

    *VAR_8 = '\0';
}
