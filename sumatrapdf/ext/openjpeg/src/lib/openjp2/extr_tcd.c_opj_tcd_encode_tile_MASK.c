
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_9__ ;
typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_10__ ;


struct TYPE_27__ {size_t numresolutions; TYPE_8__* resolutions; } ;
typedef TYPE_6__ opj_tcd_tilecomp_t ;
struct TYPE_28__ {scalar_t__ cur_tp_num; size_t tcd_tileno; TYPE_4__* tcp; TYPE_3__* tcd_image; TYPE_1__* cp; } ;
typedef TYPE_7__ opj_tcd_t ;
struct TYPE_29__ {size_t pw; size_t ph; } ;
typedef TYPE_8__ opj_tcd_resolution_t ;
struct TYPE_30__ {scalar_t__* prch; scalar_t__* prcw; } ;
typedef TYPE_9__ opj_tccp_t ;
typedef int opj_packet_info_t ;
typedef int opj_event_mgr_t ;
struct TYPE_21__ {int index_write; TYPE_5__* tile; scalar_t__ numlayers; scalar_t__ numcomps; } ;
typedef TYPE_10__ opj_codestream_info_t ;
struct TYPE_26__ {int* pw; int* ph; int* pdx; int* pdy; int * packet; } ;
struct TYPE_25__ {TYPE_9__* tccps; } ;
struct TYPE_24__ {TYPE_2__* tiles; } ;
struct TYPE_23__ {TYPE_6__* comps; } ;
struct TYPE_22__ {TYPE_4__* tcps; } ;
typedef size_t OPJ_UINT32 ;
typedef size_t OPJ_SIZE_T ;
typedef int OPJ_BYTE ;
typedef int OPJ_BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (size_t,int) ;
 int FUNC_1 (TYPE_7__*) ;
 int FUNC_2 (TYPE_7__*) ;
 int FUNC_3 (TYPE_7__*) ;
 int FUNC_4 (TYPE_7__*,int *,size_t,TYPE_10__*,int *) ;
 int FUNC_5 (TYPE_7__*) ;
 int FUNC_6 (TYPE_7__*,int *,size_t*,size_t,TYPE_10__*,int *) ;

OPJ_BOOL FUNC_7(opj_tcd_t *VAR_2,
                             OPJ_UINT32 VAR_3,
                             OPJ_BYTE *VAR_4,
                             OPJ_UINT32 * VAR_5,
                             OPJ_UINT32 VAR_6,
                             opj_codestream_info_t *VAR_7,
                             opj_event_mgr_t *VAR_8)
{

    if (VAR_2->cur_tp_num == 0) {

        VAR_2->tcd_tileno = VAR_3;
        VAR_2->tcp = &VAR_2->cp->tcps[VAR_3];


        if (VAR_7) {
            OPJ_UINT32 VAR_9 = 0;
            OPJ_UINT32 VAR_10;
            opj_tcd_tilecomp_t *VAR_11 =
                &VAR_2->tcd_image->tiles->comps[0];
            opj_tccp_t *VAR_12 = VAR_2->tcp->tccps;

            for (VAR_10 = 0; VAR_10 < VAR_11->numresolutions; VAR_10++) {
                opj_tcd_resolution_t *VAR_13 = &VAR_11->resolutions[VAR_10];

                VAR_7->tile[VAR_3].pw[VAR_10] = (int)VAR_13->pw;
                VAR_7->tile[VAR_3].ph[VAR_10] = (int)VAR_13->ph;

                VAR_9 += VAR_13->pw * VAR_13->ph;
                VAR_7->tile[VAR_3].pdx[VAR_10] = (int)VAR_12->prcw[VAR_10];
                VAR_7->tile[VAR_3].pdy[VAR_10] = (int)VAR_12->prch[VAR_10];
            }
            VAR_7->tile[VAR_3].packet = (opj_packet_info_t*) FUNC_0((
                    OPJ_SIZE_T)VAR_7->numcomps * (OPJ_SIZE_T)VAR_7->numlayers *
                                                  VAR_9,
                                                  sizeof(opj_packet_info_t));
            if (!VAR_7->tile[VAR_3].packet) {

                return VAR_0;
            }
        }




        if (! FUNC_1(VAR_2)) {
            return VAR_0;
        }



        if (! FUNC_3(VAR_2)) {
            return VAR_0;
        }



        if (! FUNC_2(VAR_2)) {
            return VAR_0;
        }



        if (! FUNC_5(VAR_2)) {
            return VAR_0;
        }



        if (! FUNC_4(VAR_2, VAR_4, VAR_6,
                                           VAR_7, VAR_8)) {
            return VAR_0;
        }


    }



    if (VAR_7) {
        VAR_7->index_write = 1;
    }


    if (! FUNC_6(VAR_2, VAR_4, VAR_5, VAR_6,
                            VAR_7, VAR_8)) {
        return VAR_0;
    }




    return VAR_1;
}
