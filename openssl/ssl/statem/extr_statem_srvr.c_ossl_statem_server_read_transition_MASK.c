
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_16__ {int hand_state; int no_cert_verify; } ;
struct TYPE_12__ {int cert_request; } ;
struct TYPE_14__ {int npn_seen; TYPE_1__ tmp; } ;
struct TYPE_15__ {int verify_mode; int rwstate; scalar_t__ init_num; TYPE_3__ s3; TYPE_2__* session; int version; TYPE_5__ statem; } ;
struct TYPE_13__ {int * peer; } ;
typedef TYPE_4__ SSL ;
typedef TYPE_5__ OSSL_STATEM ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

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
 int VAR_10 ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 scalar_t__ FUNC_3 (TYPE_4__*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int * FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*,int ,int ,int ) ;





 int VAR_16 ;
 void* VAR_17 ;




 int FUNC_6 (TYPE_4__*,int) ;

int FUNC_7(SSL *VAR_18, int VAR_19)
{
    OSSL_STATEM *VAR_20 = &VAR_18->statem;

    if (FUNC_3(VAR_18)) {
        if (!FUNC_6(VAR_18, VAR_19))
            goto err;
        return 1;
    }

    switch (VAR_20->hand_state) {
    default:
        break;

    case 136:
    case 135:
    case 137:
        if (VAR_19 == VAR_4) {
            VAR_20->hand_state = VAR_16;
            return 1;
        }
        break;

    case 128:
        if (VAR_19 == VAR_5) {
            if (VAR_18->s3.tmp.cert_request) {
                if (VAR_18->version == VAR_8) {
                    if ((VAR_18->verify_mode & VAR_15)
                        && (VAR_18->verify_mode & VAR_14)) {





                        FUNC_5(VAR_18, VAR_9,
                                 VAR_10,
                                 VAR_12);
                        return 0;
                    }
                    VAR_20->hand_state = 131;
                    return 1;
                }
            } else {
                VAR_20->hand_state = 131;
                return 1;
            }
        } else if (VAR_18->s3.tmp.cert_request) {
            if (VAR_19 == VAR_1) {
                VAR_20->hand_state = 134;
                return 1;
            }
        }
        break;

    case 134:
        if (VAR_19 == VAR_5) {
            VAR_20->hand_state = 131;
            return 1;
        }
        break;

    case 131:
        if (VAR_18->session->peer == ((void*)0) || VAR_20->no_cert_verify) {
            if (VAR_19 == VAR_3) {






                VAR_20->hand_state = 132;
                return 1;
            }
        } else {
            if (VAR_19 == VAR_2) {
                VAR_20->hand_state = 133;
                return 1;
            }
        }
        break;

    case 133:
        if (VAR_19 == VAR_3) {
            VAR_20->hand_state = 132;
            return 1;
        }
        break;

    case 132:

        if (VAR_18->s3.npn_seen) {
            if (VAR_19 == VAR_7) {
                VAR_20->hand_state = 130;
                return 1;
            }
        } else {

            if (VAR_19 == VAR_6) {
                VAR_20->hand_state = VAR_17;
                return 1;
            }

        }

        break;


    case 130:
        if (VAR_19 == VAR_6) {
            VAR_20->hand_state = VAR_17;
            return 1;
        }
        break;


    case 129:
        if (VAR_19 == VAR_3) {
            VAR_20->hand_state = 132;
            return 1;
        }
        break;
    }

 err:

    if (FUNC_2(VAR_18) && VAR_19 == VAR_3) {
        BIO *VAR_21;





        VAR_18->init_num = 0;
        VAR_18->rwstate = VAR_11;
        VAR_21 = FUNC_4(VAR_18);
        FUNC_0(VAR_21);
        FUNC_1(VAR_21);
        return 0;
    }
    FUNC_5(VAR_18, VAR_0,
             VAR_10,
             VAR_13);
    return 0;
}
