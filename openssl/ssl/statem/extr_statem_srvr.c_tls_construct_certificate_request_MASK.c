
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int uint16_t ;
typedef int WPACKET ;
struct TYPE_15__ {int cert_request; } ;
struct TYPE_16__ {TYPE_1__ tmp; } ;
struct TYPE_17__ {scalar_t__ post_handshake_auth; int pha_context_len; TYPE_2__ s3; int certreqs_sent; int * pha_context; } ;
typedef TYPE_3__ SSL ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,int ,int ,int ) ;
 int VAR_5 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int *,int) ;
 int FUNC_12 (TYPE_3__*,int ,int *) ;
 int FUNC_13 (TYPE_3__*) ;
 int FUNC_14 (TYPE_3__*,int *) ;
 int FUNC_15 (TYPE_3__*,int *,int const*,size_t) ;
 size_t FUNC_16 (TYPE_3__*,int,int const**) ;
 int FUNC_17 (TYPE_3__*) ;
 int FUNC_18 (TYPE_3__*,int *,int ,int *,int ) ;

int FUNC_19(SSL *VAR_6, WPACKET *VAR_7)
{
    if (FUNC_3(VAR_6)) {

        if (VAR_6->post_handshake_auth == VAR_4) {
            FUNC_0(VAR_6->pha_context);
            VAR_6->pha_context_len = 32;
            if ((VAR_6->pha_context = FUNC_1(VAR_6->pha_context_len)) == ((void*)0)
                    || FUNC_2(VAR_6->pha_context, VAR_6->pha_context_len) <= 0
                    || !FUNC_11(VAR_7, VAR_6->pha_context, VAR_6->pha_context_len)) {
                FUNC_5(VAR_6, VAR_1,
                         VAR_3,
                         VAR_0);
                return 0;
            }

            if (!FUNC_17(VAR_6)) {

                return 0;
            }
        } else {
            if (!FUNC_7(VAR_7, 0)) {
                FUNC_5(VAR_6, VAR_1,
                         VAR_3,
                         VAR_0);
                return 0;
            }
        }

        if (!FUNC_18(VAR_6, VAR_7,
                                      VAR_2, ((void*)0),
                                      0)) {

            return 0;
        }
        goto done;
    }


    if (!FUNC_10(VAR_7)
        || !FUNC_14(VAR_6, VAR_7) || !FUNC_6(VAR_7)) {
        FUNC_5(VAR_6, VAR_1,
                 VAR_3, VAR_0);
        return 0;
    }

    if (FUNC_4(VAR_6)) {
        const uint16_t *VAR_8;
        size_t VAR_9 = FUNC_16(VAR_6, 1, &VAR_8);

        if (!FUNC_9(VAR_7)
                || !FUNC_8(VAR_7, VAR_5)
                || !FUNC_15(VAR_6, VAR_7, VAR_8, VAR_9)
                || !FUNC_6(VAR_7)) {
            FUNC_5(VAR_6, VAR_1,
                     VAR_3,
                     VAR_0);
            return 0;
        }
    }

    if (!FUNC_12(VAR_6, FUNC_13(VAR_6), VAR_7)) {

        return 0;
    }

 done:
    VAR_6->certreqs_sent++;
    VAR_6->s3.tmp.cert_request = 1;
    return 1;
}
