
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shader_caps {int vs_version; } ;
struct fragment_caps {int TextureOpCaps; int MaxSimultaneousTextures; } ;
typedef enum wined3d_d3d_level { ____Placeholder_wined3d_d3d_level } wined3d_d3d_level ;
typedef scalar_t__ DWORD ;


 scalar_t__ FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static enum wined3d_d3d_level FUNC_1(const struct shader_caps *VAR_9, const struct fragment_caps *VAR_10, DWORD VAR_11)
{
    if (VAR_9->vs_version >= 5)
        return VAR_2;
    if (VAR_9->vs_version == 4)
        return VAR_1;
    if (VAR_9->vs_version == 3)
    {


        if (VAR_11 >= FUNC_0(4, 30))
            return VAR_2;
        if (VAR_11 >= FUNC_0(1, 30))
            return VAR_1;
        return VAR_8;
    }
    if (VAR_9->vs_version == 2)
        return VAR_7;
    if (VAR_9->vs_version == 1)
        return VAR_6;

    if (VAR_10->TextureOpCaps & VAR_0)
        return VAR_5;
    if (VAR_10->MaxSimultaneousTextures > 1)
        return VAR_4;

    return VAR_3;
}
