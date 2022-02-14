
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int x0; int y0; int z0; int x1; int y1; int z1; int numcomps; TYPE_2__* comps; } ;
typedef TYPE_1__ opj_volume_t ;
struct TYPE_5__ {int dx; int dy; int dz; int prec; int sgnd; } ;
typedef TYPE_2__ opj_volume_comp_t ;
typedef int FILE ;


 int FUNC_0 (int *,char*,...) ;

void FUNC_1(FILE *VAR_0, opj_volume_t * VAR_1)
{
    int VAR_2;
    FUNC_0(VAR_0, "volume {\n");
    FUNC_0(VAR_0, "  x0=%d, y0=%d, z0=%d, x1=%d, y1=%d, z1=%d\n", VAR_1->x0, VAR_1->y0,
            VAR_1->z0, VAR_1->x1, VAR_1->y1, VAR_1->z1);
    FUNC_0(VAR_0, "  numcomps=%d\n", VAR_1->numcomps);
    for (VAR_2 = 0; VAR_2 < VAR_1->numcomps; VAR_2++) {
        opj_volume_comp_t *VAR_3 = &VAR_1->comps[VAR_2];
        FUNC_0(VAR_0, "  comp %d {\n", VAR_2);
        FUNC_0(VAR_0, "    dx=%d, dy=%d, dz=%d\n", VAR_3->dx, VAR_3->dy, VAR_3->dz);
        FUNC_0(VAR_0, "    prec=%d\n", VAR_3->prec);
        FUNC_0(VAR_0, "    sgnd=%d\n", VAR_3->sgnd);
        FUNC_0(VAR_0, "  }\n");
    }
    FUNC_0(VAR_0, "}\n");
}
