
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_24__ {int hand_state; } ;
struct TYPE_22__ {int ticket_expected; int status_expected; int * session_secret_cb; } ;
struct TYPE_20__ {TYPE_3__* new_cipher; } ;
struct TYPE_21__ {TYPE_4__ tmp; } ;
struct TYPE_23__ {int hit; int rwstate; scalar_t__ init_num; TYPE_6__ ext; TYPE_5__ s3; TYPE_2__* session; int version; TYPE_8__ statem; } ;
struct TYPE_19__ {int algorithm_auth; int algorithm_mkey; } ;
struct TYPE_17__ {int * tick; } ;
struct TYPE_18__ {TYPE_1__ ext; } ;
typedef TYPE_7__ SSL ;
typedef TYPE_8__ OSSL_STATEM ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
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
 scalar_t__ FUNC_2 (TYPE_7__*) ;
 scalar_t__ FUNC_3 (TYPE_7__*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int * FUNC_4 (TYPE_7__*) ;
 int FUNC_5 (TYPE_7__*,int ,int ,int ) ;
 int VAR_20 ;




 int VAR_21 ;
 int VAR_22 ;


 void* VAR_23 ;





 int FUNC_6 (TYPE_7__*) ;
 int FUNC_7 (TYPE_7__*) ;
 int FUNC_8 (TYPE_7__*,int) ;

int FUNC_9(SSL *VAR_24, int VAR_25)
{
    OSSL_STATEM *VAR_26 = &VAR_24->statem;
    int VAR_27;





    if (FUNC_3(VAR_24)) {
        if (!FUNC_8(VAR_24, VAR_25))
            goto err;
        return 1;
    }

    switch (VAR_26->hand_state) {
    default:
        break;

    case 131:
        if (VAR_25 == VAR_11) {
            VAR_26->hand_state = 132;
            return 1;
        }

        if (FUNC_2(VAR_24)) {
            if (VAR_25 == VAR_0) {
                VAR_26->hand_state = VAR_1;
                return 1;
            }
        }
        break;

    case 129:





        if (VAR_25 == VAR_11) {
            VAR_26->hand_state = 132;
            return 1;
        }
        break;

    case 132:
        if (VAR_24->hit) {
            if (VAR_24->ext.ticket_expected) {
                if (VAR_25 == VAR_9) {
                    VAR_26->hand_state = 133;
                    return 1;
                }
            } else if (VAR_25 == VAR_6) {
                VAR_26->hand_state = 135;
                return 1;
            }
        } else {
            if (FUNC_2(VAR_24) && VAR_25 == VAR_0) {
                VAR_26->hand_state = VAR_1;
                return 1;
            } else if (VAR_24->version >= VAR_20
                       && VAR_24->ext.session_secret_cb != ((void*)0)
                       && VAR_24->session->ext.tick != ((void*)0)
                       && VAR_25 == VAR_6) {






                VAR_24->hit = 1;
                VAR_26->hand_state = 135;
                return 1;
            } else if (!(VAR_24->s3.tmp.new_cipher->algorithm_auth
                         & (VAR_17 | VAR_19 | VAR_18))) {
                if (VAR_25 == VAR_3) {
                    VAR_26->hand_state = 138;
                    return 1;
                }
            } else {
                VAR_27 = FUNC_7(VAR_24);

                if (VAR_27
                    || ((VAR_24->s3.tmp.new_cipher->algorithm_mkey & VAR_14)
                        && VAR_25 == VAR_12)) {
                    if (VAR_25 == VAR_12) {
                        VAR_26->hand_state = 134;
                        return 1;
                    }
                } else if (VAR_25 == VAR_4
                           && FUNC_6(VAR_24)) {
                    VAR_26->hand_state = 137;
                    return 1;
                } else if (VAR_25 == VAR_10) {
                    VAR_26->hand_state = VAR_23;
                    return 1;
                }
            }
        }
        break;

    case 138:




        if (VAR_24->ext.status_expected && VAR_25 == VAR_5) {
            VAR_26->hand_state = 136;
            return 1;
        }


    case 136:
        VAR_27 = FUNC_7(VAR_24);

        if (VAR_27 || ((VAR_24->s3.tmp.new_cipher->algorithm_mkey & VAR_14)
                             && VAR_25 == VAR_12)) {
            if (VAR_25 == VAR_12) {
                VAR_26->hand_state = 134;
                return 1;
            }
            goto err;
        }


    case 134:
        if (VAR_25 == VAR_4) {
            if (FUNC_6(VAR_24)) {
                VAR_26->hand_state = 137;
                return 1;
            }
            goto err;
        }


    case 137:
        if (VAR_25 == VAR_10) {
            VAR_26->hand_state = VAR_23;
            return 1;
        }
        break;

    case 130:
        if (VAR_24->ext.ticket_expected) {
            if (VAR_25 == VAR_9) {
                VAR_26->hand_state = 133;
                return 1;
            }
        } else if (VAR_25 == VAR_6) {
            VAR_26->hand_state = 135;
            return 1;
        }
        break;

    case 133:
        if (VAR_25 == VAR_6) {
            VAR_26->hand_state = 135;
            return 1;
        }
        break;

    case 135:
        if (VAR_25 == VAR_7) {
            VAR_26->hand_state = VAR_21;
            return 1;
        }
        break;

    case 128:
        if (VAR_25 == VAR_8) {
            VAR_26->hand_state = VAR_22;
            return 1;
        }
        break;
    }

 err:

    if (FUNC_2(VAR_24) && VAR_25 == VAR_6) {
        BIO *VAR_28;





        VAR_24->init_num = 0;
        VAR_24->rwstate = VAR_15;
        VAR_28 = FUNC_4(VAR_24);
        FUNC_0(VAR_28);
        FUNC_1(VAR_28);
        return 0;
    }
    FUNC_5(VAR_24, VAR_2,
             VAR_13,
             VAR_16);
    return 0;
}
