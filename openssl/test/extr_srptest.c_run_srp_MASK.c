
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int rand_tmp ;
struct TYPE_4__ {int * N; int * g; } ;
typedef TYPE_1__ SRP_gN ;
typedef int BIGNUM ;


 int * FUNC_0 (unsigned char*,int,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (unsigned char*,int) ;
 int * FUNC_4 (int *,int *,int *) ;
 int * FUNC_5 (int *,int *,int *,int *) ;
 int * FUNC_6 (int *,int *,int *,int *,int *,int *) ;
 int * FUNC_7 (int *,int *,int *,int *,int *) ;
 int * FUNC_8 (int *,int *,int *) ;
 int * FUNC_9 (int *,char const*,char const*) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (char const*,char const*,int **,int **,int *,int *) ;
 TYPE_1__* FUNC_13 (char*) ;
 int FUNC_14 (int *,int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (TYPE_1__ const*) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (char*,int *) ;

__attribute__((used)) static int FUNC_19(const char *VAR_1, const char *VAR_2,
                   const char *VAR_3)
{
    int VAR_4 = 0;
    BIGNUM *VAR_5 = ((void*)0);
    BIGNUM *VAR_6 = ((void*)0);
    BIGNUM *VAR_7 = ((void*)0);
    BIGNUM *VAR_8 = ((void*)0);
    BIGNUM *VAR_9 = ((void*)0);
    BIGNUM *VAR_10 = ((void*)0);
    BIGNUM *VAR_11 = ((void*)0);
    BIGNUM *VAR_12 = ((void*)0);
    BIGNUM *VAR_13 = ((void*)0);
    BIGNUM *VAR_14 = ((void*)0);
    unsigned char VAR_15[VAR_0];

    const SRP_gN *VAR_16;

    if (!FUNC_16(VAR_16 = FUNC_13("1024")))
        return 0;


    if (!FUNC_17(FUNC_12(VAR_1, VAR_3,
                                          &VAR_5, &VAR_6, VAR_16->N, VAR_16->g)))
        goto end;

    FUNC_18("N", VAR_16->N);
    FUNC_18("g", VAR_16->g);
    FUNC_18("Salt", VAR_5);
    FUNC_18("Verifier", VAR_6);


    FUNC_3(VAR_15, sizeof(VAR_15));
    VAR_8 = FUNC_0(VAR_15, sizeof(VAR_15), ((void*)0));
    if (!FUNC_15(VAR_8))
        goto end;
    FUNC_18("b", VAR_8);


    VAR_12 = FUNC_5(VAR_8, VAR_16->N, VAR_16->g, VAR_6);
    FUNC_18("B", VAR_12);

    if (!FUNC_17(FUNC_11(VAR_12, VAR_16->N)))
        goto end;


    FUNC_3(VAR_15, sizeof(VAR_15));
    VAR_7 = FUNC_0(VAR_15, sizeof(VAR_15), ((void*)0));
    if (!FUNC_15(VAR_7))
        goto end;
    FUNC_18("a", VAR_7);


    VAR_11 = FUNC_4(VAR_7, VAR_16->N, VAR_16->g);
    FUNC_18("A", VAR_11);

    if (!FUNC_17(FUNC_10(VAR_11, VAR_16->N)))
        goto end;


    VAR_9 = FUNC_8(VAR_11, VAR_12, VAR_16->N);


    VAR_10 = FUNC_9(VAR_5, VAR_1, VAR_2);
    VAR_13 = FUNC_6(VAR_16->N, VAR_12, VAR_16->g, VAR_10, VAR_7, VAR_9);
    FUNC_18("Client's key", VAR_13);


    VAR_14 = FUNC_7(VAR_11, VAR_6, VAR_9, VAR_8, VAR_16->N);
    FUNC_18("Server's key", VAR_14);

    if (!FUNC_14(VAR_13, VAR_14))
        goto end;

    VAR_4 = 1;

end:
    FUNC_1(VAR_13);
    FUNC_1(VAR_14);
    FUNC_1(VAR_10);
    FUNC_2(VAR_9);
    FUNC_2(VAR_11);
    FUNC_1(VAR_7);
    FUNC_2(VAR_12);
    FUNC_1(VAR_8);
    FUNC_2(VAR_5);
    FUNC_1(VAR_6);

    return VAR_4;
}
