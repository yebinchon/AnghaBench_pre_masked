
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {TYPE_2__* new_cipher; } ;
struct TYPE_13__ {TYPE_3__ tmp; } ;
struct TYPE_10__ {int * B; int * s; int * g; int * N; } ;
struct TYPE_15__ {TYPE_5__* session; TYPE_4__ s3; TYPE_1__ srp_ctx; } ;
struct TYPE_14__ {int peer; } ;
struct TYPE_11__ {int algorithm_auth; } ;
typedef TYPE_6__ SSL ;
typedef int PACKET ;
typedef int EVP_PKEY ;


 void* FUNC_0 (int ,int,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (TYPE_6__*,int ,int ,int ) ;
 int * FUNC_6 (int ) ;
 int FUNC_7 (TYPE_6__*) ;

__attribute__((used)) static int FUNC_8(SSL *VAR_8, PACKET *VAR_9, EVP_PKEY **VAR_10)
{

    PACKET VAR_11, VAR_12, VAR_13, VAR_14;

    if (!FUNC_3(VAR_9, &VAR_11)
        || !FUNC_3(VAR_9, &VAR_12)
        || !FUNC_2(VAR_9, &VAR_13)
        || !FUNC_3(VAR_9, &VAR_14)) {
        FUNC_5(VAR_8, VAR_2, VAR_4,
                 VAR_5);
        return 0;
    }


    if ((VAR_8->srp_ctx.N =
         FUNC_0(FUNC_1(&VAR_11),
                   (int)FUNC_4(&VAR_11), ((void*)0))) == ((void*)0)
        || (VAR_8->srp_ctx.g =
            FUNC_0(FUNC_1(&VAR_12),
                      (int)FUNC_4(&VAR_12), ((void*)0))) == ((void*)0)
        || (VAR_8->srp_ctx.s =
            FUNC_0(FUNC_1(&VAR_13),
                      (int)FUNC_4(&VAR_13), ((void*)0))) == ((void*)0)
        || (VAR_8->srp_ctx.B =
            FUNC_0(FUNC_1(&VAR_14),
                      (int)FUNC_4(&VAR_14), ((void*)0))) == ((void*)0)) {
        FUNC_5(VAR_8, VAR_3, VAR_4,
                 VAR_0);
        return 0;
    }

    if (!FUNC_7(VAR_8)) {

        return 0;
    }


    if (VAR_8->s3.tmp.new_cipher->algorithm_auth & (VAR_7 | VAR_6))
        *VAR_10 = FUNC_6(VAR_8->session->peer);

    return 1;





}
