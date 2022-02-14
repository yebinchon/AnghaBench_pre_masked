
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * pkey; } ;
struct TYPE_8__ {TYPE_1__ tmp; } ;
struct TYPE_9__ {TYPE_2__ s3; } ;
typedef TYPE_3__ SSL ;
typedef int PACKET ;
typedef int EVP_PKEY ;
typedef int DH ;
typedef int BIGNUM ;


 int * FUNC_0 (unsigned char const*,unsigned int,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int * FUNC_6 () ;
 int FUNC_7 (int *,unsigned char const**,unsigned int) ;
 int FUNC_8 (int *,unsigned int*) ;
 long FUNC_9 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_10 (TYPE_3__*,int ,int ,int ) ;
 scalar_t__ FUNC_11 (TYPE_3__*,int *,int *,int) ;

__attribute__((used)) static int FUNC_12(SSL *VAR_7, PACKET *VAR_8)
{

    EVP_PKEY *VAR_9 = ((void*)0);
    DH *VAR_10;
    unsigned int VAR_11;
    BIGNUM *VAR_12;
    const unsigned char *VAR_13;
    EVP_PKEY *VAR_14 = ((void*)0);
    int VAR_15 = 0;

    if (!FUNC_8(VAR_8, &VAR_11) || FUNC_9(VAR_8) != VAR_11) {
        FUNC_10(VAR_7, VAR_1, VAR_3,
               VAR_5);
        goto err;
    }
    VAR_9 = VAR_7->s3.tmp.pkey;
    if (VAR_9 == ((void*)0)) {
        FUNC_10(VAR_7, VAR_2, VAR_3,
                 VAR_6);
        goto err;
    }

    if (FUNC_9(VAR_8) == 0L) {
        FUNC_10(VAR_7, VAR_1, VAR_3,
                 VAR_6);
        goto err;
    }
    if (!FUNC_7(VAR_8, &VAR_13, VAR_11)) {

        FUNC_10(VAR_7, VAR_2, VAR_3,
                 VAR_0);
        goto err;
    }
    VAR_14 = FUNC_6();
    if (VAR_14 == ((void*)0) || FUNC_3(VAR_14, VAR_9) == 0) {
        FUNC_10(VAR_7, VAR_2, VAR_3,
                 VAR_4);
        goto err;
    }

    VAR_10 = FUNC_5(VAR_14);
    VAR_12 = FUNC_0(VAR_13, VAR_11, ((void*)0));
    if (VAR_12 == ((void*)0) || VAR_10 == ((void*)0) || !FUNC_2(VAR_10, VAR_12, ((void*)0))) {
        FUNC_10(VAR_7, VAR_2, VAR_3,
                 VAR_0);
        FUNC_1(VAR_12);
        goto err;
    }

    if (FUNC_11(VAR_7, VAR_9, VAR_14, 1) == 0) {

        goto err;
    }

    VAR_15 = 1;
    FUNC_4(VAR_7->s3.tmp.pkey);
    VAR_7->s3.tmp.pkey = ((void*)0);
 err:
    FUNC_4(VAR_14);
    return VAR_15;






}
