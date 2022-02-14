
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int WPACKET ;
struct TYPE_6__ {int * peer_tmp; } ;
struct TYPE_7__ {TYPE_1__ s3; } ;
typedef TYPE_2__ SSL ;
typedef int EVP_PKEY ;
typedef int DH ;
typedef int BIGNUM ;


 int FUNC_0 (int const*,unsigned char*) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int *,int const**,int *) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_6 (int *,int ,unsigned char**) ;
 scalar_t__ FUNC_7 (TYPE_2__*,int *,int *,int ) ;
 int * FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(SSL *VAR_3, WPACKET *VAR_4)
{

    DH *VAR_5 = ((void*)0);
    const BIGNUM *VAR_6;
    EVP_PKEY *VAR_7 = ((void*)0), *VAR_8 = ((void*)0);
    unsigned char *VAR_9 = ((void*)0);

    VAR_8 = VAR_3->s3.peer_tmp;
    if (VAR_8 == ((void*)0)) {
        FUNC_5(VAR_3, VAR_1, VAR_2,
                 VAR_0);
        goto err;
    }

    VAR_7 = FUNC_8(VAR_8);
    if (VAR_7 == ((void*)0)) {
        FUNC_5(VAR_3, VAR_1, VAR_2,
                 VAR_0);
        goto err;
    }

    VAR_5 = FUNC_4(VAR_7);

    if (VAR_5 == ((void*)0)) {
        FUNC_5(VAR_3, VAR_1, VAR_2,
                 VAR_0);
        goto err;
    }

    if (FUNC_7(VAR_3, VAR_7, VAR_8, 0) == 0) {

        goto err;
    }


    FUNC_2(VAR_5, &VAR_6, ((void*)0));
    if (!FUNC_6(VAR_4, FUNC_1(VAR_6),
                                        &VAR_9)) {
        FUNC_5(VAR_3, VAR_1, VAR_2,
                 VAR_0);
        goto err;
    }

    FUNC_0(VAR_6, VAR_9);
    FUNC_3(VAR_7);

    return 1;
 err:
    FUNC_3(VAR_7);
    return 0;





}
