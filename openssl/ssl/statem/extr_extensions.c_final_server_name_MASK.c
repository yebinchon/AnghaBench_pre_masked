
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_9__ ;
typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


struct TYPE_27__ {scalar_t__ ticket_expected; int * hostname; } ;
struct TYPE_30__ {int servername_done; int hit; TYPE_6__ ext; TYPE_5__* session_ctx; TYPE_5__* ctx; TYPE_3__* session; scalar_t__ server; } ;
struct TYPE_28__ {scalar_t__ tick_age_add; scalar_t__ tick_lifetime_hint; scalar_t__ ticklen; int * tick; } ;
struct TYPE_29__ {TYPE_7__ ext; } ;
struct TYPE_25__ {int sess_accept; } ;
struct TYPE_22__ {int (* servername_cb ) (TYPE_9__*,int*,int ) ;int servername_arg; } ;
struct TYPE_26__ {TYPE_4__ stats; TYPE_1__ ext; } ;
struct TYPE_23__ {int * hostname; } ;
struct TYPE_24__ {TYPE_2__ ext; } ;
typedef TYPE_8__ SSL_SESSION ;
typedef TYPE_9__ SSL ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (TYPE_9__*) ;
 scalar_t__ FUNC_3 (TYPE_9__*) ;
 int VAR_5 ;
 int VAR_6 ;



 int VAR_7 ;
 int FUNC_4 (TYPE_9__*) ;
 TYPE_8__* FUNC_5 (TYPE_9__*) ;
 int FUNC_6 (TYPE_9__*,int,int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_9__*,int ,int) ;
 int FUNC_9 (TYPE_9__*,TYPE_8__*) ;
 int FUNC_10 (TYPE_9__*,int*,int ) ;
 int FUNC_11 (TYPE_9__*,int*,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(SSL *VAR_8, unsigned int VAR_9, int VAR_10)
{
    int VAR_11 = 128;
    int VAR_12 = VAR_3;
    int VAR_13 = (FUNC_4(VAR_8) & VAR_5) == 0;

    if (!FUNC_7(VAR_8->ctx != ((void*)0)) || !FUNC_7(VAR_8->session_ctx != ((void*)0))) {
        FUNC_6(VAR_8, VAR_2, VAR_4,
                 VAR_0);
        return 0;
    }

    if (VAR_8->ctx->ext.servername_cb != ((void*)0))
        VAR_11 = VAR_8->ctx->ext.servername_cb(VAR_8, &VAR_12,
                                        VAR_8->ctx->ext.servername_arg);
    else if (VAR_8->session_ctx->ext.servername_cb != ((void*)0))
        VAR_11 = VAR_8->session_ctx->ext.servername_cb(VAR_8, &VAR_12,
                                       VAR_8->session_ctx->ext.servername_arg);
    if (VAR_8->server) {

        if (VAR_10 && VAR_11 == VAR_7 && (!VAR_8->hit || FUNC_3(VAR_8))) {

            FUNC_0(VAR_8->session->ext.hostname);
            VAR_8->session->ext.hostname = FUNC_1(VAR_8->ext.hostname);
            if (VAR_8->session->ext.hostname == ((void*)0) && VAR_8->ext.hostname != ((void*)0)) {
                FUNC_6(VAR_8, VAR_2, VAR_4,
                         VAR_0);
            }
        }
    }







    if (FUNC_2(VAR_8) && VAR_8->ctx != VAR_8->session_ctx) {
        FUNC_12(&VAR_8->ctx->stats.sess_accept);
        FUNC_13(&VAR_8->session_ctx->stats.sess_accept);
    }






    if (VAR_11 == VAR_7 && VAR_8->ext.ticket_expected
            && VAR_13 && (FUNC_4(VAR_8) & VAR_5) != 0) {
        VAR_8->ext.ticket_expected = 0;
        if (!VAR_8->hit) {
            SSL_SESSION* VAR_14 = FUNC_5(VAR_8);

            if (VAR_14 != ((void*)0)) {
                FUNC_0(VAR_14->ext.tick);
                VAR_14->ext.tick = ((void*)0);
                VAR_14->ext.ticklen = 0;
                VAR_14->ext.tick_lifetime_hint = 0;
                VAR_14->ext.tick_age_add = 0;
                if (!FUNC_9(VAR_8, VAR_14)) {
                    FUNC_6(VAR_8, VAR_2, VAR_4,
                             VAR_0);
                    return 0;
                }
            } else {
                FUNC_6(VAR_8, VAR_2, VAR_4,
                         VAR_0);
                return 0;
            }
        }
    }

    switch (VAR_11) {
    case 130:
        FUNC_6(VAR_8, VAR_12, VAR_4, VAR_6);
        return 0;

    case 129:

        if (!FUNC_3(VAR_8))
            FUNC_8(VAR_8, VAR_1, VAR_12);
        return 1;

    case 128:
        VAR_8->servername_done = 0;
        return 1;

    default:
        return 1;
    }
}
