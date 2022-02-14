
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_48__ TYPE_9__ ;
typedef struct TYPE_47__ TYPE_8__ ;
typedef struct TYPE_46__ TYPE_3__ ;
typedef struct TYPE_45__ TYPE_2__ ;
typedef struct TYPE_44__ TYPE_1__ ;
typedef struct TYPE_43__ TYPE_12__ ;


struct TYPE_47__ {int ctx; int log; } ;
struct TYPE_48__ {scalar_t__ len; } ;
struct TYPE_44__ {int verify; int verify_depth; TYPE_12__* session_ticket_keys; TYPE_8__ ssl; int session_tickets; int session_timeout; int * shm_zone; int builtin_session_cache; TYPE_12__* certificates; TYPE_9__ ecdh_curve; TYPE_9__ dhparam; TYPE_9__ crl; TYPE_9__ trusted_certificate; TYPE_9__ client_certificate; int prefer_server_ciphers; TYPE_9__ ciphers; TYPE_12__* passwords; TYPE_12__* certificate_keys; scalar_t__ certificate_values; int protocols; int line; int file; int listen; int handshake_timeout; } ;
typedef TYPE_1__ ngx_stream_ssl_conf_t ;
typedef int ngx_str_t ;
struct TYPE_45__ {TYPE_8__* data; int (* handler ) (TYPE_8__*) ;} ;
typedef TYPE_2__ ngx_pool_cleanup_t ;
struct TYPE_46__ {int log; int pool; } ;
typedef TYPE_3__ ngx_conf_t ;
struct TYPE_43__ {scalar_t__ nelts; scalar_t__ elts; } ;


 int VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,int ,TYPE_1__*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_11 ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (TYPE_12__*,TYPE_12__*,int *) ;
 int FUNC_6 (TYPE_9__,TYPE_9__,char*) ;
 int FUNC_7 (int,int,int) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (int ,int ,int ,char*,...) ;
 TYPE_2__* FUNC_10 (int ,int ) ;
 scalar_t__ FUNC_11 (TYPE_3__*,TYPE_8__*,TYPE_12__*,TYPE_12__*,TYPE_12__*) ;
 scalar_t__ FUNC_12 (TYPE_3__*,TYPE_8__*,TYPE_9__*,int ) ;
 int FUNC_13 (TYPE_8__*) ;
 scalar_t__ FUNC_14 (TYPE_3__*,TYPE_8__*,TYPE_9__*,int) ;
 scalar_t__ FUNC_15 (TYPE_8__*,int ,int *) ;
 scalar_t__ FUNC_16 (TYPE_3__*,TYPE_8__*,TYPE_9__*) ;
 scalar_t__ FUNC_17 (TYPE_3__*,TYPE_8__*,TYPE_9__*) ;
 scalar_t__ FUNC_18 (TYPE_3__*,TYPE_8__*,TYPE_9__*) ;
 scalar_t__ FUNC_19 (TYPE_8__*,int *,TYPE_12__*,int ,int *,int ) ;
 scalar_t__ FUNC_20 (TYPE_3__*,TYPE_8__*,TYPE_12__*) ;
 scalar_t__ FUNC_21 (TYPE_3__*,TYPE_8__*,TYPE_9__*,int) ;
 int VAR_12 ;
 scalar_t__ FUNC_22 (TYPE_3__*,TYPE_1__*) ;
 int VAR_13 ;
 int VAR_14 ;

