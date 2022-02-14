
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int x1; int x0; int y1; int y0; scalar_t__ data_size; scalar_t__* data; } ;
typedef TYPE_1__ opj_tcd_cblk_enc_t ;
typedef scalar_t__ OPJ_UINT32 ;
typedef int OPJ_INT32 ;
typedef scalar_t__ OPJ_BYTE ;
typedef int OPJ_BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static OPJ_BOOL FUNC_2(opj_tcd_cblk_enc_t *
        VAR_2)
{
    OPJ_UINT32 VAR_3;





    VAR_3 = 2 + (OPJ_UINT32)((VAR_2->x1 - VAR_2->x0) *
                                   (VAR_2->y1 - VAR_2->y0) * (OPJ_INT32)sizeof(OPJ_UINT32));

    if (VAR_3 > VAR_2->data_size) {
        if (VAR_2->data) {

            FUNC_0(VAR_2->data - 1);
        }
        VAR_2->data = (OPJ_BYTE*) FUNC_1(VAR_3 + 1);
        if (! VAR_2->data) {
            VAR_2->data_size = 0U;
            return VAR_0;
        }
        VAR_2->data_size = VAR_3;





        VAR_2->data[0] = 0;
        VAR_2->data += 1;
    }
    return VAR_1;
}
