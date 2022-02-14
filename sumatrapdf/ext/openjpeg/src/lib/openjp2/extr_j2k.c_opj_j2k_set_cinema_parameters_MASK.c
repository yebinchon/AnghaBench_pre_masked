
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int numcomps; TYPE_1__* comps; } ;
typedef TYPE_2__ opj_image_t ;
typedef int opj_event_mgr_t ;
struct TYPE_8__ {int cp_tdx; int cp_tdy; char tp_flag; int tp_on; int cblockw_init; int cblockh_init; int roi_compno; int subsampling_dx; int subsampling_dy; int irreversible; int tcp_numlayers; int* tcp_rates; int rsiz; int numresolution; int csty; int res_spec; int* prcw_init; int* prch_init; int numpocs; int cp_disto_alloc; scalar_t__ max_cs_size; scalar_t__ max_comp_size; int POC; int prog_order; scalar_t__ mode; scalar_t__ image_offset_y0; scalar_t__ image_offset_x0; scalar_t__ cp_ty0; scalar_t__ cp_tx0; int tile_size_on; } ;
typedef TYPE_3__ opj_cparameters_t ;
struct TYPE_6__ {int w; int h; int prec; int dx; int dy; } ;
typedef int OPJ_UINT32 ;
typedef int OPJ_FLOAT32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int FUNC_0 (int *,int ,char*,...) ;
 scalar_t__ FUNC_1 (int ,int) ;

__attribute__((used)) static void FUNC_2(opj_cparameters_t *VAR_5,
        opj_image_t *VAR_6, opj_event_mgr_t *VAR_7)
{

    int VAR_8;


    VAR_5->tile_size_on = VAR_4;
    VAR_5->cp_tdx = 1;
    VAR_5->cp_tdy = 1;


    VAR_5->tp_flag = 'C';
    VAR_5->tp_on = 1;


    VAR_5->cp_tx0 = 0;
    VAR_5->cp_ty0 = 0;
    VAR_5->image_offset_x0 = 0;
    VAR_5->image_offset_y0 = 0;


    VAR_5->cblockw_init = 32;
    VAR_5->cblockh_init = 32;


    VAR_5->mode = 0;


    VAR_5->roi_compno = -1;


    VAR_5->subsampling_dx = 1;
    VAR_5->subsampling_dy = 1;


    VAR_5->irreversible = 1;


    if (VAR_5->tcp_numlayers > 1) {
        FUNC_0(VAR_7, VAR_0,
                      "JPEG 2000 Profile-3 and 4 (2k/4k dc profile) requires:\n"
                      "1 single quality layer"
                      "-> Number of layers forced to 1 (rather than %d)\n"
                      "-> Rate of the last layer (%3.1f) will be used",
                      VAR_5->tcp_numlayers,
                      VAR_5->tcp_rates[VAR_5->tcp_numlayers - 1]);
        VAR_5->tcp_rates[0] = VAR_5->tcp_rates[VAR_5->tcp_numlayers - 1];
        VAR_5->tcp_numlayers = 1;
    }


    switch (VAR_5->rsiz) {
    case 129:
        if (VAR_5->numresolution > 6) {
            FUNC_0(VAR_7, VAR_0,
                          "JPEG 2000 Profile-3 (2k dc profile) requires:\n"
                          "Number of decomposition levels <= 5\n"
                          "-> Number of decomposition levels forced to 5 (rather than %d)\n",
                          VAR_5->numresolution + 1);
            VAR_5->numresolution = 6;
        }
        break;
    case 128:
        if (VAR_5->numresolution < 2) {
            FUNC_0(VAR_7, VAR_0,
                          "JPEG 2000 Profile-4 (4k dc profile) requires:\n"
                          "Number of decomposition levels >= 1 && <= 6\n"
                          "-> Number of decomposition levels forced to 1 (rather than %d)\n",
                          VAR_5->numresolution + 1);
            VAR_5->numresolution = 1;
        } else if (VAR_5->numresolution > 7) {
            FUNC_0(VAR_7, VAR_0,
                          "JPEG 2000 Profile-4 (4k dc profile) requires:\n"
                          "Number of decomposition levels >= 1 && <= 6\n"
                          "-> Number of decomposition levels forced to 6 (rather than %d)\n",
                          VAR_5->numresolution + 1);
            VAR_5->numresolution = 7;
        }
        break;
    default :
        break;
    }


    VAR_5->csty |= 0x01;
    if (VAR_5->numresolution == 1) {
        VAR_5->res_spec = 1;
        VAR_5->prcw_init[0] = 128;
        VAR_5->prch_init[0] = 128;
    } else {
        VAR_5->res_spec = VAR_5->numresolution - 1;
        for (VAR_8 = 0; VAR_8 < VAR_5->res_spec; VAR_8++) {
            VAR_5->prcw_init[VAR_8] = 256;
            VAR_5->prch_init[VAR_8] = 256;
        }
    }


    VAR_5->prog_order = VAR_3;


    if (VAR_5->rsiz == 128) {
        VAR_5->numpocs = (OPJ_UINT32)FUNC_1(VAR_5->POC,
                              VAR_5->numresolution);
    } else {
        VAR_5->numpocs = 0;
    }


    VAR_5->cp_disto_alloc = 1;
    if (VAR_5->max_cs_size <= 0) {

        VAR_5->max_cs_size = VAR_2;
        FUNC_0(VAR_7, VAR_0,
                      "JPEG 2000 Profile-3 and 4 (2k/4k dc profile) requires:\n"
                      "Maximum 1302083 compressed bytes @ 24fps\n"
                      "As no rate has been given, this limit will be used.\n");
    } else if (VAR_5->max_cs_size > VAR_2) {
        FUNC_0(VAR_7, VAR_0,
                      "JPEG 2000 Profile-3 and 4 (2k/4k dc profile) requires:\n"
                      "Maximum 1302083 compressed bytes @ 24fps\n"
                      "-> Specified rate exceeds this limit. Rate will be forced to 1302083 bytes.\n");
        VAR_5->max_cs_size = VAR_2;
    }

    if (VAR_5->max_comp_size <= 0) {

        VAR_5->max_comp_size = VAR_1;
        FUNC_0(VAR_7, VAR_0,
                      "JPEG 2000 Profile-3 and 4 (2k/4k dc profile) requires:\n"
                      "Maximum 1041666 compressed bytes @ 24fps\n"
                      "As no rate has been given, this limit will be used.\n");
    } else if (VAR_5->max_comp_size > VAR_1) {
        FUNC_0(VAR_7, VAR_0,
                      "JPEG 2000 Profile-3 and 4 (2k/4k dc profile) requires:\n"
                      "Maximum 1041666 compressed bytes @ 24fps\n"
                      "-> Specified rate exceeds this limit. Rate will be forced to 1041666 bytes.\n");
        VAR_5->max_comp_size = VAR_1;
    }

    VAR_5->tcp_rates[0] = (OPJ_FLOAT32)(VAR_6->numcomps * VAR_6->comps[0].w *
                               VAR_6->comps[0].h * VAR_6->comps[0].prec) /
                               (OPJ_FLOAT32)(((OPJ_UINT32)VAR_5->max_cs_size) * 8 * VAR_6->comps[0].dx *
                                       VAR_6->comps[0].dy);

}
