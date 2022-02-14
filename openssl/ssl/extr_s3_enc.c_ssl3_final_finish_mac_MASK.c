
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int handshake_dgst; } ;
struct TYPE_7__ {int session; TYPE_1__ s3; } ;
typedef TYPE_2__ SSL ;
typedef int OSSL_PARAM ;
typedef int EVP_MD_CTX ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,unsigned char*,int *) ;
 scalar_t__ FUNC_1 (int *,char const*,size_t) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 () ;
 scalar_t__ FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_9 (TYPE_2__*,int ) ;
 int FUNC_10 (int ,int *) ;

size_t FUNC_11(SSL *VAR_6, const char *VAR_7, size_t VAR_8,
                             unsigned char *VAR_9)
{
    int VAR_10;
    EVP_MD_CTX *VAR_11 = ((void*)0);

    if (!FUNC_9(VAR_6, 0)) {

        return 0;
    }

    if (FUNC_7(VAR_6->s3.handshake_dgst) != VAR_2) {
        FUNC_8(VAR_6, VAR_3, VAR_4,
                 VAR_5);
        return 0;
    }

    VAR_11 = FUNC_4();
    if (VAR_11 == ((void*)0)) {
        FUNC_8(VAR_6, VAR_3, VAR_4,
                 VAR_1);
        return 0;
    }
    if (!FUNC_2(VAR_11, VAR_6->s3.handshake_dgst)) {
        FUNC_8(VAR_6, VAR_3, VAR_4,
                 VAR_0);
        VAR_10 = 0;
        goto err;
    }

    VAR_10 = FUNC_6(VAR_11);
    if (VAR_10 < 0) {
        FUNC_8(VAR_6, VAR_3, VAR_4,
                 VAR_0);
        VAR_10 = 0;
        goto err;
    }

    if (VAR_7 != ((void*)0)) {
        OSSL_PARAM VAR_12[3];

        FUNC_10(VAR_6->session, VAR_12);

        if (FUNC_1(VAR_11, VAR_7, VAR_8) <= 0
            || FUNC_5(VAR_11, VAR_12) <= 0
            || FUNC_0(VAR_11, VAR_9, ((void*)0)) <= 0) {
                FUNC_8(VAR_6, VAR_3, VAR_4,
                         VAR_0);
                VAR_10 = 0;
        }
    }

 err:
    FUNC_3(VAR_11);

    return VAR_10;
}
