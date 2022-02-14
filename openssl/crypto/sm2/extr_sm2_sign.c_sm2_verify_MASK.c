
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EC_KEY ;
typedef int ECDSA_SIG ;
typedef int BIGNUM ;


 int * FUNC_0 (unsigned char const*,int,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (unsigned char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int ,int ) ;
 int * FUNC_6 (int **,unsigned char const**,int) ;
 int FUNC_7 (int *,unsigned char**) ;
 scalar_t__ FUNC_8 (unsigned char const*,unsigned char*,int) ;
 int FUNC_9 (int *,int *,int *) ;

int FUNC_10(const unsigned char *VAR_4, int VAR_5,
               const unsigned char *VAR_6, int VAR_7, EC_KEY *VAR_8)
{
    ECDSA_SIG *VAR_9 = ((void*)0);
    BIGNUM *VAR_10 = ((void*)0);
    const unsigned char *VAR_11 = VAR_6;
    unsigned char *VAR_12 = ((void*)0);
    int VAR_13 = -1;
    int VAR_14 = -1;

    VAR_9 = FUNC_3();
    if (VAR_9 == ((void*)0)) {
        FUNC_5(VAR_2, VAR_1);
        goto done;
    }
    if (FUNC_6(&VAR_9, &VAR_11, VAR_7) == ((void*)0)) {
        FUNC_5(VAR_2, VAR_3);
        goto done;
    }

    VAR_13 = FUNC_7(VAR_9, &VAR_12);
    if (VAR_13 != VAR_7 || FUNC_8(VAR_6, VAR_12, VAR_13) != 0) {
        FUNC_5(VAR_2, VAR_3);
        goto done;
    }

    VAR_10 = FUNC_0(VAR_4, VAR_5, ((void*)0));
    if (VAR_10 == ((void*)0)) {
        FUNC_5(VAR_2, VAR_0);
        goto done;
    }

    VAR_14 = FUNC_9(VAR_8, VAR_9, VAR_10);

 done:
    FUNC_4(VAR_12);
    FUNC_1(VAR_10);
    FUNC_2(VAR_9);
    return VAR_14;
}
