
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_15__ ;


typedef int opj_stream_private_t ;
struct TYPE_23__ {int * icc_profile_buf; int icc_profile_len; scalar_t__ jp2_cdef; TYPE_3__* jp2_pclr; } ;
struct TYPE_21__ {int enumcs; TYPE_8__ color; TYPE_15__* j2k; } ;
typedef TYPE_4__ opj_jp2_t ;
struct TYPE_22__ {int icc_profile_len; int * icc_profile_buf; int color_space; } ;
typedef TYPE_5__ opj_image_t ;
typedef int opj_event_mgr_t ;
struct TYPE_20__ {int cmap; } ;
struct TYPE_18__ {scalar_t__ m_numcomps_to_decode; } ;
struct TYPE_19__ {TYPE_1__ m_decoder; } ;
struct TYPE_17__ {TYPE_2__ m_specific_param; } ;
typedef int OPJ_UINT32 ;
typedef int OPJ_BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (TYPE_15__*,int *,TYPE_5__*,int *,int ) ;
 int FUNC_2 (TYPE_5__*,TYPE_8__*,int *) ;
 int FUNC_3 (TYPE_5__*,TYPE_8__*,int *) ;
 int FUNC_4 (TYPE_5__*,TYPE_8__*,int *) ;
 int FUNC_5 (TYPE_8__*) ;

OPJ_BOOL FUNC_6(opj_jp2_t *VAR_10,
                          opj_stream_private_t *VAR_11,
                          opj_image_t* VAR_12,
                          opj_event_mgr_t * VAR_13,
                          OPJ_UINT32 VAR_14
                         )
{
    if (!VAR_12) {
        return VAR_8;
    }

    FUNC_0(VAR_13, VAR_1,
                  "JP2 box which are after the codestream will not be read by this function.\n");

    if (! FUNC_1(VAR_10->j2k, VAR_11, VAR_12, VAR_13, VAR_14)) {
        FUNC_0(VAR_13, VAR_0,
                      "Failed to decode the codestream in the JP2 file\n");
        return VAR_8;
    }

    if (VAR_10->j2k->m_specific_param.m_decoder.m_numcomps_to_decode) {

        return VAR_9;
    }

    if (!FUNC_4(VAR_12, &(VAR_10->color), VAR_13)) {
        return VAR_8;
    }


    if (VAR_10->enumcs == 16) {
        VAR_12->color_space = VAR_5;
    } else if (VAR_10->enumcs == 17) {
        VAR_12->color_space = VAR_4;
    } else if (VAR_10->enumcs == 18) {
        VAR_12->color_space = VAR_6;
    } else if (VAR_10->enumcs == 24) {
        VAR_12->color_space = VAR_3;
    } else if (VAR_10->enumcs == 12) {
        VAR_12->color_space = VAR_2;
    } else {
        VAR_12->color_space = VAR_7;
    }

    if (VAR_10->color.jp2_pclr) {

        if (!VAR_10->color.jp2_pclr->cmap) {
            FUNC_5(&(VAR_10->color));
        } else {
            if (!FUNC_3(VAR_12, &(VAR_10->color), VAR_13)) {
                return VAR_8;
            }
        }
    }


    if (VAR_10->color.jp2_cdef) {
        FUNC_2(VAR_12, &(VAR_10->color), VAR_13);
    }

    if (VAR_10->color.icc_profile_buf) {
        VAR_12->icc_profile_buf = VAR_10->color.icc_profile_buf;
        VAR_12->icc_profile_len = VAR_10->color.icc_profile_len;
        VAR_10->color.icc_profile_buf = ((void*)0);
    }

    return VAR_9;
}
