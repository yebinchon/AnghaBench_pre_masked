
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int hash ;
typedef int finsecret ;
struct TYPE_12__ {unsigned char* server_finished_secret; unsigned char* client_finished_secret; int client_app_traffic_secret; TYPE_2__* method; } ;
struct TYPE_11__ {TYPE_1__* ssl3_enc; } ;
struct TYPE_10__ {char const* server_finished_label; } ;
typedef TYPE_3__ SSL ;
typedef int EVP_PKEY ;
typedef int EVP_MD_CTX ;
typedef int EVP_MD ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,unsigned char*,size_t*) ;
 scalar_t__ FUNC_1 (int *,int *,int const*,int *,int *) ;
 scalar_t__ FUNC_2 (int *,unsigned char*,size_t) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int * FUNC_4 () ;
 int VAR_2 ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int ,int *,unsigned char*,size_t) ;
 int FUNC_7 (unsigned char*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*,int ,int ,int ) ;
 int FUNC_10 (TYPE_3__*,unsigned char*,int,size_t*) ;
 int * FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (TYPE_3__*,int *,int ,unsigned char*,size_t) ;

size_t FUNC_13(SSL *VAR_5, const char *VAR_6, size_t VAR_7,
                             unsigned char *VAR_8)
{
    const EVP_MD *VAR_9 = FUNC_11(VAR_5);
    unsigned char VAR_10[VAR_1];
    size_t VAR_11, VAR_12 = 0;
    EVP_PKEY *VAR_13 = ((void*)0);
    EVP_MD_CTX *VAR_14 = FUNC_4();

    if (!FUNC_10(VAR_5, VAR_10, sizeof(VAR_10), &VAR_11)) {

        goto err;
    }

    if (VAR_6 == VAR_5->method->ssl3_enc->server_finished_label) {
        VAR_13 = FUNC_6(VAR_2, ((void*)0),
                                           VAR_5->server_finished_secret, VAR_11);
    } else if (FUNC_8(VAR_5)) {
        VAR_13 = FUNC_6(VAR_2, ((void*)0),
                                           VAR_5->client_finished_secret, VAR_11);
    } else {
        unsigned char VAR_15[VAR_1];

        if (!FUNC_12(VAR_5, FUNC_11(VAR_5),
                                      VAR_5->client_app_traffic_secret,
                                      VAR_15, VAR_11))
            goto err;

        VAR_13 = FUNC_6(VAR_2, ((void*)0), VAR_15,
                                           VAR_11);
        FUNC_7(VAR_15, sizeof(VAR_15));
    }

    if (VAR_13 == ((void*)0)
            || VAR_14 == ((void*)0)
            || FUNC_1(VAR_14, ((void*)0), VAR_9, ((void*)0), VAR_13) <= 0
            || FUNC_2(VAR_14, VAR_10, VAR_11) <= 0
            || FUNC_0(VAR_14, VAR_8, &VAR_11) <= 0) {
        FUNC_9(VAR_5, VAR_3, VAR_4,
                 VAR_0);
        goto err;
    }

    VAR_12 = VAR_11;
 err:
    FUNC_5(VAR_13);
    FUNC_3(VAR_14);
    return VAR_12;
}
