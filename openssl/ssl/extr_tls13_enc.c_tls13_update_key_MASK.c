
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int secret ;
typedef int application_traffic ;
struct TYPE_10__ {int enc_write_state; } ;
struct TYPE_8__ {int new_sym_enc; } ;
struct TYPE_9__ {TYPE_1__ tmp; } ;
struct TYPE_11__ {int server; unsigned char* server_app_traffic_secret; unsigned char* client_app_traffic_secret; unsigned char* write_iv; unsigned char* read_iv; TYPE_3__ statem; TYPE_2__ s3; int rlayer; int * enc_read_ctx; int * enc_write_ctx; } ;
typedef TYPE_4__ SSL ;
typedef int EVP_MD ;
typedef int EVP_CIPHER_CTX ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (int const*) ;
 int FUNC_1 (unsigned char*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_4__*,int,int *,int ,unsigned char*,int *,unsigned char const*,int,unsigned char*,unsigned char*,int *) ;
 int FUNC_5 (unsigned char*,unsigned char*,size_t) ;
 int * FUNC_6 (TYPE_4__*) ;

int FUNC_7(SSL *VAR_3, int VAR_4)
{



  static const unsigned char VAR_5[] = "traffic upd";

    const EVP_MD *VAR_6 = FUNC_6(VAR_3);
    size_t VAR_7 = FUNC_0(VAR_6);
    unsigned char *VAR_8, *VAR_9;
    unsigned char VAR_10[VAR_2];
    EVP_CIPHER_CTX *VAR_11;
    int VAR_12 = 0;

    if (VAR_3->server == VAR_4)
        VAR_8 = VAR_3->server_app_traffic_secret;
    else
        VAR_8 = VAR_3->client_app_traffic_secret;

    if (VAR_4) {
        VAR_3->statem.enc_write_state = VAR_0;
        VAR_9 = VAR_3->write_iv;
        VAR_11 = VAR_3->enc_write_ctx;
        FUNC_3(&VAR_3->rlayer);
    } else {
        VAR_9 = VAR_3->read_iv;
        VAR_11 = VAR_3->enc_read_ctx;
        FUNC_2(&VAR_3->rlayer);
    }

    if (!FUNC_4(VAR_3, VAR_4, FUNC_6(VAR_3),
                                  VAR_3->s3.tmp.new_sym_enc, VAR_8, ((void*)0),
                                  VAR_5,
                                  sizeof(VAR_5) - 1, VAR_10, VAR_9,
                                  VAR_11)) {

        goto err;
    }

    FUNC_5(VAR_8, VAR_10, VAR_7);

    VAR_3->statem.enc_write_state = VAR_1;
    VAR_12 = 1;
 err:
    FUNC_1(VAR_10, sizeof(VAR_10));
    return VAR_12;
}
