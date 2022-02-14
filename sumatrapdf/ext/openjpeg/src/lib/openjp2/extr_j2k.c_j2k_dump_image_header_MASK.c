
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int x0; int y0; int x1; int y1; int numcomps; int * comps; } ;
typedef TYPE_1__ opj_image_t ;
typedef int OPJ_UINT32 ;
typedef scalar_t__ OPJ_BOOL ;
typedef int FILE ;


 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,scalar_t__,int *) ;
 int * VAR_0 ;

void FUNC_2(opj_image_t* VAR_1, OPJ_BOOL VAR_2,
                           FILE* VAR_3)
{
    char VAR_4[2];

    if (VAR_2) {
        FUNC_0(VAR_0, "[DEV] Dump an image_header struct {\n");
        VAR_4[0] = '\0';
    } else {
        FUNC_0(VAR_3, "Image info {\n");
        VAR_4[0] = '\t';
        VAR_4[1] = '\0';
    }

    FUNC_0(VAR_3, "%s x0=%d, y0=%d\n", VAR_4, VAR_1->x0, VAR_1->y0);
    FUNC_0(VAR_3, "%s x1=%d, y1=%d\n", VAR_4, VAR_1->x1,
            VAR_1->y1);
    FUNC_0(VAR_3, "%s numcomps=%d\n", VAR_4, VAR_1->numcomps);

    if (VAR_1->comps) {
        OPJ_UINT32 VAR_5;
        for (VAR_5 = 0; VAR_5 < VAR_1->numcomps; VAR_5++) {
            FUNC_0(VAR_3, "%s\t component %d {\n", VAR_4, VAR_5);
            FUNC_1(&(VAR_1->comps[VAR_5]), VAR_2,
                                       VAR_3);
            FUNC_0(VAR_3, "%s}\n", VAR_4);
        }
    }

    FUNC_0(VAR_3, "}\n");
}
