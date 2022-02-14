
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_18__ ;


struct TYPE_26__ {int session_id_len; int session_id; int pre_proc_exts; } ;
struct TYPE_23__ {int ticket_expected; } ;
struct TYPE_21__ {int flags; } ;
struct TYPE_25__ {scalar_t__ version; scalar_t__ sid_ctx_length; int verify_mode; TYPE_3__ ext; TYPE_4__* session; int verify_result; TYPE_18__* session_ctx; TYPE_1__ s3; int sid_ctx; } ;
struct TYPE_24__ {scalar_t__ ssl_version; scalar_t__ sid_ctx_length; long timeout; int flags; int verify_result; scalar_t__ time; int sid_ctx; } ;
struct TYPE_22__ {int sess_hit; int sess_timeout; } ;
struct TYPE_20__ {TYPE_2__ stats; } ;
typedef int SSL_TICKET_STATUS ;
typedef TYPE_4__ SSL_SESSION ;
typedef TYPE_5__ SSL ;
typedef TYPE_6__ CLIENTHELLO_MSG ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_18__*,TYPE_4__*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (TYPE_5__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (TYPE_4__*) ;
 int VAR_7 ;







 int VAR_8 ;
 int FUNC_3 (TYPE_5__*,int ,int ,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_4__* FUNC_4 (TYPE_5__*,int ,int ) ;
 scalar_t__ FUNC_5 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (TYPE_5__*,TYPE_6__*,TYPE_4__**) ;
 int FUNC_8 (TYPE_5__*,int ,int ,int ,int *,int ) ;
 int FUNC_9 (int *) ;

int FUNC_10(SSL *VAR_12, CLIENTHELLO_MSG *VAR_13)
{


    SSL_SESSION *VAR_14 = ((void*)0);
    int VAR_15 = 0;
    int VAR_16 = 0;
    SSL_TICKET_STATUS VAR_17;

    if (FUNC_1(VAR_12)) {




        VAR_12->ext.ticket_expected = 1;
        if (!FUNC_8(VAR_12, VAR_11,
                                 VAR_3, VAR_13->pre_proc_exts,
                                 ((void*)0), 0)
                || !FUNC_8(VAR_12, VAR_10, VAR_3,
                                        VAR_13->pre_proc_exts, ((void*)0), 0))
            return -1;

        VAR_14 = VAR_12->session;
    } else {

        VAR_17 = FUNC_7(VAR_12, VAR_13, &VAR_14);
        switch (VAR_17) {
        case 133:
        case 132:
            VAR_15 = 1;
            FUNC_3(VAR_12, VAR_2, VAR_4,
                     VAR_0);
            goto err;
        case 131:
        case 134:
            if (VAR_13->session_id_len > 0) {
                VAR_16 = 1;
                VAR_14 = FUNC_4(VAR_12, VAR_13->session_id,
                                           VAR_13->session_id_len);
            }
            break;
        case 130:
        case 129:
        case 128:
            break;
        }
    }

    if (VAR_14 == ((void*)0))
        goto err;




    if (VAR_14->ssl_version != VAR_12->version)
        goto err;

    if (VAR_14->sid_ctx_length != VAR_12->sid_ctx_length
        || FUNC_5(VAR_14->sid_ctx, VAR_12->sid_ctx, VAR_14->sid_ctx_length)) {




        goto err;
    }

    if ((VAR_12->verify_mode & VAR_8) && VAR_12->sid_ctx_length == 0) {
        FUNC_3(VAR_12, VAR_2, VAR_4,
                 VAR_6);
        VAR_15 = 1;
        goto err;
    }

    if (VAR_14->timeout < (long)(FUNC_6(((void*)0)) - VAR_14->time)) {
        FUNC_9(&VAR_12->session_ctx->stats.sess_timeout);
        if (VAR_16) {

            FUNC_0(VAR_12->session_ctx, VAR_14);
        }
        goto err;
    }


    if (VAR_14->flags & VAR_7) {

        if (!(VAR_12->s3.flags & VAR_9)) {
            FUNC_3(VAR_12, VAR_1, VAR_4,
                     VAR_5);
            VAR_15 = 1;
            goto err;
        }
    } else if (VAR_12->s3.flags & VAR_9) {

        goto err;
    }

    if (!FUNC_1(VAR_12)) {

        FUNC_2(VAR_12->session);
        VAR_12->session = VAR_14;
    }

    FUNC_9(&VAR_12->session_ctx->stats.sess_hit);
    VAR_12->verify_result = VAR_12->session->verify_result;
    return 1;

 err:
    if (VAR_14 != ((void*)0)) {
        FUNC_2(VAR_14);

        if (FUNC_1(VAR_12))
            VAR_12->session = ((void*)0);

        if (!VAR_16) {




            VAR_12->ext.ticket_expected = 1;
        }
    }
    if (VAR_15)
        return -1;

    return 0;
}
