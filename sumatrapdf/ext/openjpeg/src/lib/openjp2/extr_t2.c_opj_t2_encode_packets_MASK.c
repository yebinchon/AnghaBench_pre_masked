
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_38__ TYPE_9__ ;
typedef struct TYPE_37__ TYPE_8__ ;
typedef struct TYPE_36__ TYPE_7__ ;
typedef struct TYPE_35__ TYPE_6__ ;
typedef struct TYPE_34__ TYPE_5__ ;
typedef struct TYPE_33__ TYPE_4__ ;
typedef struct TYPE_32__ TYPE_3__ ;
typedef struct TYPE_31__ TYPE_2__ ;
typedef struct TYPE_30__ TYPE_1__ ;
typedef struct TYPE_29__ TYPE_12__ ;
typedef struct TYPE_28__ TYPE_11__ ;
typedef struct TYPE_27__ TYPE_10__ ;


struct TYPE_33__ {int end_header; TYPE_9__* packet; } ;
typedef TYPE_4__ opj_tile_info_t ;
struct TYPE_34__ {size_t numpocs; int POC; } ;
typedef TYPE_5__ opj_tcp_t ;
struct TYPE_35__ {int packno; } ;
typedef TYPE_6__ opj_tcd_tile_t ;
struct TYPE_36__ {TYPE_11__* cp; TYPE_10__* image; } ;
typedef TYPE_7__ opj_t2_t ;
struct TYPE_30__ {scalar_t__ prg; } ;
struct TYPE_37__ {size_t layno; TYPE_1__ poc; } ;
typedef TYPE_8__ opj_pi_iterator_t ;
struct TYPE_38__ {int start_pos; int end_pos; int end_ph_pos; } ;
typedef TYPE_9__ opj_packet_info_t ;
struct TYPE_27__ {int numcomps; } ;
typedef TYPE_10__ opj_image_t ;
typedef int opj_event_mgr_t ;
struct TYPE_31__ {scalar_t__ m_max_comp_size; int m_tp_on; } ;
struct TYPE_32__ {TYPE_2__ m_enc; } ;
struct TYPE_28__ {scalar_t__ rsiz; TYPE_3__ m_specific_param; TYPE_5__* tcps; } ;
typedef TYPE_11__ opj_cp_t ;
struct TYPE_29__ {size_t packno; TYPE_4__* tile; scalar_t__ index_write; } ;
typedef TYPE_12__ opj_codestream_info_t ;
typedef size_t OPJ_UINT32 ;
typedef int OPJ_INT32 ;
typedef int OPJ_BYTE ;
typedef int OPJ_BOOL ;
typedef int J2K_T2_MODE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_8__*,TYPE_11__*,size_t,size_t,size_t,int ,int ) ;
 int FUNC_1 (TYPE_8__*,size_t) ;
 TYPE_8__* FUNC_2 (TYPE_10__*,TYPE_11__*,size_t,int ) ;
 scalar_t__ FUNC_3 (TYPE_8__*) ;
 int FUNC_4 (size_t,TYPE_6__*,TYPE_5__*,TYPE_8__*,int *,size_t*,size_t,TYPE_12__*,int ,int *) ;

