
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


struct TYPE_11__ {int new_cipher; int * key_block; } ;
struct TYPE_12__ {TYPE_2__ tmp; } ;
struct TYPE_15__ {TYPE_5__* method; TYPE_3__ s3; TYPE_1__* session; scalar_t__ server; } ;
struct TYPE_14__ {TYPE_4__* ssl3_enc; } ;
struct TYPE_13__ {int (* change_cipher_state ) (TYPE_6__*,int) ;int (* setup_key_block ) (TYPE_6__*) ;} ;
struct TYPE_10__ {scalar_t__ master_key_length; int cipher; } ;
typedef TYPE_6__ SSL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (TYPE_6__*,int) ;

int FUNC_3(SSL *VAR_4)
{
    int VAR_5;

    if (VAR_4->server)
        VAR_5 = VAR_1;
    else
        VAR_5 = VAR_0;

    if (VAR_4->s3.tmp.key_block == ((void*)0)) {
        if (VAR_4->session == ((void*)0) || VAR_4->session->master_key_length == 0) {

            FUNC_0(VAR_2, VAR_3);
            return 0;
        }

        VAR_4->session->cipher = VAR_4->s3.tmp.new_cipher;
        if (!VAR_4->method->ssl3_enc->setup_key_block(VAR_4)) {

            return 0;
        }
    }

    if (!VAR_4->method->ssl3_enc->change_cipher_state(VAR_4, VAR_5)) {

        return 0;
    }

    return 1;
}
