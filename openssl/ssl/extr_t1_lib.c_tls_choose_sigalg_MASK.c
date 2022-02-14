
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_30__ {int sig_idx; scalar_t__ sig; int curve; scalar_t__ const sigalg; } ;
struct TYPE_27__ {TYPE_7__ const* sigalg; TYPE_3__* cert; TYPE_1__* new_cipher; int * peer_sigalgs; } ;
struct TYPE_28__ {TYPE_4__ tmp; } ;
struct TYPE_29__ {size_t shared_sigalgslen; TYPE_5__ s3; TYPE_2__* cert; scalar_t__ server; TYPE_7__** shared_sigalgs; } ;
struct TYPE_26__ {int * privatekey; } ;
struct TYPE_25__ {TYPE_3__* key; TYPE_3__* pkeys; } ;
struct TYPE_24__ {int algorithm_auth; } ;
typedef TYPE_6__ SSL ;
typedef TYPE_7__ SIGALG_LOOKUP ;
typedef int EVP_PKEY ;
typedef int EC_KEY ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (TYPE_6__*) ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_5 (TYPE_6__*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_6 (TYPE_6__*,int ,int ,int ) ;
 TYPE_7__* FUNC_7 (TYPE_6__*,int *,int *) ;
 scalar_t__ FUNC_8 (TYPE_6__*,TYPE_7__ const*,int) ;
 int FUNC_9 (int ,TYPE_7__ const*) ;
 int FUNC_10 (TYPE_6__*,int) ;
 int FUNC_11 (TYPE_6__*,TYPE_7__ const*) ;
 size_t FUNC_12 (TYPE_6__*,int,scalar_t__ const**) ;
 TYPE_7__* FUNC_13 (TYPE_6__*,int) ;
 scalar_t__ FUNC_14 (TYPE_6__*) ;

int FUNC_15(SSL *VAR_12, int VAR_13)
{
    const SIGALG_LOOKUP *VAR_14 = ((void*)0);
    int VAR_15 = -1;

    VAR_12->s3.tmp.cert = ((void*)0);
    VAR_12->s3.tmp.sigalg = ((void*)0);

    if (FUNC_4(VAR_12)) {
        VAR_14 = FUNC_7(VAR_12, ((void*)0), ((void*)0));
        if (VAR_14 == ((void*)0)) {
            if (!VAR_13)
                return 1;
            FUNC_6(VAR_12, VAR_2, VAR_5,
                     VAR_7);
            return 0;
        }
    } else {

        if (!(VAR_12->s3.tmp.new_cipher->algorithm_auth & VAR_9))
            return 1;
        if (!VAR_12->server && !FUNC_10(VAR_12, VAR_12->cert->key - VAR_12->cert->pkeys))
                return 1;

        if (FUNC_5(VAR_12)) {
            size_t VAR_16;
            if (VAR_12->s3.tmp.peer_sigalgs != ((void*)0)) {

                int VAR_17;


                if (FUNC_14(VAR_12)) {
                    EC_KEY *VAR_18 = FUNC_3(VAR_12->cert->pkeys[VAR_6].privatekey);
                    VAR_17 = FUNC_0(FUNC_1(VAR_18));
                } else {
                    VAR_17 = -1;
                }






                for (VAR_16 = 0; VAR_16 < VAR_12->shared_sigalgslen; VAR_16++) {
                    VAR_14 = VAR_12->shared_sigalgs[VAR_16];

                    if (VAR_12->server) {
                        if ((VAR_15 = FUNC_11(VAR_12, VAR_14)) == -1)
                            continue;
                    } else {
                        int VAR_19 = VAR_12->cert->key - VAR_12->cert->pkeys;

                        VAR_15 = VAR_14->sig_idx;
                        if (VAR_19 != VAR_15)
                            continue;
                    }

                    if (!FUNC_8(VAR_12, VAR_14, VAR_15))
                        continue;
                    if (VAR_14->sig == VAR_1) {

                        EVP_PKEY *VAR_20 = VAR_12->cert->pkeys[VAR_15].privatekey;

                        if (!FUNC_9(FUNC_2(VAR_20), VAR_14))
                            continue;
                    }

                    if (VAR_17 == -1 || VAR_14->curve == VAR_17)

                        break;
                }






                if (VAR_16 == VAR_12->shared_sigalgslen && VAR_12->s3.tmp.new_cipher->algorithm_auth & (VAR_10 | VAR_11)) {
                  if ((VAR_14 = FUNC_13(VAR_12, -1)) == ((void*)0)) {
                    if (!VAR_13)
                      return 1;
                    FUNC_6(VAR_12, VAR_2,
                             VAR_5,
                             VAR_7);
                    return 0;
                  } else {
                    VAR_16 = 0;
                    VAR_15 = VAR_14->sig_idx;
                  }
                }

                if (VAR_16 == VAR_12->shared_sigalgslen) {
                    if (!VAR_13)
                        return 1;
                    FUNC_6(VAR_12, VAR_2,
                             VAR_5,
                             VAR_7);
                    return 0;
                }
            } else {



                const uint16_t *VAR_21;
                size_t VAR_22;

                if ((VAR_14 = FUNC_13(VAR_12, -1)) == ((void*)0)) {
                    if (!VAR_13)
                        return 1;
                    FUNC_6(VAR_12, VAR_4, VAR_5,
                             VAR_0);
                    return 0;
                }


                VAR_22 = FUNC_12(VAR_12, 1, &VAR_21);
                for (VAR_16 = 0; VAR_16 < VAR_22; VAR_16++, VAR_21++) {
                    if (VAR_14->sigalg == *VAR_21
                            && FUNC_8(VAR_12, VAR_14, VAR_14->sig_idx))
                        break;
                }
                if (VAR_16 == VAR_22) {
                    if (!VAR_13)
                        return 1;
                    FUNC_6(VAR_12, VAR_3,
                             VAR_5,
                             VAR_8);
                    return 0;
                }
            }
        } else {
            if ((VAR_14 = FUNC_13(VAR_12, -1)) == ((void*)0)) {
                if (!VAR_13)
                    return 1;
                FUNC_6(VAR_12, VAR_4, VAR_5,
                         VAR_0);
                return 0;
            }
        }
    }
    if (VAR_15 == -1)
        VAR_15 = VAR_14->sig_idx;
    VAR_12->s3.tmp.cert = &VAR_12->cert->pkeys[VAR_15];
    VAR_12->cert->key = VAR_12->s3.tmp.cert;
    VAR_12->s3.tmp.sigalg = VAR_14;
    return 1;
}
