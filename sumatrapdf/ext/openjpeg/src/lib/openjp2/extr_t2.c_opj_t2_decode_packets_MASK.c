
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_59__ TYPE_9__ ;
typedef struct TYPE_58__ TYPE_8__ ;
typedef struct TYPE_57__ TYPE_7__ ;
typedef struct TYPE_56__ TYPE_6__ ;
typedef struct TYPE_55__ TYPE_5__ ;
typedef struct TYPE_54__ TYPE_4__ ;
typedef struct TYPE_53__ TYPE_3__ ;
typedef struct TYPE_52__ TYPE_2__ ;
typedef struct TYPE_51__ TYPE_20__ ;
typedef struct TYPE_50__ TYPE_1__ ;
typedef struct TYPE_49__ TYPE_19__ ;
typedef struct TYPE_48__ TYPE_18__ ;
typedef struct TYPE_47__ TYPE_17__ ;
typedef struct TYPE_46__ TYPE_16__ ;
typedef struct TYPE_45__ TYPE_15__ ;
typedef struct TYPE_44__ TYPE_14__ ;
typedef struct TYPE_43__ TYPE_13__ ;
typedef struct TYPE_42__ TYPE_12__ ;
typedef struct TYPE_41__ TYPE_11__ ;
typedef struct TYPE_40__ TYPE_10__ ;