__attribute__((used)) static char *
FUNC_23(ngx_conf_t *VAR_15, void *VAR_16, void *VAR_17)
{
    ngx_stream_ssl_conf_t *VAR_18 = VAR_16;
    ngx_stream_ssl_conf_t *VAR_19 = VAR_17;

    ngx_pool_cleanup_t *VAR_20;

    FUNC_4(VAR_19->handshake_timeout,
                         VAR_18->handshake_timeout, 60000);

    FUNC_8(VAR_19->session_timeout,
                         VAR_18->session_timeout, 300);

    FUNC_8(VAR_19->prefer_server_ciphers,
                         VAR_18->prefer_server_ciphers, 0);

    FUNC_3(VAR_19->protocols, VAR_18->protocols,
                         (VAR_0|VAR_8
                          |VAR_9|VAR_10));

    FUNC_7(VAR_19->verify, VAR_18->verify, 0);
    FUNC_7(VAR_19->verify_depth, VAR_18->verify_depth, 1);

    FUNC_5(VAR_19->certificates, VAR_18->certificates, ((void*)0));
    FUNC_5(VAR_19->certificate_keys, VAR_18->certificate_keys,
                         ((void*)0));

    FUNC_5(VAR_19->passwords, VAR_18->passwords, ((void*)0));

    FUNC_6(VAR_19->dhparam, VAR_18->dhparam, "");

    FUNC_6(VAR_19->client_certificate, VAR_18->client_certificate,
                         "");
    FUNC_6(VAR_19->trusted_certificate,
                         VAR_18->trusted_certificate, "");
    FUNC_6(VAR_19->crl, VAR_18->crl, "");

    FUNC_6(VAR_19->ecdh_curve, VAR_18->ecdh_curve,
                         VAR_4);

    FUNC_6(VAR_19->ciphers, VAR_18->ciphers, VAR_3);


    VAR_19->ssl.log = VAR_15->log;

    if (!VAR_19->listen) {
        return VAR_2;
    }

    if (VAR_19->certificates == ((void*)0)) {
        FUNC_9(VAR_5, VAR_15->log, 0,
                      "no \"ssl_certificate\" is defined for "
                      "the \"listen ... ssl\" directive in %s:%ui",
                      VAR_19->file, VAR_19->line);
        return VAR_1;
    }

    if (VAR_19->certificate_keys == ((void*)0)) {
        FUNC_9(VAR_5, VAR_15->log, 0,
                      "no \"ssl_certificate_key\" is defined for "
                      "the \"listen ... ssl\" directive in %s:%ui",
                      VAR_19->file, VAR_19->line);
        return VAR_1;
    }

    if (VAR_19->certificate_keys->nelts < VAR_19->certificates->nelts) {
        FUNC_9(VAR_5, VAR_15->log, 0,
                      "no \"ssl_certificate_key\" is defined "
                      "for certificate \"%V\" and "
                      "the \"listen ... ssl\" directive in %s:%ui",
                      ((ngx_str_t *) VAR_19->certificates->elts)
                      + VAR_19->certificates->nelts - 1,
                      VAR_19->file, VAR_19->line);
        return VAR_1;
    }

    if (FUNC_15(&VAR_19->ssl, VAR_19->protocols, ((void*)0)) != VAR_6) {
        return VAR_1;
    }

    VAR_20 = FUNC_10(VAR_15->pool, 0);
    if (VAR_20 == ((void*)0)) {
        FUNC_13(&VAR_19->ssl);
        return VAR_1;
    }

    VAR_20->handler = FUNC_13;
    VAR_20->data = &VAR_19->ssl;






    if (FUNC_22(VAR_15, VAR_19) != VAR_6) {
        return VAR_1;
    }

    if (VAR_19->certificate_values) {
        FUNC_9(VAR_5, VAR_15->log, 0,
                      "variables in "
                      "\"ssl_certificate\" and \"ssl_certificate_key\" "
                      "directives are not supported on this platform");
        return VAR_1;


    } else {



        if (FUNC_11(VAR_15, &VAR_19->ssl, VAR_19->certificates,
                                 VAR_19->certificate_keys, VAR_19->passwords)
            != VAR_6)
        {
            return VAR_1;
        }
    }

    if (FUNC_12(VAR_15, &VAR_19->ssl, &VAR_19->ciphers,
                        VAR_19->prefer_server_ciphers)
        != VAR_6)
    {
        return VAR_1;
    }

    if (VAR_19->verify) {

        if (VAR_19->client_certificate.len == 0 && VAR_19->verify != 3) {
            FUNC_9(VAR_5, VAR_15->log, 0,
                          "no ssl_client_certificate for ssl_verify_client");
            return VAR_1;
        }

        if (FUNC_14(VAR_15, &VAR_19->ssl,
                                       &VAR_19->client_certificate,
                                       VAR_19->verify_depth)
            != VAR_6)
        {
            return VAR_1;
        }

        if (FUNC_21(VAR_15, &VAR_19->ssl,
                                        &VAR_19->trusted_certificate,
                                        VAR_19->verify_depth)
            != VAR_6)
        {
            return VAR_1;
        }

        if (FUNC_16(VAR_15, &VAR_19->ssl, &VAR_19->crl) != VAR_6) {
            return VAR_1;
        }
    }

    if (FUNC_17(VAR_15, &VAR_19->ssl, &VAR_19->dhparam) != VAR_6) {
        return VAR_1;
    }

    if (FUNC_18(VAR_15, &VAR_19->ssl, &VAR_19->ecdh_curve) != VAR_6) {
        return VAR_1;
    }

    FUNC_8(VAR_19->builtin_session_cache,
                         VAR_18->builtin_session_cache, VAR_7);

    if (VAR_19->shm_zone == ((void*)0)) {
        VAR_19->shm_zone = VAR_18->shm_zone;
    }

    if (FUNC_19(&VAR_19->ssl, &VAR_14,
                              VAR_19->certificates, VAR_19->builtin_session_cache,
                              VAR_19->shm_zone, VAR_19->session_timeout)
        != VAR_6)
    {
        return VAR_1;
    }

    FUNC_8(VAR_19->session_tickets,
                         VAR_18->session_tickets, 1);







    FUNC_5(VAR_19->session_ticket_keys,
                         VAR_18->session_ticket_keys, ((void*)0));

    if (FUNC_20(VAR_15, &VAR_19->ssl, VAR_19->session_ticket_keys)
        != VAR_6)
    {
        return VAR_1;
    }

    return VAR_2;
}