OPJ_BOOL FUNC_5(opj_t2_t* VAR_5,
                               OPJ_UINT32 VAR_6,
                               opj_tcd_tile_t *VAR_7,
                               OPJ_UINT32 VAR_8,
                               OPJ_BYTE *VAR_9,
                               OPJ_UINT32 * VAR_10,
                               OPJ_UINT32 VAR_11,
                               opj_codestream_info_t *VAR_12,
                               OPJ_UINT32 VAR_13,
                               OPJ_INT32 VAR_14,
                               OPJ_UINT32 VAR_15,
                               J2K_T2_MODE VAR_16,
                               opj_event_mgr_t *VAR_17)
{
    OPJ_BYTE *VAR_18 = VAR_9;
    OPJ_UINT32 VAR_19 = 0;
    OPJ_UINT32 VAR_20;
    OPJ_UINT32 VAR_21;
    opj_pi_iterator_t *VAR_22 = 00;
    opj_pi_iterator_t *VAR_23 = 00;
    opj_image_t *VAR_24 = VAR_5->image;
    opj_cp_t *VAR_25 = VAR_5->cp;
    opj_tcp_t *VAR_26 = &VAR_25->tcps[VAR_6];
    OPJ_UINT32 VAR_27 = (VAR_25->rsiz == VAR_1) ? 2 : 1;
    OPJ_UINT32 VAR_28 = VAR_25->m_specific_param.m_enc.m_max_comp_size > 0 ?
                            VAR_24->numcomps : 1;
    OPJ_UINT32 VAR_29 = VAR_26->numpocs + 1;

    VAR_22 = FUNC_2(VAR_24, VAR_25, VAR_6, VAR_16);
    if (!VAR_22) {
        return VAR_0;
    }

    * VAR_10 = 0;

    if (VAR_16 == VAR_4) {
        VAR_23 = VAR_22;

        for (VAR_20 = 0; VAR_20 < VAR_28; ++VAR_20) {
            OPJ_UINT32 VAR_30 = 0;
            VAR_23 = VAR_22;

            for (VAR_21 = 0; VAR_21 < VAR_27 ; ++VAR_21) {
                OPJ_UINT32 VAR_31 = VAR_20;


                FUNC_0(VAR_22, VAR_25, VAR_6, VAR_21, VAR_31, VAR_14, VAR_16);

                if (VAR_23->poc.prg == VAR_2) {

                    FUNC_1(VAR_22, VAR_29);
                    return VAR_0;
                }
                while (FUNC_3(VAR_23)) {
                    if (VAR_23->layno < VAR_8) {
                        VAR_19 = 0;

                        if (! FUNC_4(VAR_6, VAR_7, VAR_26, VAR_23,
                                                   VAR_18, &VAR_19,
                                                   VAR_11, VAR_12,
                                                   VAR_16,
                                                   VAR_17)) {
                            FUNC_1(VAR_22, VAR_29);
                            return VAR_0;
                        }

                        VAR_30 += VAR_19;
                        VAR_18 += VAR_19;
                        VAR_11 -= VAR_19;

                        * VAR_10 += VAR_19;
                    }
                }

                if (VAR_25->m_specific_param.m_enc.m_max_comp_size) {
                    if (VAR_30 > VAR_25->m_specific_param.m_enc.m_max_comp_size) {
                        FUNC_1(VAR_22, VAR_29);
                        return VAR_0;
                    }
                }

                ++VAR_23;
            }
        }
    } else {
        FUNC_0(VAR_22, VAR_25, VAR_6, VAR_15, VAR_13, VAR_14,
                             VAR_16);

        VAR_23 = &VAR_22[VAR_15];
        if (VAR_23->poc.prg == VAR_2) {

            FUNC_1(VAR_22, VAR_29);
            return VAR_0;
        }
        while (FUNC_3(VAR_23)) {
            if (VAR_23->layno < VAR_8) {
                VAR_19 = 0;

                if (! FUNC_4(VAR_6, VAR_7, VAR_26, VAR_23,
                                           VAR_18, &VAR_19, VAR_11,
                                           VAR_12, VAR_16, VAR_17)) {
                    FUNC_1(VAR_22, VAR_29);
                    return VAR_0;
                }

                VAR_18 += VAR_19;
                VAR_11 -= VAR_19;

                * VAR_10 += VAR_19;


                if (VAR_12) {
                    if (VAR_12->index_write) {
                        opj_tile_info_t *VAR_32 = &VAR_12->tile[VAR_6];
                        opj_packet_info_t *VAR_33 = &VAR_32->packet[VAR_12->packno];
                        if (!VAR_12->packno) {
                            VAR_33->start_pos = VAR_32->end_header + 1;
                        } else {
                            VAR_33->start_pos = ((VAR_25->m_specific_param.m_enc.m_tp_on | VAR_26->POC) &&
                                                  VAR_33->start_pos) ? VAR_33->start_pos : VAR_32->packet[VAR_12->packno -
                                                                            1].end_pos + 1;
                        }
                        VAR_33->end_pos = VAR_33->start_pos + VAR_19 - 1;
                        VAR_33->end_ph_pos += VAR_33->start_pos -
                                               1;

                    }

                    VAR_12->packno++;
                }

                ++VAR_7->packno;
            }
        }
    }

    FUNC_1(VAR_22, VAR_29);

    return VAR_3;
}
