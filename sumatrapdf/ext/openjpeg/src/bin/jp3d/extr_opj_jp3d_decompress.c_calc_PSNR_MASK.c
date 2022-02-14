
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int x1; int x0; int y1; int y0; int z1; int z0; int numcomps; TYPE_1__* comps; } ;
typedef TYPE_2__ opj_volume_t ;
struct TYPE_5__ {int prec; int* data; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;

__attribute__((used)) static double FUNC_2(opj_volume_t *VAR_1, opj_volume_t *VAR_2)
{
    int VAR_3, VAR_4, VAR_5, VAR_6 = 0, VAR_7;
    double VAR_8, VAR_9 = 0;
    int VAR_10 = 1;

    VAR_3 = (VAR_1->comps[VAR_6].prec <= 8) ? 255 : (1 <<
            VAR_1->comps[VAR_6].prec) - 1;
    if (VAR_10) {
        VAR_7 = (VAR_1->x1 - VAR_1->x0) * (VAR_1->y1 - VAR_1->y0) *
               (VAR_1->z1 - VAR_1->z0);

        for (VAR_6 = 0; VAR_6 < VAR_1->numcomps; VAR_6++) {
            for (VAR_8 = 0, VAR_4 = 0; VAR_4 < VAR_7; ++VAR_4) {
                if ((VAR_2->comps[VAR_6].data[VAR_4] < 0) ||
                        (VAR_2->comps[VAR_6].data[VAR_4] > VAR_3)) {
                    FUNC_0(VAR_0, "[WARNING] Data out of range during PSNR computing...\n");
                } else {
                    VAR_8 += (VAR_1->comps[VAR_6].data[VAR_4] - VAR_2->comps[VAR_6].data[VAR_4]) *
                           (VAR_1->comps[VAR_6].data[VAR_4] - VAR_2->comps[VAR_6].data[VAR_4]);
                }
            }
        }
        VAR_8 /= VAR_7;
        VAR_9 = ((VAR_8 == 0.0) ? 0.0 : 10 * FUNC_1(VAR_3 * VAR_3 / VAR_8));
    } else {
        VAR_7 = (VAR_1->x1 - VAR_1->x0) * (VAR_1->y1 - VAR_1->y0);

        for (VAR_5 = 0; VAR_5 < VAR_1->z1 - VAR_1->z0; VAR_5++) {
            int VAR_11 = VAR_5 * VAR_7;
            for (VAR_8 = 0, VAR_6 = 0; VAR_6 < VAR_1->numcomps; VAR_6++) {
                for (VAR_4 = 0; VAR_4 < VAR_7; ++VAR_4) {
                    if ((VAR_2->comps[VAR_6].data[VAR_4 + VAR_11] < 0) ||
                            (VAR_2->comps[VAR_6].data[VAR_4 + VAR_11] > VAR_3)) {
                        FUNC_0(VAR_0, "[WARNING] Data out of range during PSNR computing...\n");
                    } else {
                        VAR_8 += (VAR_1->comps[VAR_6].data[VAR_4 + VAR_11] - VAR_2->comps[VAR_6].data[VAR_4
                                + VAR_11]) * (VAR_1->comps[VAR_6].data[VAR_4 + VAR_11] -
                                              VAR_2->comps[VAR_6].data[VAR_4 + VAR_11]);
                    }
                }
            }
            VAR_8 /= VAR_7;
            VAR_9 = VAR_9 + ((VAR_8 == 0.0) ? 0.0 : 10 * FUNC_1(VAR_3 * VAR_3 / VAR_8));
        }

    }
    if (VAR_9 == 0) {
        return -1.0;
    }

    return VAR_9;

}
