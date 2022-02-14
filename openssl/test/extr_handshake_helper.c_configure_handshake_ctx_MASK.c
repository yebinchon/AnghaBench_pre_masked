
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_22__ {unsigned char* npn_protocols; size_t npn_protocols_len; unsigned char* alpn_protocols; size_t alpn_protocols_len; void* srp_password; void* srp_user; void* session_ticket_app_data; } ;
struct TYPE_21__ {int max_fragment_size; } ;
struct TYPE_19__ {int verify_callback; int max_fragment_len_mode; int ct_validation; int * srp_password; int * srp_user; int * alpn_protocols; int * npn_protocols; } ;
struct TYPE_18__ {int * srp_password; int * srp_user; int * session_ticket_app_data; int * alpn_protocols; int * npn_protocols; } ;
struct TYPE_17__ {int servername_callback; scalar_t__ cert_status; int * srp_password; int * srp_user; int * session_ticket_app_data; int * alpn_protocols; int * npn_protocols; scalar_t__ broken_session_ticket; } ;
struct TYPE_20__ {TYPE_3__ client; TYPE_2__ server2; TYPE_1__ server; } ;
typedef TYPE_4__ SSL_TEST_EXTRA_CONF ;
typedef TYPE_5__ SSL_TEST_CTX ;
typedef unsigned char SSL_CTX ;
typedef TYPE_6__ CTX_DATA ;


 int FUNC_0 (unsigned char*) ;
 void* FUNC_1 (int *) ;
 unsigned char* FUNC_2 (size_t) ;
 int FUNC_3 (unsigned char*,int ) ;
 size_t FUNC_4 (unsigned char*,unsigned char*,size_t) ;
 int FUNC_5 (unsigned char*,int ,TYPE_6__*) ;
 int FUNC_6 (unsigned char*,int *,int *) ;
 int FUNC_7 (unsigned char*,int ,unsigned char*) ;
 int FUNC_8 (unsigned char*) ;
 size_t FUNC_9 (unsigned char*,int ) ;
 int FUNC_10 (unsigned char*,int ,TYPE_6__*) ;
 int FUNC_11 (unsigned char*,int ,TYPE_6__*) ;
 int FUNC_12 (unsigned char*,int *,int ,TYPE_6__*) ;
 int FUNC_13 (unsigned char*,TYPE_6__*) ;
 int FUNC_14 (unsigned char*,int ) ;
 int FUNC_15 (unsigned char*,int *) ;
 int FUNC_16 (unsigned char*,int ) ;
 int FUNC_17 (unsigned char*,int) ;
 int FUNC_18 (unsigned char*,unsigned char*) ;
 int FUNC_19 (unsigned char*,int ) ;
 int FUNC_20 (unsigned char*,int *) ;
 int FUNC_21 (unsigned char*,int ) ;
 int FUNC_22 (unsigned char*,int ) ;
 int FUNC_23 (unsigned char*,int ) ;
 size_t FUNC_24 (unsigned char*,unsigned char*,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_25 (size_t,int) ;
 int FUNC_26 (unsigned char*) ;
 int FUNC_27 (int ) ;
 int VAR_4 ;





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
 int * VAR_16 ;
 int FUNC_28 (int *,unsigned char**,size_t*) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;

__attribute__((used)) static int FUNC_29(SSL_CTX *VAR_25, SSL_CTX *VAR_26,
                                   SSL_CTX *VAR_27,
                                   const SSL_TEST_CTX *VAR_28,
                                   const SSL_TEST_EXTRA_CONF *VAR_29,
                                   CTX_DATA *VAR_30,
                                   CTX_DATA *VAR_31,
                                   CTX_DATA *VAR_32)
{
    unsigned char *VAR_33;
    size_t VAR_34;

    if (!FUNC_25(FUNC_9(VAR_25,
                                                   VAR_28->max_fragment_size), 1))
        goto err;
    if (VAR_26 != ((void*)0)) {
        if (!FUNC_25(FUNC_9(VAR_26,
                                                       VAR_28->max_fragment_size),
                         1))
            goto err;
    }
    if (!FUNC_25(FUNC_9(VAR_27,
                                                   VAR_28->max_fragment_size), 1))
        goto err;

    switch (VAR_29->client.verify_callback) {
    case 135:
        FUNC_6(VAR_27, &VAR_23, ((void*)0));
        break;
    case 133:
        FUNC_6(VAR_27, &VAR_24, ((void*)0));
        break;
    case 134:
        break;
    }

    switch (VAR_29->client.max_fragment_len_mode) {
    case 129:
    case 132:
    case 131:
    case 130:
    case 128:
        FUNC_17(
              VAR_27, VAR_29->client.max_fragment_len_mode);
        break;
    }






    switch (VAR_29->server.servername_callback) {
    case 137:
        FUNC_19(VAR_25, VAR_21);
        FUNC_18(VAR_25, VAR_26);
        break;
    case 136:
        FUNC_19(VAR_25, VAR_22);
        FUNC_18(VAR_25, VAR_26);
        break;
    case 141:
        break;
    case 140:
        FUNC_7(VAR_25, VAR_6, VAR_26);
        break;
    case 138:
        FUNC_7(VAR_25, VAR_8, VAR_26);
        break;
    case 139:
        FUNC_7(VAR_25, VAR_7, VAR_26);
    }

    if (VAR_29->server.cert_status != VAR_3) {
        FUNC_22(VAR_27, VAR_4);
        FUNC_21(VAR_27, VAR_10);
        FUNC_20(VAR_27, ((void*)0));
        FUNC_21(VAR_25, VAR_19);
        FUNC_20(VAR_25,
            ((VAR_29->server.cert_status == VAR_2)
            ? &VAR_15 : &VAR_14));
    }






    if (VAR_26 != ((void*)0))
        FUNC_23(VAR_26,
                                         VAR_13);

    if (VAR_29->server.broken_session_ticket) {
        FUNC_23(VAR_25, VAR_5);
    }

    if (VAR_29->server.npn_protocols != ((void*)0)) {
        if (!FUNC_27(FUNC_28(VAR_29->server.npn_protocols,
                                    &VAR_30->npn_protocols,
                                    &VAR_30->npn_protocols_len)))
            goto err;
        FUNC_11(VAR_25, VAR_18,
                                      VAR_30);
    }
    if (VAR_29->server2.npn_protocols != ((void*)0)) {
        if (!FUNC_27(FUNC_28(VAR_29->server2.npn_protocols,
                                    &VAR_31->npn_protocols,
                                    &VAR_31->npn_protocols_len))
                || !FUNC_26(VAR_26))
            goto err;
        FUNC_11(VAR_26, VAR_18,
                                      VAR_31);
    }
    if (VAR_29->client.npn_protocols != ((void*)0)) {
        if (!FUNC_27(FUNC_28(VAR_29->client.npn_protocols,
                                    &VAR_32->npn_protocols,
                                    &VAR_32->npn_protocols_len)))
            goto err;
        FUNC_10(VAR_27, VAR_9,
                                         VAR_32);
    }

    if (VAR_29->server.alpn_protocols != ((void*)0)) {
        if (!FUNC_27(FUNC_28(VAR_29->server.alpn_protocols,
                                    &VAR_30->alpn_protocols,
                                    &VAR_30->alpn_protocols_len)))
            goto err;
        FUNC_5(VAR_25, VAR_17, VAR_30);
    }
    if (VAR_29->server2.alpn_protocols != ((void*)0)) {
        if (!FUNC_26(VAR_26)
                || !FUNC_27(FUNC_28(VAR_29->server2.alpn_protocols,
                                           &VAR_31->alpn_protocols,
                                           &VAR_31->alpn_protocols_len
            )))
            goto err;
        FUNC_5(VAR_26, VAR_17,
                                   VAR_31);
    }
    if (VAR_29->client.alpn_protocols != ((void*)0)) {
        unsigned char *VAR_35 = ((void*)0);
        size_t VAR_36;
        if (!FUNC_27(FUNC_28(VAR_29->client.alpn_protocols,
                                    &VAR_35, &VAR_36))

                || !FUNC_25(FUNC_4(VAR_27, VAR_35,
                                                        VAR_36), 0))
            goto err;
        FUNC_0(VAR_35);
    }

    if (VAR_29->server.session_ticket_app_data != ((void*)0)) {
        VAR_30->session_ticket_app_data =
            FUNC_1(VAR_29->server.session_ticket_app_data);
        FUNC_12(VAR_25, VAR_16,
                                      VAR_12, VAR_30);
    }
    if (VAR_29->server2.session_ticket_app_data != ((void*)0)) {
        if (!FUNC_26(VAR_26))
            goto err;
        VAR_31->session_ticket_app_data =
            FUNC_1(VAR_29->server2.session_ticket_app_data);
        FUNC_12(VAR_26, ((void*)0),
                                      VAR_12, VAR_31);
    }





    VAR_34 = FUNC_24(VAR_25, ((void*)0), 0);
    if (!FUNC_26(VAR_33 = FUNC_2(VAR_34))
            || !FUNC_25(FUNC_24(VAR_25,
                                                           VAR_33,
                                                           VAR_34), 1)) {
        FUNC_0(VAR_33);
        goto err;
    }
    FUNC_0(VAR_33);



    if (!FUNC_27(FUNC_8(VAR_27)))
        goto err;
    switch (VAR_29->client.ct_validation) {
    case 143:
        if (!FUNC_27(FUNC_3(VAR_27,
                                         VAR_0)))
            goto err;
        break;
    case 142:
        if (!FUNC_27(FUNC_3(VAR_27, VAR_1)))
            goto err;
        break;
    case 144:
        break;
    }


    if (VAR_29->server.srp_user != ((void*)0)) {
        FUNC_16(VAR_25, VAR_20);
        VAR_30->srp_user = FUNC_1(VAR_29->server.srp_user);
        VAR_30->srp_password = FUNC_1(VAR_29->server.srp_password);
        FUNC_13(VAR_25, VAR_30);
    }
    if (VAR_29->server2.srp_user != ((void*)0)) {
        if (!FUNC_26(VAR_26))
            goto err;
        FUNC_16(VAR_26, VAR_20);
        VAR_31->srp_user = FUNC_1(VAR_29->server2.srp_user);
        VAR_31->srp_password = FUNC_1(VAR_29->server2.srp_password);
        FUNC_13(VAR_26, VAR_31);
    }
    if (VAR_29->client.srp_user != ((void*)0)) {
        if (!FUNC_27(FUNC_15(VAR_27,
                                                VAR_29->client.srp_user)))
            goto err;
        FUNC_14(VAR_27, VAR_11);
        VAR_32->srp_password = FUNC_1(VAR_29->client.srp_password);
        FUNC_13(VAR_27, VAR_32);
    }

    return 1;
err:
    return 0;
}
