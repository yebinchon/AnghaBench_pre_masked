
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int WPACKET ;
struct TYPE_18__ {scalar_t__ cert_req; size_t finish_md_len; int finish_md; } ;
struct TYPE_19__ {size_t previous_client_finished_len; size_t previous_server_finished_len; TYPE_5__ tmp; int previous_server_finished; int previous_client_finished; } ;
struct TYPE_14__ {int cleanuphand; } ;
struct TYPE_20__ {scalar_t__ post_handshake_auth; TYPE_6__ s3; scalar_t__ server; TYPE_4__* session; TYPE_3__* method; TYPE_1__ statem; } ;
struct TYPE_17__ {int master_key_length; int master_key; } ;
struct TYPE_16__ {TYPE_2__* ssl3_enc; } ;
struct TYPE_15__ {char* server_finished_label; size_t server_finished_label_len; char* client_finished_label; size_t client_finished_label_len; size_t (* final_finish_mac ) (TYPE_7__*,char const*,size_t,int ) ;int (* change_cipher_state ) (TYPE_7__*,int) ;} ;
typedef TYPE_7__ SSL ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (TYPE_7__*) ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (TYPE_7__*,int ,int ,int ) ;
 int FUNC_2 (int *,int ,size_t) ;
 int FUNC_3 (int ,int ,size_t) ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_7__*,int ,int ,int ) ;
 int FUNC_6 (TYPE_7__*,int) ;
 size_t FUNC_7 (TYPE_7__*,char const*,size_t,int ) ;

int FUNC_8(SSL *VAR_8, WPACKET *VAR_9)
{
    size_t VAR_10;
    const char *VAR_11;
    size_t VAR_12;


    if (!VAR_8->server && VAR_8->post_handshake_auth != VAR_7)
        VAR_8->statem.cleanuphand = 1;





    if (FUNC_0(VAR_8)
            && !VAR_8->server
            && VAR_8->s3.tmp.cert_req == 0
            && (!VAR_8->method->ssl3_enc->change_cipher_state(VAR_8,
                    VAR_3 | VAR_4))) {;

        return 0;
    }

    if (VAR_8->server) {
        VAR_11 = VAR_8->method->ssl3_enc->server_finished_label;
        VAR_12 = VAR_8->method->ssl3_enc->server_finished_label_len;
    } else {
        VAR_11 = VAR_8->method->ssl3_enc->client_finished_label;
        VAR_12 = VAR_8->method->ssl3_enc->client_finished_label_len;
    }

    VAR_10 = VAR_8->method->ssl3_enc->final_finish_mac(VAR_8,
                                                          VAR_11, VAR_12,
                                                          VAR_8->s3.tmp.finish_md);
    if (VAR_10 == 0) {

        return 0;
    }

    VAR_8->s3.tmp.finish_md_len = VAR_10;

    if (!FUNC_2(VAR_9, VAR_8->s3.tmp.finish_md, VAR_10)) {
        FUNC_1(VAR_8, VAR_5, VAR_6,
                 VAR_0);
        return 0;
    }





    if (!FUNC_0(VAR_8) && !FUNC_5(VAR_8, VAR_2,
                                            VAR_8->session->master_key,
                                            VAR_8->session->master_key_length)) {

        return 0;
    }




    if (!FUNC_4(VAR_10 <= VAR_1)) {
        FUNC_1(VAR_8, VAR_5, VAR_6,
                 VAR_0);
        return 0;
    }
    if (!VAR_8->server) {
        FUNC_3(VAR_8->s3.previous_client_finished, VAR_8->s3.tmp.finish_md,
               VAR_10);
        VAR_8->s3.previous_client_finished_len = VAR_10;
    } else {
        FUNC_3(VAR_8->s3.previous_server_finished, VAR_8->s3.tmp.finish_md,
               VAR_10);
        VAR_8->s3.previous_server_finished_len = VAR_10;
    }

    return 1;
}
