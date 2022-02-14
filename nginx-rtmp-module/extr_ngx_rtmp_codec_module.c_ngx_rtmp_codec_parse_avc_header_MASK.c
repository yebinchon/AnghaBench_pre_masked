
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int ngx_uint_t ;
struct TYPE_14__ {TYPE_2__* connection; } ;
typedef TYPE_3__ ngx_rtmp_session_t ;
struct TYPE_15__ {int avc_profile; int avc_compat; int avc_level; int avc_nal_bytes; int avc_ref_frames; int width; int height; } ;
typedef TYPE_4__ ngx_rtmp_codec_ctx_t ;
typedef int ngx_rtmp_bit_reader_t ;
struct TYPE_16__ {TYPE_1__* buf; } ;
typedef TYPE_5__ ngx_chain_t ;
struct TYPE_13__ {int log; } ;
struct TYPE_12__ {int last; int pos; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,char*,int,int,int,int,int,int,int) ;
 int FUNC_1 (int *,int ,int ) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_3__*,char*,TYPE_5__*) ;
 int VAR_1 ;
 TYPE_4__* FUNC_6 (TYPE_3__*,int ) ;

__attribute__((used)) static void
FUNC_7(ngx_rtmp_session_t *VAR_2, ngx_chain_t *VAR_3)
{
    ngx_uint_t VAR_4, VAR_5, VAR_6, VAR_7, VAR_8,
                            VAR_9, VAR_10, VAR_11, VAR_12, VAR_13,
                            VAR_14;
    ngx_rtmp_codec_ctx_t *VAR_15;
    ngx_rtmp_bit_reader_t VAR_16;





    VAR_15 = FUNC_6(VAR_2, VAR_1);

    FUNC_1(&VAR_16, VAR_3->buf->pos, VAR_3->buf->last);

    FUNC_2(&VAR_16, 48);

    VAR_15->avc_profile = (ngx_uint_t) FUNC_3(&VAR_16);
    VAR_15->avc_compat = (ngx_uint_t) FUNC_3(&VAR_16);
    VAR_15->avc_level = (ngx_uint_t) FUNC_3(&VAR_16);


    VAR_15->avc_nal_bytes = (ngx_uint_t) ((FUNC_3(&VAR_16) & 0x03) + 1);


    if ((FUNC_3(&VAR_16) & 0x1f) == 0) {
        return;
    }


    FUNC_2(&VAR_16, 16);


    if (FUNC_3(&VAR_16) != 0x67) {
        return;
    }




    VAR_4 = (ngx_uint_t) FUNC_2(&VAR_16, 8);


    FUNC_2(&VAR_16, 8);


    FUNC_2(&VAR_16, 8);


    FUNC_4(&VAR_16);

    if (VAR_4 == 100 || VAR_4 == 110 ||
        VAR_4 == 122 || VAR_4 == 244 || VAR_4 == 44 ||
        VAR_4 == 83 || VAR_4 == 86 || VAR_4 == 118)
    {

        VAR_13 = (ngx_uint_t) FUNC_4(&VAR_16);

        if (VAR_13 == 3) {


            FUNC_2(&VAR_16, 1);
        }


        FUNC_4(&VAR_16);


        FUNC_4(&VAR_16);


        FUNC_2(&VAR_16, 1);


        if (FUNC_2(&VAR_16, 1)) {

            for (VAR_12 = 0; VAR_12 < (VAR_13 != 3 ? 8u : 12u); VAR_12++) {


                if (FUNC_2(&VAR_16, 1)) {






                }
            }
        }
    }


    FUNC_4(&VAR_16);


    switch (FUNC_4(&VAR_16)) {
    case 0:


        FUNC_4(&VAR_16);
        break;

    case 1:


        FUNC_2(&VAR_16, 1);


        FUNC_4(&VAR_16);


        FUNC_4(&VAR_16);


        VAR_14 = (ngx_uint_t) FUNC_4(&VAR_16);

        for (VAR_12 = 0; VAR_12 < VAR_14; VAR_12++) {


            FUNC_4(&VAR_16);
        }
    }


    VAR_15->avc_ref_frames = (ngx_uint_t) FUNC_4(&VAR_16);


    FUNC_2(&VAR_16, 1);


    VAR_5 = (ngx_uint_t) FUNC_4(&VAR_16);


    VAR_6 = (ngx_uint_t) FUNC_4(&VAR_16);


    VAR_11 = (ngx_uint_t) FUNC_2(&VAR_16, 1);

    if (!VAR_11) {


        FUNC_2(&VAR_16, 1);
    }


    FUNC_2(&VAR_16, 1);


    if (FUNC_2(&VAR_16, 1)) {

        VAR_7 = (ngx_uint_t) FUNC_4(&VAR_16);
        VAR_8 = (ngx_uint_t) FUNC_4(&VAR_16);
        VAR_9 = (ngx_uint_t) FUNC_4(&VAR_16);
        VAR_10 = (ngx_uint_t) FUNC_4(&VAR_16);

    } else {

        VAR_7 = 0;
        VAR_8 = 0;
        VAR_9 = 0;
        VAR_10 = 0;
    }

    VAR_15->width = (VAR_5 + 1) * 16 - (VAR_7 + VAR_8) * 2;
    VAR_15->height = (2 - VAR_11) * (VAR_6 + 1) * 16 -
                  (VAR_9 + VAR_10) * 2;

    FUNC_0(VAR_0, VAR_2->connection->log, 0,
                   "codec: avc header "
                   "profile=%ui, compat=%ui, level=%ui, "
                   "nal_bytes=%ui, ref_frames=%ui, width=%ui, height=%ui",
                   VAR_15->avc_profile, VAR_15->avc_compat, VAR_15->avc_level,
                   VAR_15->avc_nal_bytes, VAR_15->avc_ref_frames,
                   VAR_15->width, VAR_15->height);
}
