
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef int WPACKET ;
struct TYPE_22__ {scalar_t__ max_ver; } ;
struct TYPE_23__ {unsigned char* client_random; TYPE_2__ tmp; } ;
struct TYPE_27__ {scalar_t__ hello_retry_request; scalar_t__ version; int options; size_t tmp_session_id_len; unsigned char* tmp_session_id; TYPE_4__* ctx; TYPE_3__ s3; TYPE_1__* d1; TYPE_5__* session; scalar_t__ new_session; int client_version; } ;
struct TYPE_26__ {int id; } ;
struct TYPE_25__ {scalar_t__ ssl_version; unsigned char* session_id; int session_id_length; } ;
struct TYPE_24__ {scalar_t__ comp_methods; } ;
struct TYPE_21__ {int cookie_len; int cookie; } ;
typedef TYPE_5__ SSL_SESSION ;
typedef TYPE_6__ SSL_COMP ;
typedef TYPE_7__ SSL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (unsigned char*,size_t) ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_1 (TYPE_7__*) ;
 int VAR_7 ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_7__*) ;
 int FUNC_4 (TYPE_7__*,int ,int ,int) ;
 scalar_t__ VAR_8 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned char*,size_t) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int ,int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (unsigned char*,unsigned char*,size_t) ;
 int FUNC_14 (scalar_t__) ;
 TYPE_6__* FUNC_15 (scalar_t__,int) ;
 scalar_t__ FUNC_16 (TYPE_7__*) ;
 int FUNC_17 (TYPE_7__*,int ,int *) ;
 scalar_t__ FUNC_18 (TYPE_7__*,int ,unsigned char*,int,int ) ;
 int FUNC_19 (TYPE_7__*,int ) ;
 int FUNC_20 (TYPE_7__*) ;
 int FUNC_21 (TYPE_7__*,scalar_t__,int *) ;
 int FUNC_22 (TYPE_7__*,int *,int ,int *,int ) ;

int FUNC_23(SSL *VAR_9, WPACKET *VAR_10)
{
    unsigned char *VAR_11;
    size_t VAR_12;
    int VAR_13, VAR_14;

    SSL_COMP *VAR_15;

    SSL_SESSION *VAR_16 = VAR_9->session;
    unsigned char *VAR_17;


    VAR_14 = FUNC_20(VAR_9);
    if (VAR_14 != 0) {
        FUNC_4(VAR_9, VAR_3, VAR_5,
                 VAR_14);
        return 0;
    }

    if (VAR_16 == ((void*)0)
            || !FUNC_21(VAR_9, VAR_16->ssl_version, ((void*)0))
            || !FUNC_2(VAR_16)) {
        if (VAR_9->hello_retry_request == VAR_6
                && !FUNC_19(VAR_9, 0)) {

            return 0;
        }
    }


    VAR_11 = VAR_9->s3.client_random;





    if (FUNC_1(VAR_9)) {
        size_t VAR_18;
        VAR_13 = 1;
        for (VAR_18 = 0; VAR_18 < sizeof(VAR_9->s3.client_random); VAR_18++) {
            if (VAR_11[VAR_18]) {
                VAR_13 = 0;
                break;
            }
        }
    } else {
        VAR_13 = (VAR_9->hello_retry_request == VAR_6);
    }

    if (VAR_13 && FUNC_18(VAR_9, 0, VAR_11, sizeof(VAR_9->s3.client_random),
                                   VAR_0) <= 0) {
        FUNC_4(VAR_9, VAR_3, VAR_5,
                 VAR_1);
        return 0;
    }
    if (!FUNC_7(VAR_10, VAR_9->client_version)
            || !FUNC_6(VAR_10, VAR_9->s3.client_random, VAR_2)) {
        FUNC_4(VAR_9, VAR_3, VAR_5,
                 VAR_1);
        return 0;
    }


    VAR_17 = VAR_9->session->session_id;
    if (VAR_9->new_session || VAR_9->session->ssl_version == VAR_8) {
        if (VAR_9->version == VAR_8
                && (VAR_9->options & VAR_7) != 0) {
            VAR_12 = sizeof(VAR_9->tmp_session_id);
            VAR_9->tmp_session_id_len = VAR_12;
            VAR_17 = VAR_9->tmp_session_id;
            if (VAR_9->hello_retry_request == VAR_6
                    && FUNC_0(VAR_9->tmp_session_id, VAR_12) <= 0) {
                FUNC_4(VAR_9, VAR_3,
                         VAR_5,
                         VAR_1);
                return 0;
            }
        } else {
            VAR_12 = 0;
        }
    } else {
        FUNC_12(VAR_9->session->session_id_length <= sizeof(VAR_9->session->session_id));
        VAR_12 = VAR_9->session->session_id_length;
        if (VAR_9->version == VAR_8) {
            VAR_9->tmp_session_id_len = VAR_12;
            FUNC_13(VAR_9->tmp_session_id, VAR_9->session->session_id, VAR_12);
        }
    }
    if (!FUNC_10(VAR_10)
            || (VAR_12 != 0 && !FUNC_6(VAR_10, VAR_17,
                                                    VAR_12))
            || !FUNC_5(VAR_10)) {
        FUNC_4(VAR_9, VAR_3, VAR_5,
                 VAR_1);
        return 0;
    }


    if (FUNC_1(VAR_9)) {
        if (VAR_9->d1->cookie_len > sizeof(VAR_9->d1->cookie)
                || !FUNC_11(VAR_10, VAR_9->d1->cookie,
                                          VAR_9->d1->cookie_len)) {
            FUNC_4(VAR_9, VAR_3, VAR_5,
                     VAR_1);
            return 0;
        }
    }


    if (!FUNC_9(VAR_10)) {
        FUNC_4(VAR_9, VAR_3, VAR_5,
                 VAR_1);
        return 0;
    }

    if (!FUNC_17(VAR_9, FUNC_3(VAR_9), VAR_10)) {

        return 0;
    }
    if (!FUNC_5(VAR_10)) {
        FUNC_4(VAR_9, VAR_3, VAR_5,
                 VAR_1);
        return 0;
    }


    if (!FUNC_10(VAR_10)) {
        FUNC_4(VAR_9, VAR_3, VAR_5,
                 VAR_1);
        return 0;
    }

    if (FUNC_16(VAR_9)
            && VAR_9->ctx->comp_methods
            && (FUNC_1(VAR_9) || VAR_9->s3.tmp.max_ver < VAR_8)) {
        int VAR_19 = FUNC_14(VAR_9->ctx->comp_methods);
        for (VAR_13 = 0; VAR_13 < VAR_19; VAR_13++) {
            VAR_15 = FUNC_15(VAR_9->ctx->comp_methods, VAR_13);
            if (!FUNC_8(VAR_10, VAR_15->id)) {
                FUNC_4(VAR_9, VAR_3,
                         VAR_5,
                         VAR_1);
                return 0;
            }
        }
    }


    if (!FUNC_8(VAR_10, 0) || !FUNC_5(VAR_10)) {
        FUNC_4(VAR_9, VAR_3, VAR_5,
                 VAR_1);
        return 0;
    }


    if (!FUNC_22(VAR_9, VAR_10, VAR_4, ((void*)0), 0)) {

        return 0;
    }

    return 1;
}
