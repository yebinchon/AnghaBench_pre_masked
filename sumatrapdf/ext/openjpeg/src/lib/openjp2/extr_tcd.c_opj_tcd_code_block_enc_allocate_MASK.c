
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int opj_tcd_pass_t ;
typedef int opj_tcd_layer_t ;
struct TYPE_3__ {int * passes; int * layers; } ;
typedef TYPE_1__ opj_tcd_cblk_enc_t ;
typedef int OPJ_BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int) ;

__attribute__((used)) static OPJ_BOOL FUNC_1(opj_tcd_cblk_enc_t *
        VAR_2)
{
    if (! VAR_2->layers) {

        VAR_2->layers = (opj_tcd_layer_t*) FUNC_0(100,
                               sizeof(opj_tcd_layer_t));
        if (! VAR_2->layers) {
            return VAR_0;
        }
    }
    if (! VAR_2->passes) {
        VAR_2->passes = (opj_tcd_pass_t*) FUNC_0(100,
                               sizeof(opj_tcd_pass_t));
        if (! VAR_2->passes) {
            return VAR_0;
        }
    }
    return VAR_1;
}
