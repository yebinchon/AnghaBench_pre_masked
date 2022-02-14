
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int numcomps; TYPE_1__* comps; } ;
typedef TYPE_2__ opj_image_t ;
struct TYPE_10__ {int cp_cinema; int numresolution; int tcp_numlayers; float* tcp_rates; int cp_disto_alloc; int max_comp_size; int POC; int numpocs; void* cp_rsiz; } ;
typedef TYPE_3__ opj_cparameters_t ;
struct TYPE_11__ {int* rates; } ;
typedef TYPE_4__ img_fol_t ;
struct TYPE_8__ {int w; int h; int prec; int dx; int dy; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (int ,int) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_2(opj_cparameters_t *VAR_6,
                                 opj_image_t *VAR_7, img_fol_t *VAR_8)
{
    int VAR_9;
    float VAR_10;

    switch (VAR_6->cp_cinema) {
    case 130:
    case 129:
        if (VAR_6->numresolution > 6) {
            VAR_6->numresolution = 6;
        }
        if (!((VAR_7->comps[0].w == 2048) | (VAR_7->comps[0].h == 1080))) {
            FUNC_0(VAR_5,
                    "Image coordinates %d x %d is not 2K compliant.\nJPEG Digital Cinema Profile-3 "
                    "(2K profile) compliance requires that at least one of coordinates match 2048 x 1080\n",
                    VAR_7->comps[0].w, VAR_7->comps[0].h);
            VAR_6->cp_rsiz = VAR_4;
        }
        break;

    case 128:
        if (VAR_6->numresolution < 1) {
            VAR_6->numresolution = 1;
        } else if (VAR_6->numresolution > 7) {
            VAR_6->numresolution = 7;
        }
        if (!((VAR_7->comps[0].w == 4096) | (VAR_7->comps[0].h == 2160))) {
            FUNC_0(VAR_5,
                    "Image coordinates %d x %d is not 4K compliant.\nJPEG Digital Cinema Profile-4"
                    "(4K profile) compliance requires that at least one of coordinates match 4096 x 2160\n",
                    VAR_7->comps[0].w, VAR_7->comps[0].h);
            VAR_6->cp_rsiz = VAR_4;
        }
        VAR_6->numpocs = FUNC_1(VAR_6->POC,
                                                VAR_6->numresolution);
        break;
    default :
        break;
    }

    switch (VAR_6->cp_cinema) {
    case 130:
    case 128:
        for (VAR_9 = 0 ; VAR_9 < VAR_6->tcp_numlayers ; VAR_9++) {
            VAR_10 = 0 ;
            if (VAR_8->rates[VAR_9] == 0) {
                VAR_6->tcp_rates[0] = ((float)(VAR_7->numcomps * VAR_7->comps[0].w *
                                                    VAR_7->comps[0].h * VAR_7->comps[0].prec)) /
                                           (VAR_0 * 8 * VAR_7->comps[0].dx * VAR_7->comps[0].dy);
            } else {
                VAR_10 = ((float)(VAR_7->numcomps * VAR_7->comps[0].w * VAR_7->comps[0].h *
                                     VAR_7->comps[0].prec)) /
                            (VAR_8->rates[VAR_9] * 8 * VAR_7->comps[0].dx * VAR_7->comps[0].dy);
                if (VAR_10 > VAR_0) {
                    VAR_6->tcp_rates[VAR_9] = ((float)(VAR_7->numcomps * VAR_7->comps[0].w *
                                                        VAR_7->comps[0].h * VAR_7->comps[0].prec)) /
                                               (VAR_0 * 8 * VAR_7->comps[0].dx * VAR_7->comps[0].dy);
                } else {
                    VAR_6->tcp_rates[VAR_9] = VAR_8->rates[VAR_9];
                }
            }
        }
        VAR_6->max_comp_size = VAR_2;
        break;

    case 129:
        for (VAR_9 = 0 ; VAR_9 < VAR_6->tcp_numlayers ; VAR_9++) {
            VAR_10 = 0 ;
            if (VAR_8->rates[VAR_9] == 0) {
                VAR_6->tcp_rates[0] = ((float)(VAR_7->numcomps * VAR_7->comps[0].w *
                                                    VAR_7->comps[0].h * VAR_7->comps[0].prec)) /
                                           (VAR_1 * 8 * VAR_7->comps[0].dx * VAR_7->comps[0].dy);
            } else {
                VAR_10 = ((float)(VAR_7->numcomps * VAR_7->comps[0].w * VAR_7->comps[0].h *
                                     VAR_7->comps[0].prec)) /
                            (VAR_8->rates[VAR_9] * 8 * VAR_7->comps[0].dx * VAR_7->comps[0].dy);
                if (VAR_10 > VAR_1) {
                    VAR_6->tcp_rates[0] = ((float)(VAR_7->numcomps * VAR_7->comps[0].w *
                                                        VAR_7->comps[0].h * VAR_7->comps[0].prec)) /
                                               (VAR_1 * 8 * VAR_7->comps[0].dx * VAR_7->comps[0].dy);
                } else {
                    VAR_6->tcp_rates[VAR_9] = VAR_8->rates[VAR_9];
                }
            }
        }
        VAR_6->max_comp_size = VAR_3;
        break;
    default:
        break;
    }
    VAR_6->cp_disto_alloc = 1;
}
