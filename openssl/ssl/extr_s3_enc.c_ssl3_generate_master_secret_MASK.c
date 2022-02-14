
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int buf ;
struct TYPE_6__ {unsigned char* client_random; unsigned char* server_random; } ;
struct TYPE_8__ {TYPE_2__* ctx; TYPE_1__ s3; } ;
struct TYPE_7__ {int md5; int sha1; } ;
typedef TYPE_3__ SSL ;
typedef int EVP_MD_CTX ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,unsigned char*,unsigned int*) ;
 scalar_t__ FUNC_1 (int *,int ,int *) ;
 scalar_t__ FUNC_2 (int *,unsigned char const*,unsigned int) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int * FUNC_4 () ;
 int FUNC_5 (unsigned char*,int) ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (TYPE_3__*,int ,int ,int ) ;
 unsigned int FUNC_7 (char const*) ;

int FUNC_8(SSL *VAR_6, unsigned char *VAR_7, unsigned char *VAR_8,
                                size_t VAR_9, size_t *VAR_10)
{
    static const unsigned char *VAR_11[3] = {

        (const unsigned char *)"A",
        (const unsigned char *)"BB",
        (const unsigned char *)"CCC",





    };
    unsigned char VAR_12[VAR_2];
    EVP_MD_CTX *VAR_13 = FUNC_4();
    int VAR_14, VAR_15 = 1;
    unsigned int VAR_16;
    size_t VAR_17 = 0;

    if (VAR_13 == ((void*)0)) {
        FUNC_6(VAR_6, VAR_4, VAR_5,
                 VAR_1);
        return 0;
    }
    for (VAR_14 = 0; VAR_14 < 3; VAR_14++) {
        if (FUNC_1(VAR_13, VAR_6->ctx->sha1, ((void*)0)) <= 0
            || FUNC_2(VAR_13, VAR_11[VAR_14],
                                FUNC_7((const char *)VAR_11[VAR_14])) <= 0
            || FUNC_2(VAR_13, VAR_8, VAR_9) <= 0
            || FUNC_2(VAR_13, &(VAR_6->s3.client_random[0]),
                                VAR_3) <= 0
            || FUNC_2(VAR_13, &(VAR_6->s3.server_random[0]),
                                VAR_3) <= 0

            || FUNC_0(VAR_13, VAR_12, &VAR_16) <= 0
            || FUNC_1(VAR_13, VAR_6->ctx->md5, ((void*)0)) <= 0
            || FUNC_2(VAR_13, VAR_8, VAR_9) <= 0
            || FUNC_2(VAR_13, VAR_12, VAR_16) <= 0
            || FUNC_0(VAR_13, VAR_7, &VAR_16) <= 0) {
            FUNC_6(VAR_6, VAR_4,
                     VAR_5, VAR_0);
            VAR_15 = 0;
            break;
        }
        VAR_7 += VAR_16;
        VAR_17 += VAR_16;
    }
    FUNC_3(VAR_13);

    FUNC_5(VAR_12, sizeof(VAR_12));
    if (VAR_15)
        *VAR_10 = VAR_17;
    return VAR_15;
}