struct TYPE_56__ {int end_header; TYPE_3__* tp; TYPE_15__* packet; } ;
typedef TYPE_6__ opj_tile_info_v2_t ;
struct TYPE_57__ {size_t numpocs; scalar_t__ num_layers_to_decode; } ;
typedef TYPE_7__ opj_tcp_t ;
struct TYPE_58__ {scalar_t__ minimum_num_resolutions; TYPE_10__* resolutions; } ;
typedef TYPE_8__ opj_tcd_tilecomp_t ;
struct TYPE_59__ {TYPE_8__* comps; } ;
typedef TYPE_9__ opj_tcd_tile_t ;
typedef int opj_tcd_t ;
struct TYPE_40__ {size_t numbands; TYPE_12__* bands; } ;
typedef TYPE_10__ opj_tcd_resolution_t ;
struct TYPE_41__ {scalar_t__ y1; scalar_t__ x1; scalar_t__ y0; scalar_t__ x0; } ;
typedef TYPE_11__ opj_tcd_precinct_t ;
struct TYPE_42__ {int bandno; TYPE_11__* precincts; } ;
typedef TYPE_12__ opj_tcd_band_t ;
struct TYPE_43__ {TYPE_18__* cp; TYPE_16__* image; } ;
typedef TYPE_13__ opj_t2_t ;
struct TYPE_55__ {scalar_t__ prg; int prg1; } ;
struct TYPE_44__ {size_t compno; scalar_t__ resno; size_t precno; scalar_t__ layno; TYPE_5__ poc; } ;
typedef TYPE_14__ opj_pi_iterator_t ;
struct TYPE_45__ {int start_pos; scalar_t__ end_pos; int end_ph_pos; } ;
typedef TYPE_15__ opj_packet_info_t ;
struct TYPE_46__ {int numcomps; TYPE_17__* comps; } ;
typedef TYPE_16__ opj_image_t ;
struct TYPE_47__ {scalar_t__ resno_decoded; } ;
typedef TYPE_17__ opj_image_comp_t ;
typedef int opj_event_mgr_t ;
struct TYPE_50__ {scalar_t__ m_tp_on; } ;
struct TYPE_52__ {TYPE_1__ m_enc; } ;
struct TYPE_48__ {TYPE_2__ m_specific_param; TYPE_7__* tcps; } ;
typedef TYPE_18__ opj_cp_t ;
struct TYPE_49__ {TYPE_4__* tile_index; } ;
typedef TYPE_19__ opj_codestream_index_t ;
struct TYPE_54__ {TYPE_15__* packet; } ;
struct TYPE_53__ {size_t tp_numpacks; int tp_end_header; scalar_t__ tp_end_pos; } ;
struct TYPE_51__ {size_t packno; TYPE_6__* tile; } ;
typedef size_t OPJ_UINT32 ;
typedef scalar_t__ OPJ_INT32 ;
typedef int OPJ_BYTE ;
typedef scalar_t__ OPJ_BOOL ;


 int FUNC_0 (int ,char*,int ,size_t,scalar_t__,size_t,scalar_t__) ;
 int FUNC_1 (TYPE_19__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (scalar_t__*,scalar_t__,int) ;
 int FUNC_3 (scalar_t__*) ;
 scalar_t__ FUNC_4 (int) ;
 TYPE_14__* FUNC_5 (TYPE_16__*,TYPE_18__*,size_t) ;
 int FUNC_6 (TYPE_14__*,size_t) ;
 scalar_t__ FUNC_7 (TYPE_14__*) ;
 int FUNC_8 (TYPE_13__*,TYPE_9__*,TYPE_7__*,TYPE_14__*,int *,size_t*,size_t,TYPE_15__*,int *) ;
 int FUNC_9 (TYPE_13__*,TYPE_9__*,TYPE_7__*,TYPE_14__*,int *,size_t*,size_t,TYPE_15__*,int *) ;
 scalar_t__ FUNC_10 (int *,size_t,size_t,int ,size_t,size_t,size_t,size_t) ;
 scalar_t__ FUNC_11 (size_t,scalar_t__) ;
 TYPE_20__* VAR_3 ;
 int VAR_4 ;

OPJ_BOOL FUNC_12(opj_tcd_t* VAR_5,
                               opj_t2_t *VAR_6,
                               OPJ_UINT32 VAR_7,
                               opj_tcd_tile_t *VAR_8,
                               OPJ_BYTE *VAR_9,
                               OPJ_UINT32 * VAR_10,
                               OPJ_UINT32 VAR_11,
                               opj_codestream_index_t *VAR_12,
                               opj_event_mgr_t *VAR_13)
{
    OPJ_BYTE *VAR_14 = VAR_9;
    opj_pi_iterator_t *VAR_15 = 00;
    OPJ_UINT32 VAR_16;
    opj_image_t *VAR_17 = VAR_6->image;
    opj_cp_t *VAR_18 = VAR_6->cp;
    opj_tcp_t *VAR_19 = &(VAR_6->cp->tcps[VAR_7]);
    OPJ_UINT32 VAR_20;
    OPJ_UINT32 VAR_21 = VAR_19->numpocs + 1;
    opj_pi_iterator_t *VAR_22 = 00;




    opj_packet_info_t *VAR_23 = 00;
    opj_image_comp_t* VAR_24 = 00;

    FUNC_1(VAR_12);
    VAR_15 = FUNC_5(VAR_17, VAR_18, VAR_7);
    if (!VAR_15) {
        return VAR_0;
    }


    VAR_22 = VAR_15;

    for (VAR_16 = 0; VAR_16 <= VAR_19->numpocs; ++VAR_16) {






        OPJ_BOOL* VAR_25 = ((void*)0);

        if (VAR_22->poc.prg == VAR_1) {

            FUNC_6(VAR_15, VAR_21);
            return VAR_0;
        }

        VAR_25 = (OPJ_BOOL*)FUNC_4(VAR_17->numcomps * sizeof(OPJ_BOOL));
        if (!VAR_25) {
            FUNC_6(VAR_15, VAR_21);
            return VAR_0;
        }
        FUNC_2(VAR_25, VAR_2, VAR_17->numcomps * sizeof(OPJ_BOOL));

        while (FUNC_7(VAR_22)) {
            OPJ_BOOL VAR_26 = VAR_0;
            FUNC_0(VAR_4,
                        "packet offset=00000166 prg=%d cmptno=%02d rlvlno=%02d prcno=%03d lyrno=%02d\n\n",
                        VAR_22->poc.prg1, VAR_22->compno, VAR_22->resno,
                        VAR_22->precno, VAR_22->layno);



            if (VAR_22->layno >= VAR_19->num_layers_to_decode) {
                VAR_26 = VAR_2;
            }


            else if (VAR_22->resno >=
                     VAR_8->comps[VAR_22->compno].minimum_num_resolutions) {
                VAR_26 = VAR_2;
            } else {


                OPJ_UINT32 VAR_27;
                opj_tcd_tilecomp_t *VAR_28 = &VAR_8->comps[VAR_22->compno];
                opj_tcd_resolution_t *VAR_29 = &VAR_28->resolutions[VAR_22->resno];

                VAR_26 = VAR_2;
                for (VAR_27 = 0; VAR_27 < VAR_29->numbands; ++VAR_27) {
                    opj_tcd_band_t* VAR_30 = &VAR_29->bands[VAR_27];
                    opj_tcd_precinct_t* VAR_31 = &VAR_30->precincts[VAR_22->precno];

                    if (FUNC_10(VAR_5,
                                                            VAR_22->compno,
                                                            VAR_22->resno,
                                                            VAR_30->bandno,
                                                            (OPJ_UINT32)VAR_31->x0,
                                                            (OPJ_UINT32)VAR_31->y0,
                                                            (OPJ_UINT32)VAR_31->x1,
                                                            (OPJ_UINT32)VAR_31->y1)) {
                        VAR_26 = VAR_0;
                        break;
                    }
                }





            }

            if (!VAR_26) {
                VAR_20 = 0;

                VAR_25[VAR_22->compno] = VAR_0;

                if (! FUNC_8(VAR_6, VAR_8, VAR_19, VAR_22, VAR_14,
                                           &VAR_20, VAR_11, VAR_23, VAR_13)) {
                    FUNC_6(VAR_15, VAR_21);
                    FUNC_3(VAR_25);
                    return VAR_0;
                }

                VAR_24 = &(VAR_17->comps[VAR_22->compno]);
                VAR_24->resno_decoded = FUNC_11(VAR_22->resno,
                                            VAR_24->resno_decoded);
            } else {
                VAR_20 = 0;
                if (! FUNC_9(VAR_6, VAR_8, VAR_19, VAR_22, VAR_14,
                                         &VAR_20, VAR_11, VAR_23, VAR_13)) {
                    FUNC_6(VAR_15, VAR_21);
                    FUNC_3(VAR_25);
                    return VAR_0;
                }
            }

            if (VAR_25[VAR_22->compno]) {
                VAR_24 = &(VAR_17->comps[VAR_22->compno]);
                if (VAR_24->resno_decoded == 0) {
                    VAR_24->resno_decoded =
                        VAR_8->comps[VAR_22->compno].minimum_num_resolutions - 1;
                }
            }

            VAR_14 += VAR_20;
            VAR_11 -= VAR_20;
        }
        ++VAR_22;

        FUNC_3(VAR_25);
    }
    FUNC_6(VAR_15, VAR_21);
    *VAR_10 = (OPJ_UINT32)(VAR_14 - VAR_9);
    return VAR_2;
}
