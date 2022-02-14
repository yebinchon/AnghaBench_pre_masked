
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int major; } ;
struct wined3d_sm1_data {TYPE_1__ shader_version; } ;
typedef int DWORD ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int const VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;

__attribute__((used)) static unsigned int FUNC_0(const struct wined3d_sm1_data *VAR_8, const DWORD *VAR_9,
        DWORD *VAR_10, DWORD *VAR_11)
{
    unsigned int VAR_12 = 1;

    *VAR_10 = *VAR_9;





    if (*VAR_9 & VAR_2)
    {
        if (VAR_8->shader_version.major < 2)
        {
            *VAR_11 = (1u << 31)
                    | ((VAR_0 << VAR_6) & VAR_4)
                    | ((VAR_0 << VAR_5) & VAR_3)
                    | (VAR_1 << VAR_7);
        }
        else
        {
            *VAR_11 = *(VAR_9 + 1);
            ++VAR_12;
        }
    }

    return VAR_12;
}
