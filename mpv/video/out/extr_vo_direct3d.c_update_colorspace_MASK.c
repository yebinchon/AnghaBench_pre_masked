
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mp_csp_params {int input_bits; int texture_bits; } ;
struct mp_cmat {int * c; int ** m; } ;
struct TYPE_6__ {int ** m; } ;
struct TYPE_7__ {TYPE_2__ d3d_colormatrix; TYPE_1__* planes; scalar_t__ use_shaders; int params; } ;
typedef TYPE_3__ d3d_priv ;
struct TYPE_5__ {int bits_per_pixel; } ;


 struct mp_csp_params VAR_0 ;
 int FUNC_0 (struct mp_csp_params*,int *) ;
 int FUNC_1 (struct mp_csp_params*,struct mp_cmat*) ;

__attribute__((used)) static void FUNC_2(d3d_priv *VAR_1)
{
    struct mp_csp_params VAR_2 = VAR_0;
    FUNC_0(&VAR_2, &VAR_1->params);

    if (VAR_1->use_shaders) {
        VAR_2.input_bits = VAR_1->planes[0].bits_per_pixel;
        VAR_2.texture_bits = (VAR_2.input_bits + 7) & ~7;

        struct mp_cmat VAR_3;
        FUNC_1(&VAR_2, &VAR_3);
        for (int VAR_4 = 0; VAR_4 < 3; VAR_4++) {
            for (int VAR_5 = 0; VAR_5 < 3; VAR_5++)
                VAR_1->d3d_colormatrix.m[VAR_4][VAR_5] = VAR_3.m[VAR_4][VAR_5];
            VAR_1->d3d_colormatrix.m[VAR_4][3] = VAR_3.c[VAR_4];
        }
    }
}
