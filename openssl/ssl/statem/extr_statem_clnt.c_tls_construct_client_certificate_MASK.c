
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int WPACKET ;
struct TYPE_13__ {int cert_req; } ;
struct TYPE_14__ {TYPE_1__ tmp; } ;
struct TYPE_18__ {TYPE_5__* method; TYPE_3__* cert; TYPE_2__ s3; int pha_context_len; int * pha_context; } ;
struct TYPE_17__ {TYPE_4__* ssl3_enc; } ;
struct TYPE_16__ {int (* change_cipher_state ) (TYPE_6__*,int) ;} ;
struct TYPE_15__ {int * key; } ;
typedef TYPE_6__ SSL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_6__*) ;
 scalar_t__ FUNC_1 (TYPE_6__*) ;
 int VAR_6 ;
 int FUNC_2 (TYPE_6__*,int ,int ,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int *,int ) ;
 int FUNC_5 (TYPE_6__*,int *,int *) ;
 int FUNC_6 (TYPE_6__*,int) ;

int FUNC_7(SSL *VAR_7, WPACKET *VAR_8)
{
    if (FUNC_1(VAR_7)) {
        if (VAR_7->pha_context == ((void*)0)) {

            if (!FUNC_3(VAR_8, 0)) {
                FUNC_2(VAR_7, VAR_3,
                         VAR_5, VAR_0);
                return 0;
            }
        } else if (!FUNC_4(VAR_8, VAR_7->pha_context, VAR_7->pha_context_len)) {
            FUNC_2(VAR_7, VAR_3,
                     VAR_5, VAR_0);
            return 0;
        }
    }
    if (!FUNC_5(VAR_7, VAR_8,
                                (VAR_7->s3.tmp.cert_req == 2) ? ((void*)0)
                                                           : VAR_7->cert->key)) {

        return 0;
    }

    if (FUNC_1(VAR_7)
            && FUNC_0(VAR_7)
            && (!VAR_7->method->ssl3_enc->change_cipher_state(VAR_7,
                    VAR_1 | VAR_2))) {




        FUNC_2(VAR_7, VAR_4, VAR_5,
                 VAR_6);
        return 0;
    }

    return 1;
}
