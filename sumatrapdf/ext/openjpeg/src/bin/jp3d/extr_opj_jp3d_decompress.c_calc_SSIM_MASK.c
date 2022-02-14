
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int x1; int x0; int y1; int y0; int z1; int z0; TYPE_1__* comps; } ;
typedef TYPE_2__ opj_volume_t ;
struct TYPE_5__ {int prec; double* data; } ;


 double FUNC_0 (double) ;

__attribute__((used)) static double FUNC_1(opj_volume_t *VAR_0, opj_volume_t *VAR_1)
{
    int VAR_2, VAR_3, VAR_4 = 0, VAR_5, VAR_6;
    double VAR_7;
    double VAR_8 = 0.0, VAR_9 = 0.0, VAR_10 = 0.0, VAR_11 = 0.0,
           VAR_12 = 0.0 ;
    double VAR_13, VAR_14, VAR_15;
    double VAR_16, VAR_17, VAR_18;

    VAR_2 = (VAR_0->comps[VAR_4].prec <= 8) ? 255 : (1 <<
            VAR_0->comps[VAR_4].prec) - 1;
    VAR_5 = (VAR_0->x1 - VAR_0->x0) * (VAR_0->y1 - VAR_0->y0) *
           (VAR_0->z1 - VAR_0->z0);





    VAR_6 = VAR_5;
    for (VAR_7 = 0, VAR_3 = 0; VAR_3 < VAR_6; ++VAR_3) {

        VAR_8 += VAR_0->comps[VAR_4].data[VAR_3];
        VAR_9 += VAR_1->comps[VAR_4].data[VAR_3];
    }
    VAR_8 /= VAR_6;
    VAR_9 /= VAR_6;


    for (VAR_7 = 0, VAR_3 = 0; VAR_3 < VAR_6; ++VAR_3) {

        VAR_10 += (VAR_0->comps[VAR_4].data[VAR_3] - VAR_8) *
                  (VAR_0->comps[VAR_4].data[VAR_3] - VAR_8);
        VAR_11 += (VAR_1->comps[VAR_4].data[VAR_3] - VAR_9) *
                  (VAR_1->comps[VAR_4].data[VAR_3] - VAR_9);
        VAR_12 += (VAR_0->comps[VAR_4].data[VAR_3] - VAR_8) *
                   (VAR_1->comps[VAR_4].data[VAR_3] - VAR_9);
    }
    VAR_10 /= VAR_6 - 1;
    VAR_11 /= VAR_6 - 1;
    VAR_12 /= VAR_6 - 1;

    VAR_10 = FUNC_0(VAR_10);
    VAR_11 = FUNC_0(VAR_11);
    VAR_12 = FUNC_0(VAR_12);





    VAR_16 = (0.01 * VAR_2) * (0.01 * VAR_2);
    VAR_13 = ((2 * VAR_8 * VAR_9) + VAR_16) / ((VAR_8 * VAR_8) + (VAR_9 * VAR_8) + VAR_16);

    VAR_17 = (0.03 * VAR_2) * (0.03 * VAR_2);
    VAR_14 = ((2 * VAR_10 * VAR_11) + VAR_17) / ((VAR_10 * VAR_10) +
                                            (VAR_11 * VAR_11) + VAR_17);

    VAR_18 = VAR_17 / 2;
    VAR_15 = (VAR_12 + VAR_18) / (VAR_10 * VAR_11 + VAR_18);


    VAR_7 = VAR_13 * VAR_14 * VAR_15;
    return VAR_7;
}
