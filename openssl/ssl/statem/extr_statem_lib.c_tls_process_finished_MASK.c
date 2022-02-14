
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_17__ {size_t peer_finish_md_len; int peer_finish_md; } ;
struct TYPE_18__ {size_t previous_client_finished_len; size_t previous_server_finished_len; TYPE_2__ tmp; int previous_server_finished; int previous_client_finished; scalar_t__ change_cipher_spec; } ;
struct TYPE_16__ {int cleanuphand; int enc_read_state; } ;
struct TYPE_22__ {scalar_t__ post_handshake_auth; TYPE_6__* method; TYPE_4__* session; int handshake_secret; int master_secret; scalar_t__ server; TYPE_3__ s3; int rlayer; TYPE_1__ statem; } ;
struct TYPE_21__ {TYPE_5__* ssl3_enc; } ;
struct TYPE_20__ {int (* change_cipher_state ) (TYPE_7__*,int) ;int (* generate_master_secret ) (TYPE_7__*,int ,int ,int ,int *) ;} ;
struct TYPE_19__ {int master_key_length; } ;
typedef TYPE_7__ SSL ;
typedef int PACKET ;
typedef int MSG_PROCESS_RETURN ;


 scalar_t__ FUNC_0 (int ,int ,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 size_t FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_4 (TYPE_7__*) ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_5 (TYPE_7__*,int ,int ,int ) ;
 int FUNC_6 (int ,int ,size_t) ;
 int FUNC_7 (int) ;
 int FUNC_8 (TYPE_7__*,int) ;
 int FUNC_9 (TYPE_7__*,int ,int ,int ,int *) ;
 int FUNC_10 (TYPE_7__*,int) ;
 int FUNC_11 (TYPE_7__*) ;
 int FUNC_12 (TYPE_7__*) ;

MSG_PROCESS_RETURN FUNC_13(SSL *VAR_18, PACKET *VAR_19)
{
    size_t VAR_20;



    if (VAR_18->server) {





        VAR_18->statem.enc_read_state = VAR_0;
        if (VAR_18->post_handshake_auth != VAR_13)
            VAR_18->statem.cleanuphand = 1;
        if (FUNC_4(VAR_18) && !FUNC_11(VAR_18)) {

                return VAR_3;
        }
    }





    if (FUNC_4(VAR_18) && FUNC_3(&VAR_18->rlayer)) {
        FUNC_5(VAR_18, VAR_11, VAR_12,
                 VAR_17);
        return VAR_3;
    }


    if (!FUNC_4(VAR_18) && !VAR_18->s3.change_cipher_spec) {
        FUNC_5(VAR_18, VAR_11, VAR_12,
                 VAR_16);
        return VAR_3;
    }
    VAR_18->s3.change_cipher_spec = 0;

    VAR_20 = VAR_18->s3.tmp.peer_finish_md_len;

    if (VAR_20 != FUNC_2(VAR_19)) {
        FUNC_5(VAR_18, VAR_8, VAR_12,
                 VAR_14);
        return VAR_3;
    }

    if (FUNC_0(FUNC_1(VAR_19), VAR_18->s3.tmp.peer_finish_md,
                      VAR_20) != 0) {
        FUNC_5(VAR_18, VAR_9, VAR_12,
                 VAR_15);
        return VAR_3;
    }




    if (!FUNC_7(VAR_20 <= VAR_2)) {
        FUNC_5(VAR_18, VAR_10, VAR_12,
                 VAR_1);
        return VAR_3;
    }
    if (VAR_18->server) {
        FUNC_6(VAR_18->s3.previous_client_finished, VAR_18->s3.tmp.peer_finish_md,
               VAR_20);
        VAR_18->s3.previous_client_finished_len = VAR_20;
    } else {
        FUNC_6(VAR_18->s3.previous_server_finished, VAR_18->s3.tmp.peer_finish_md,
               VAR_20);
        VAR_18->s3.previous_server_finished_len = VAR_20;
    }





    if (FUNC_4(VAR_18)) {
        if (VAR_18->server) {
            if (VAR_18->post_handshake_auth != VAR_13 &&
                    !VAR_18->method->ssl3_enc->change_cipher_state(VAR_18,
                    VAR_5 | VAR_7)) {

                return VAR_3;
            }
        } else {
            if (!VAR_18->method->ssl3_enc->generate_master_secret(VAR_18,
                    VAR_18->master_secret, VAR_18->handshake_secret, 0,
                    &VAR_18->session->master_key_length)) {

                return VAR_3;
            }
            if (!VAR_18->method->ssl3_enc->change_cipher_state(VAR_18,
                    VAR_5 | VAR_6)) {

                return VAR_3;
            }
            if (!FUNC_12(VAR_18)) {

                return VAR_3;
            }
        }
    }

    return VAR_4;
}
