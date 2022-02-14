
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_14__ ;


struct TYPE_19__ {int status_type; int cookie_hmac_key; TYPE_14__* secure; int tick_key_name; } ;
struct TYPE_21__ {int references; int options; int num_tickets; void* recv_max_early_data; scalar_t__ max_early_data; TYPE_2__ ext; void* split_send_fragment; void* max_send_fragment; int comp_methods; int ex_data; int * client_ca_names; int * ca_names; int * sha1; int * md5; int * param; int cipher_list; int * cert; int cipher_list_by_id; int tls13_ciphersuites; TYPE_3__ const* method; int * ctlog_store; int * cert_store; int * sessions; int verify_mode; int max_cert_list; int * lock; int session_timeout; int session_cache_size; int session_cache_mode; int mode; scalar_t__ max_proto_version; scalar_t__ min_proto_version; } ;
struct TYPE_20__ {TYPE_1__* ssl3_enc; int (* get_timeout ) () ;} ;
struct TYPE_18__ {int enc_flags; } ;
struct TYPE_17__ {int tick_aes_key; int tick_hmac_key; } ;
typedef TYPE_3__ SSL_METHOD ;
typedef TYPE_4__ SSL_CTX ;
typedef int ENGINE ;


 int VAR_0 ;
 int * FUNC_0 () ;
 int FUNC_1 (int ,TYPE_4__*,int *) ;
 int * FUNC_2 () ;
 int * FUNC_3 (int ) ;
 int FUNC_4 () ;
 int VAR_1 ;
 int FUNC_5 () ;
 void* FUNC_6 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (int ,int *) ;
 TYPE_14__* FUNC_9 (int) ;
 TYPE_4__* FUNC_10 (int) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 scalar_t__ FUNC_13 (int ,int) ;
 scalar_t__ FUNC_14 (int ,int) ;
 void* VAR_4 ;
 int FUNC_15 () ;
 int FUNC_16 (TYPE_4__*) ;
 int FUNC_17 (TYPE_4__*) ;
 int FUNC_18 (TYPE_4__*,int ) ;
 int FUNC_19 (TYPE_4__*,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ FUNC_20 () ;
 int FUNC_21 (int ,int ) ;
 int VAR_21 ;
 int * FUNC_22 () ;
 int * FUNC_23 () ;
 int FUNC_24 (int ) ;
 int * FUNC_25 (int ,int ) ;
 scalar_t__ FUNC_26 (int ) ;
 void* FUNC_27 () ;
 int * FUNC_28 () ;
 int FUNC_29 (TYPE_3__ const*,int ,int *,int *,int ,int *) ;
 int FUNC_30 (TYPE_4__*) ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_31 () ;

SSL_CTX *FUNC_32(const SSL_METHOD *VAR_24)
{
    SSL_CTX *VAR_25 = ((void*)0);

    if (VAR_24 == ((void*)0)) {
        FUNC_21(VAR_6, VAR_14);
        return ((void*)0);
    }

    if (!FUNC_8(VAR_2, ((void*)0)))
        return ((void*)0);

    if (FUNC_20() < 0) {
        FUNC_21(VAR_6, VAR_17);
        goto err;
    }
    VAR_25 = FUNC_10(sizeof(*VAR_25));
    if (VAR_25 == ((void*)0))
        goto err;

    VAR_25->method = VAR_24;
    VAR_25->min_proto_version = 0;
    VAR_25->max_proto_version = 0;
    VAR_25->mode = VAR_8;
    VAR_25->session_cache_mode = VAR_19;
    VAR_25->session_cache_size = VAR_18;

    VAR_25->session_timeout = VAR_24->get_timeout();
    VAR_25->references = 1;
    VAR_25->lock = FUNC_0();
    if (VAR_25->lock == ((void*)0)) {
        FUNC_21(VAR_6, VAR_1);
        FUNC_7(VAR_25);
        return ((void*)0);
    }
    VAR_25->max_cert_list = VAR_7;
    VAR_25->verify_mode = VAR_20;
    if ((VAR_25->cert = FUNC_28()) == ((void*)0))
        goto err;

    VAR_25->sessions = FUNC_25(VAR_23, VAR_22);
    if (VAR_25->sessions == ((void*)0))
        goto err;
    VAR_25->cert_store = FUNC_22();
    if (VAR_25->cert_store == ((void*)0))
        goto err;

    VAR_25->ctlog_store = FUNC_2();
    if (VAR_25->ctlog_store == ((void*)0))
        goto err;


    if (!FUNC_18(VAR_25, FUNC_12()))
        goto err;

    if (!FUNC_29(VAR_25->method,
                                VAR_25->tls13_ciphersuites,
                                &VAR_25->cipher_list, &VAR_25->cipher_list_by_id,
                                FUNC_11(), VAR_25->cert)
        || FUNC_26(VAR_25->cipher_list) <= 0) {
        FUNC_21(VAR_6, VAR_13);
        goto err2;
    }

    VAR_25->param = FUNC_23();
    if (VAR_25->param == ((void*)0))
        goto err;

    if ((VAR_25->md5 = FUNC_6("ssl3-md5")) == ((void*)0)) {
        FUNC_21(VAR_6, VAR_15);
        goto err2;
    }
    if ((VAR_25->sha1 = FUNC_6("ssl3-sha1")) == ((void*)0)) {
        FUNC_21(VAR_6, VAR_16);
        goto err2;
    }

    if ((VAR_25->ca_names = FUNC_27()) == ((void*)0))
        goto err;

    if ((VAR_25->client_ca_names = FUNC_27()) == ((void*)0))
        goto err;

    if (!FUNC_1(VAR_0, VAR_25, &VAR_25->ex_data))
        goto err;

    if ((VAR_25->ext.secure = FUNC_9(sizeof(*VAR_25->ext.secure))) == ((void*)0))
        goto err;


    if (!(VAR_24->ssl3_enc->enc_flags & VAR_5))
        VAR_25->comp_methods = FUNC_15();

    VAR_25->max_send_fragment = VAR_4;
    VAR_25->split_send_fragment = VAR_4;


    if ((FUNC_13(VAR_25->ext.tick_key_name,
                    sizeof(VAR_25->ext.tick_key_name)) <= 0)
        || (FUNC_14(VAR_25->ext.secure->tick_hmac_key,
                       sizeof(VAR_25->ext.secure->tick_hmac_key)) <= 0)
        || (FUNC_14(VAR_25->ext.secure->tick_aes_key,
                       sizeof(VAR_25->ext.secure->tick_aes_key)) <= 0))
        VAR_25->options |= VAR_12;

    if (FUNC_14(VAR_25->ext.cookie_hmac_key,
                   sizeof(VAR_25->ext.cookie_hmac_key)) <= 0)
        goto err;


    if (!FUNC_16(VAR_25))
        goto err;
    VAR_25->options |= VAR_10;
    VAR_25->options |= VAR_11 | VAR_9;

    VAR_25->ext.status_type = VAR_21;
    VAR_25->max_early_data = 0;
    VAR_25->recv_max_early_data = VAR_4;


    VAR_25->num_tickets = 2;

    FUNC_30(VAR_25);

    return VAR_25;
 err:
    FUNC_21(VAR_6, VAR_1);
 err2:
    FUNC_17(VAR_25);
    return ((void*)0);
}
