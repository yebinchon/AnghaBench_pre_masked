
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int buf ;
struct TYPE_24__ {int post_handshake_auth; } ;
struct TYPE_23__ {scalar_t__ status; TYPE_9__* ssl; int bytes_to_read; int bytes_to_write; } ;
struct TYPE_20__ {scalar_t__ force_pha; } ;
struct TYPE_19__ {int * reneg_ciphers; } ;
struct TYPE_21__ {TYPE_2__ server; TYPE_1__ client; } ;
struct TYPE_22__ {scalar_t__ handshake_mode; TYPE_3__ extra; int key_update_type; int app_data_size; } ;
typedef TYPE_4__ SSL_TEST_CTX ;
typedef TYPE_5__ PEER ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (TYPE_9__*,int) ;
 int FUNC_1 (TYPE_9__*) ;
 int FUNC_2 (TYPE_9__*) ;
 int FUNC_3 (TYPE_9__*,int ) ;
 int FUNC_4 (TYPE_9__*,char*,int) ;
 int FUNC_5 (TYPE_9__*) ;
 int FUNC_6 (TYPE_9__*) ;
 int FUNC_7 (TYPE_9__*) ;
 int FUNC_8 (TYPE_9__*,int *) ;
 int FUNC_9 (TYPE_9__*) ;
 int FUNC_10 (scalar_t__,scalar_t__) ;
 int FUNC_11 (int) ;
 int FUNC_12 (TYPE_5__*) ;

__attribute__((used)) static void FUNC_13(const SSL_TEST_CTX *VAR_11, PEER *VAR_12)
{
    int VAR_13;
    char VAR_14;

    if (VAR_12->status == VAR_2) {





        VAR_12->status = VAR_1;
        FUNC_12(VAR_12);
        return;
    }

    if (!FUNC_10(VAR_12->status, VAR_1)
            || !FUNC_11(VAR_11->handshake_mode
                              == VAR_10
                          || VAR_11->handshake_mode
                              == VAR_9
                          || VAR_11->handshake_mode
                              == VAR_7
                          || VAR_11->handshake_mode
                              == VAR_6
                          || VAR_11->handshake_mode
                              == VAR_8)) {
        VAR_12->status = VAR_3;
        return;
    }


    VAR_12->bytes_to_write = VAR_12->bytes_to_read = VAR_11->app_data_size;


    if ((VAR_11->handshake_mode == VAR_10
                && FUNC_2(VAR_12->ssl))
            || (VAR_11->handshake_mode == VAR_9
                && !FUNC_2(VAR_12->ssl))) {




        if (!FUNC_7(VAR_12->ssl)) {





            if (FUNC_2(VAR_12->ssl)) {
                VAR_13 = FUNC_5(VAR_12->ssl);
            } else {
                if (VAR_11->extra.client.reneg_ciphers != ((void*)0)) {
                    if (!FUNC_8(VAR_12->ssl,
                                VAR_11->extra.client.reneg_ciphers)) {
                        VAR_12->status = VAR_0;
                        return;
                    }
                    VAR_13 = FUNC_5(VAR_12->ssl);
                } else {
                    VAR_13 = FUNC_6(VAR_12->ssl);
                }
            }
            if (!VAR_13) {
                VAR_12->status = VAR_0;
                return;
            }
            FUNC_12(VAR_12);
            if (VAR_12->status == VAR_1)
                VAR_12->status = VAR_2;
            else if (VAR_12->status == VAR_2)
                VAR_12->status = VAR_1;
            return;
        }
    } else if (VAR_11->handshake_mode == VAR_7
               || VAR_11->handshake_mode
                  == VAR_6) {
        if (FUNC_2(VAR_12->ssl)
                != (VAR_11->handshake_mode
                    == VAR_7)) {
            VAR_12->status = VAR_2;
            return;
        }

        VAR_13 = FUNC_3(VAR_12->ssl, VAR_11->key_update_type);
        if (!VAR_13) {
            VAR_12->status = VAR_0;
            return;
        }
        FUNC_12(VAR_12);




        if (VAR_12->status != VAR_2)
            VAR_12->status = VAR_0;
        return;
    } else if (VAR_11->handshake_mode == VAR_8) {
        if (FUNC_2(VAR_12->ssl)) {

            if (VAR_11->extra.server.force_pha)
                VAR_12->ssl->post_handshake_auth = VAR_5;
            VAR_13 = FUNC_9(VAR_12->ssl);
            if (!VAR_13) {
                VAR_12->status = VAR_0;
                return;
            }
        }
        FUNC_12(VAR_12);




        if (VAR_12->status != VAR_2)
            VAR_12->status = VAR_0;
        return;
    }






    VAR_13 = FUNC_4(VAR_12->ssl, &VAR_14, sizeof(VAR_14));
    if (VAR_13 >= 0) {




        VAR_12->status = VAR_0;
        return;
    } else {
        int VAR_15 = FUNC_0(VAR_12->ssl, VAR_13);
        if (VAR_15 != VAR_4) {
            VAR_12->status = VAR_0;
            return;
        }

        if (!FUNC_1(VAR_12->ssl))
            return;
    }

    VAR_12->status = VAR_2;
}
