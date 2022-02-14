
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {unsigned char* pms; size_t pmslen; } ;
struct TYPE_12__ {TYPE_1__ tmp; } ;
struct TYPE_13__ {TYPE_2__ s3; int early_secret; int hit; } ;
typedef TYPE_3__ SSL ;
typedef int EVP_PKEY_CTX ;
typedef int EVP_PKEY ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 (int *,unsigned char*,size_t*) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (unsigned char*,size_t) ;
 unsigned char* FUNC_8 (size_t) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_3__*,int ,int ,int ) ;
 int FUNC_11 (TYPE_3__*,unsigned char*,size_t,int ) ;
 int FUNC_12 (TYPE_3__*) ;
 scalar_t__ FUNC_13 (TYPE_3__*,unsigned char*,size_t) ;
 int FUNC_14 (TYPE_3__*,int ,int *,int *,int ,unsigned char*) ;

int FUNC_15(SSL *VAR_5, EVP_PKEY *VAR_6, EVP_PKEY *VAR_7, int VAR_8)
{
    int VAR_9 = 0;
    unsigned char *VAR_10 = ((void*)0);
    size_t VAR_11 = 0;
    EVP_PKEY_CTX *VAR_12;

    if (VAR_6 == ((void*)0) || VAR_7 == ((void*)0)) {
        FUNC_10(VAR_5, VAR_3, VAR_4,
                 VAR_0);
        return 0;
    }

    VAR_12 = FUNC_1(VAR_6, ((void*)0));

    if (FUNC_4(VAR_12) <= 0
        || FUNC_5(VAR_12, VAR_7) <= 0
        || FUNC_3(VAR_12, ((void*)0), &VAR_11) <= 0) {
        FUNC_10(VAR_5, VAR_3, VAR_4,
                 VAR_0);
        goto err;
    }


    if (FUNC_9(VAR_5) && FUNC_6(VAR_6) == VAR_2)
        FUNC_2(VAR_12, 1);


    VAR_10 = FUNC_8(VAR_11);
    if (VAR_10 == ((void*)0)) {
        FUNC_10(VAR_5, VAR_3, VAR_4,
                 VAR_1);
        goto err;
    }

    if (FUNC_3(VAR_12, VAR_10, &VAR_11) <= 0) {
        FUNC_10(VAR_5, VAR_3, VAR_4,
                 VAR_0);
        goto err;
    }

    if (VAR_8) {

        if (FUNC_9(VAR_5)) {




            if (!VAR_5->hit)
                VAR_9 = FUNC_14(VAR_5, FUNC_12(VAR_5), ((void*)0), ((void*)0),
                                           0,
                                           (unsigned char *)&VAR_5->early_secret);
            else
                VAR_9 = 1;

            VAR_9 = VAR_9 && FUNC_13(VAR_5, VAR_10, VAR_11);
        } else {
            VAR_9 = FUNC_11(VAR_5, VAR_10, VAR_11, 0);
        }
    } else {

        VAR_5->s3.tmp.pms = VAR_10;
        VAR_5->s3.tmp.pmslen = VAR_11;
        VAR_10 = ((void*)0);
        VAR_9 = 1;
    }

 err:
    FUNC_7(VAR_10, VAR_11);
    FUNC_0(VAR_12);
    return VAR_9;
}
