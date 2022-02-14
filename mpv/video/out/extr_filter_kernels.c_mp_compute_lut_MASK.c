
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int radius; } ;
struct filter_kernel {double radius_cutoff; scalar_t__ value_cutoff; TYPE_1__ f; scalar_t__ polar; } ;


 scalar_t__ FUNC_0 (float) ;
 int FUNC_1 (struct filter_kernel*,int,float*) ;
 float FUNC_2 (struct filter_kernel*,double) ;

void FUNC_3(struct filter_kernel *VAR_0, int VAR_1, int VAR_2,
                    float *VAR_3)
{
    if (VAR_0->polar) {
        VAR_0->radius_cutoff = 0.0;

        for (int VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
            double VAR_5 = VAR_4 * VAR_0->f.radius / (VAR_1 - 1);
            VAR_3[VAR_4] = FUNC_2(VAR_0, VAR_5);

            if (FUNC_0(VAR_3[VAR_4]) > VAR_0->value_cutoff)
                VAR_0->radius_cutoff = VAR_5;
        }
    } else {

        for (int VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
            FUNC_1(VAR_0, VAR_6 / (double)(VAR_1 - 1),
                               VAR_3 + VAR_2 * VAR_6);
        }
    }
}
