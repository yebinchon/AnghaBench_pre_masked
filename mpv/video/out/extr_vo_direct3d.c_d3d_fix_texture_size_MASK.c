
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int opt_disable_texture_align; scalar_t__ device_caps_square_only; scalar_t__ device_caps_power2_only; } ;
typedef TYPE_1__ d3d_priv ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static void FUNC_1(d3d_priv *VAR_0, int *VAR_1, int *VAR_2)
{
    int VAR_3 = *VAR_1;
    int VAR_4 = *VAR_2;


    VAR_3 = FUNC_0(VAR_3, 1);
    VAR_4 = FUNC_0(VAR_4, 1);

    if (VAR_0->device_caps_power2_only) {
        VAR_3 = 1;
        VAR_4 = 1;
        while (VAR_3 < *VAR_1) VAR_3 <<= 1;
        while (VAR_4 < *VAR_2) VAR_4 <<= 1;
    }
    if (VAR_0->device_caps_square_only)

        VAR_3 = VAR_4 = FUNC_0(VAR_3, VAR_4);

    if (!VAR_0->opt_disable_texture_align) {
        VAR_3 = (VAR_3 + 15) & ~15;
        VAR_4 = (VAR_4 + 15) & ~15;
    }

    *VAR_1 = VAR_3;
    *VAR_2 = VAR_4;
}
