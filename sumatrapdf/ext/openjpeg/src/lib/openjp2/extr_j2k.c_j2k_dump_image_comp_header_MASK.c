
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dx; int dy; int prec; int sgnd; } ;
typedef TYPE_1__ opj_image_comp_t ;
typedef scalar_t__ OPJ_BOOL ;
typedef int FILE ;


 int FUNC_0 (int *,char*,...) ;
 int * VAR_0 ;

void FUNC_1(opj_image_comp_t* VAR_1,
                                OPJ_BOOL VAR_2, FILE* VAR_3)
{
    char VAR_4[3];

    if (VAR_2) {
        FUNC_0(VAR_0, "[DEV] Dump an image_comp_header struct {\n");
        VAR_4[0] = '\0';
    } else {
        VAR_4[0] = '\t';
        VAR_4[1] = '\t';
        VAR_4[2] = '\0';
    }

    FUNC_0(VAR_3, "%s dx=%d, dy=%d\n", VAR_4, VAR_1->dx, VAR_1->dy);
    FUNC_0(VAR_3, "%s prec=%d\n", VAR_4, VAR_1->prec);
    FUNC_0(VAR_3, "%s sgnd=%d\n", VAR_4, VAR_1->sgnd);

    if (VAR_2) {
        FUNC_0(VAR_3, "}\n");
    }
}
