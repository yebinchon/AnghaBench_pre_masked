
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int mask_k; int mask_a; int max_ver; int min_ver; } ;
struct TYPE_10__ {TYPE_2__ tmp; } ;
struct TYPE_8__ {int srp_Mask; } ;
struct TYPE_11__ {TYPE_3__ s3; TYPE_1__ srp_ctx; int psk_client_callback; } ;
typedef TYPE_4__ SSL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_4__*,int *,int *,int *) ;
 int FUNC_1 (int *,TYPE_4__*,int ) ;

int FUNC_2(SSL *VAR_5)
{
    VAR_5->s3.tmp.mask_a = 0;
    VAR_5->s3.tmp.mask_k = 0;
    FUNC_1(&VAR_5->s3.tmp.mask_a, VAR_5, VAR_1);
    if (FUNC_0(VAR_5, &VAR_5->s3.tmp.min_ver,
                                &VAR_5->s3.tmp.max_ver, ((void*)0)) != 0)
        return 0;


    if (!VAR_5->psk_client_callback) {
        VAR_5->s3.tmp.mask_a |= VAR_2;
        VAR_5->s3.tmp.mask_k |= VAR_0;
    }


    if (!(VAR_5->srp_ctx.srp_Mask & VAR_4)) {
        VAR_5->s3.tmp.mask_a |= VAR_3;
        VAR_5->s3.tmp.mask_k |= VAR_4;
    }

    return 1;
}
