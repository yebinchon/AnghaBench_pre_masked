
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum wined3d_shader_interpolation_mode { ____Placeholder_wined3d_shader_interpolation_mode } wined3d_shader_interpolation_mode ;
typedef int DWORD ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_1 (int *,unsigned int,unsigned int,int) ;

__attribute__((used)) static void FUNC_2(DWORD *VAR_2,
        unsigned int VAR_3, enum wined3d_shader_interpolation_mode VAR_4)
{
    if (VAR_4 > VAR_0)
        FUNC_0("Unexpected interpolation mode %#x.\n", VAR_4);

    FUNC_1(VAR_2,
            VAR_3 * VAR_1, VAR_1, VAR_4);
}
