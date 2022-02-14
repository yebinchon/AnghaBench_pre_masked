
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_39__ TYPE_7__ ;
typedef struct TYPE_38__ TYPE_6__ ;
typedef struct TYPE_37__ TYPE_5__ ;
typedef struct TYPE_36__ TYPE_4__ ;
typedef struct TYPE_35__ TYPE_3__ ;
typedef struct TYPE_34__ TYPE_2__ ;
typedef struct TYPE_33__ TYPE_1__ ;


struct TYPE_37__ {size_t wpend_tot; unsigned char const* wpend_buf; int wpend_type; size_t wpend_ret; int * write_sequence; TYPE_4__* d; int * wbuf; } ;
struct TYPE_33__ {scalar_t__ alert_dispatch; } ;
struct TYPE_39__ {scalar_t__ max_proto_version; int version; TYPE_5__ rlayer; int msg_callback_arg; int (* msg_callback ) (int,int ,int ,unsigned char*,int,TYPE_7__*,int ) ;TYPE_3__* method; int * compress; int * enc_write_ctx; int write_hash; int * session; TYPE_1__ s3; } ;
struct TYPE_38__ {size_t length; } ;
struct TYPE_36__ {size_t w_epoch; } ;
struct TYPE_35__ {int (* ssl_dispatch_alert ) (TYPE_7__*) ;scalar_t__ version; TYPE_2__* ssl3_enc; } ;
struct TYPE_34__ {int (* enc ) (TYPE_7__*,TYPE_6__*,int,int) ;int (* mac ) (TYPE_7__*,TYPE_6__*,unsigned char*,int) ;} ;
typedef int SSL_SESSION ;
typedef TYPE_6__ SSL3_RECORD ;
typedef int SSL3_BUFFER ;
typedef TYPE_7__ SSL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 unsigned char* FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,size_t) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (TYPE_6__*,int) ;
 unsigned char* FUNC_9 (TYPE_6__*) ;
 int * FUNC_10 (TYPE_6__*) ;
 size_t FUNC_11 (TYPE_6__*) ;
 int FUNC_12 (TYPE_6__*) ;
 int FUNC_13 (TYPE_6__*,unsigned char*) ;
 int FUNC_14 (TYPE_6__*,unsigned char*) ;
 int FUNC_15 (TYPE_6__*,size_t) ;
 int FUNC_16 (TYPE_6__*,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_17 (TYPE_7__*) ;
 int FUNC_18 (TYPE_7__*,int ,int ,int ) ;
 int FUNC_19 (unsigned char*,int *,int) ;
 int FUNC_20 (int) ;
 int FUNC_21 (TYPE_7__*) ;
 int FUNC_22 (size_t,unsigned char*) ;
 int FUNC_23 (TYPE_7__*,TYPE_6__*) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (TYPE_7__*,int,unsigned char const*,size_t,size_t*) ;
 size_t FUNC_26 (TYPE_7__*) ;
 int FUNC_27 (TYPE_7__*) ;
 int FUNC_28 (TYPE_7__*,TYPE_6__*,unsigned char*,int) ;
 int FUNC_29 (TYPE_7__*,TYPE_6__*,int,int) ;
 int FUNC_30 (TYPE_7__*,TYPE_6__*,unsigned char*,int) ;
 int FUNC_31 (int,int ,int ,unsigned char*,int,TYPE_7__*,int ) ;

int FUNC_32(SSL *VAR_15, int VAR_16, const unsigned char *VAR_17,
                   size_t VAR_18, int VAR_19, size_t *VAR_20)
{
    unsigned char *VAR_21, *VAR_22;
    int VAR_23, VAR_24, VAR_25 = 0;
    size_t VAR_26 = 0;
    int VAR_27;
    SSL3_RECORD VAR_28;
    SSL3_BUFFER *VAR_29;
    SSL_SESSION *VAR_30;

    VAR_29 = &VAR_15->rlayer.wbuf[0];





    if (!FUNC_20(FUNC_5(VAR_29) == 0)) {
        FUNC_18(VAR_15, VAR_11, VAR_12,
                 VAR_4);
        return 0;
    }


    if (VAR_15->s3.alert_dispatch) {
        VAR_23 = VAR_15->method->ssl_dispatch_alert(VAR_15);
        if (VAR_23 <= 0)
            return VAR_23;

    }

    if (VAR_18 == 0 && !VAR_19)
        return 0;

    if (VAR_18 > FUNC_26(VAR_15)) {
        FUNC_18(VAR_15, VAR_11, VAR_12,
                 VAR_14);
        return 0;
    }

    VAR_30 = VAR_15->session;

    if ((VAR_30 == ((void*)0)) ||
        (VAR_15->enc_write_ctx == ((void*)0)) || (FUNC_2(VAR_15->write_hash) == ((void*)0)))
        VAR_25 = 1;

    if (VAR_25)
        VAR_24 = 0;
    else {
        VAR_24 = FUNC_3(VAR_15->write_hash);
        if (VAR_24 < 0) {
            FUNC_18(VAR_15, VAR_11, VAR_12,
                     VAR_14);
            return -1;
        }
    }

    VAR_21 = FUNC_4(VAR_29) + VAR_26;



    *(VAR_21++) = VAR_16 & 0xff;
    FUNC_16(&VAR_28, VAR_16);





    if (VAR_15->method->version == VAR_3 &&
        VAR_15->max_proto_version != VAR_0) {
        *(VAR_21++) = VAR_2 >> 8;
        *(VAR_21++) = VAR_2 & 0xff;
    } else {
        *(VAR_21++) = VAR_15->version >> 8;
        *(VAR_21++) = VAR_15->version & 0xff;
    }


    VAR_22 = VAR_21;
    VAR_21 += 10;


    if (VAR_15->enc_write_ctx) {
        int VAR_31 = FUNC_1(VAR_15->enc_write_ctx);
        if (VAR_31 == VAR_6) {
            VAR_27 = FUNC_0(VAR_15->enc_write_ctx);
            if (VAR_27 <= 1)
                VAR_27 = 0;
        }

        else if (VAR_31 == VAR_8)
            VAR_27 = VAR_9;
        else if (VAR_31 == VAR_7)
            VAR_27 = VAR_5;
        else
            VAR_27 = 0;
    } else
        VAR_27 = 0;


    FUNC_13(&VAR_28, VAR_21 + VAR_27);
    FUNC_15(&VAR_28, VAR_18);
    FUNC_14(&VAR_28, (unsigned char *)VAR_17);






    if (VAR_15->compress != ((void*)0)) {
        if (!FUNC_23(VAR_15, &VAR_28)) {
            FUNC_18(VAR_15, VAR_11, VAR_12,
                     VAR_13);
            return -1;
        }
    } else {
        FUNC_19(FUNC_9(&VAR_28), FUNC_10(&VAR_28),
               FUNC_11(&VAR_28));
        FUNC_12(&VAR_28);
    }







    if (!FUNC_17(VAR_15) && VAR_24 != 0) {
        if (!VAR_15->method->ssl3_enc->mac(VAR_15, &VAR_28,
                                      &(VAR_21[FUNC_11(&VAR_28) + VAR_27]),
                                      1)) {
            FUNC_18(VAR_15, VAR_11, VAR_12,
                     VAR_4);
            return -1;
        }
        FUNC_8(&VAR_28, VAR_24);
    }


    FUNC_13(&VAR_28, VAR_21);
    FUNC_12(&VAR_28);

    if (VAR_27)
        FUNC_8(&VAR_28, VAR_27);

    if (VAR_15->method->ssl3_enc->enc(VAR_15, &VAR_28, 1, 1) < 1) {
        if (!FUNC_21(VAR_15)) {
            FUNC_18(VAR_15, VAR_11, VAR_12,
                     VAR_4);
        }
        return -1;
    }

    if (FUNC_17(VAR_15) && VAR_24 != 0) {
        if (!VAR_15->method->ssl3_enc->mac(VAR_15, &VAR_28,
                                      &(VAR_21[FUNC_11(&VAR_28)]), 1)) {
            FUNC_18(VAR_15, VAR_11, VAR_12,
                     VAR_4);
            return -1;
        }
        FUNC_8(&VAR_28, VAR_24);
    }





    FUNC_22(VAR_15->rlayer.d->w_epoch, VAR_22);

    FUNC_19(VAR_22, &(VAR_15->rlayer.write_sequence[2]), 6);
    VAR_22 += 6;
    FUNC_22(FUNC_11(&VAR_28), VAR_22);

    if (VAR_15->msg_callback)
        VAR_15->msg_callback(1, 0, VAR_10, VAR_22 - VAR_1,
                        VAR_1, VAR_15, VAR_15->msg_callback_arg);





    FUNC_16(&VAR_28, VAR_16);
    FUNC_8(&VAR_28, VAR_1);

    FUNC_24(&(VAR_15->rlayer.write_sequence[0]));

    if (VAR_19) {




        *VAR_20 = VAR_28.length;
        return 1;
    }


    FUNC_6(VAR_29, VAR_26 + FUNC_11(&VAR_28));
    FUNC_7(VAR_29, 0);





    VAR_15->rlayer.wpend_tot = VAR_18;
    VAR_15->rlayer.wpend_buf = VAR_17;
    VAR_15->rlayer.wpend_type = VAR_16;
    VAR_15->rlayer.wpend_ret = VAR_18;


    return FUNC_25(VAR_15, VAR_16, VAR_17, VAR_18, VAR_20);
}
