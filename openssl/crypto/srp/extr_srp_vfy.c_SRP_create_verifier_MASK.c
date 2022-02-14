
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tmp2 ;
typedef int tmp ;
struct TYPE_3__ {char* id; int * g; int * N; } ;
typedef TYPE_1__ SRP_gN ;
typedef int BIGNUM ;


 int * FUNC_0 (unsigned char*,int,int *) ;
 scalar_t__ FUNC_1 (int *,unsigned char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (int) ;
 scalar_t__ FUNC_8 (unsigned char*,int) ;
 int VAR_1 ;
 int FUNC_9 (char const*,char const*,int **,int **,int const*,int const*) ;
 TYPE_1__* FUNC_10 (char const*) ;
 int FUNC_11 (unsigned char*,int,char const*) ;
 int FUNC_12 (char*,unsigned char*,int) ;

char *FUNC_13(const char *VAR_2, const char *VAR_3, char **VAR_4,
                          char **VAR_5, const char *VAR_6, const char *VAR_7)
{
    int VAR_8;
    char *VAR_9 = ((void*)0), *VAR_10 = ((void*)0);
    const BIGNUM *VAR_11 = ((void*)0), *VAR_12 = ((void*)0);
    BIGNUM *VAR_13 = ((void*)0), *VAR_14 = ((void*)0), *VAR_15 = ((void*)0), *VAR_16 = ((void*)0);
    unsigned char VAR_17[VAR_0];
    unsigned char VAR_18[VAR_0];
    char *VAR_19 = ((void*)0);
    int VAR_20 = 0;

    if ((VAR_2 == ((void*)0)) ||
        (VAR_3 == ((void*)0)) || (VAR_4 == ((void*)0)) || (VAR_5 == ((void*)0)))
        goto err;

    if (VAR_6) {
        if ((VAR_8 = FUNC_11(VAR_17, sizeof(VAR_17), VAR_6)) <= 0)
            goto err;
        VAR_13 = FUNC_0(VAR_17, VAR_8, ((void*)0));
        if (VAR_13 == ((void*)0))
            goto err;
        VAR_11 = VAR_13;
        if ((VAR_8 = FUNC_11(VAR_17, sizeof(VAR_17) ,VAR_7)) <= 0)
            goto err;
        VAR_14 = FUNC_0(VAR_17, VAR_8, ((void*)0));
        if (VAR_14 == ((void*)0))
            goto err;
        VAR_12 = VAR_14;
        VAR_19 = "*";
    } else {
        SRP_gN *VAR_21 = FUNC_10(VAR_7);
        if (VAR_21 == ((void*)0))
            goto err;
        VAR_11 = VAR_21->N;
        VAR_12 = VAR_21->g;
        VAR_19 = VAR_21->id;
    }

    if (*VAR_4 == ((void*)0)) {
        if (FUNC_8(VAR_18, VAR_1) <= 0)
            goto err;

        VAR_15 = FUNC_0(VAR_18, VAR_1, ((void*)0));
    } else {
        if ((VAR_8 = FUNC_11(VAR_18, sizeof(VAR_18), *VAR_4)) <= 0)
            goto err;
        VAR_15 = FUNC_0(VAR_18, VAR_8, ((void*)0));
    }
    if (VAR_15 == ((void*)0))
        goto err;

    if (!FUNC_9(VAR_2, VAR_3, &VAR_15, &VAR_16, VAR_11, VAR_12))
        goto err;

    if (FUNC_1(VAR_16, VAR_17) < 0)
        goto err;
    VAR_20 = FUNC_4(VAR_16) * 2;
    if (((VAR_10 = FUNC_7(VAR_20)) == ((void*)0)))
        goto err;
    if (!FUNC_12(VAR_10, VAR_17, FUNC_4(VAR_16)))
        goto err;

    if (*VAR_4 == ((void*)0)) {
        char *VAR_22;

        if ((VAR_22 = FUNC_7(VAR_1 * 2)) == ((void*)0)) {
            goto err;
        }
        if (!FUNC_12(VAR_22, VAR_18, VAR_1)) {
            FUNC_6(VAR_22);
            goto err;
        }
        *VAR_4 = VAR_22;
    }

    *VAR_5 = VAR_10;
    VAR_10 = ((void*)0);
    VAR_9 = VAR_19;

 err:
    FUNC_3(VAR_13);
    FUNC_3(VAR_14);
    FUNC_5(VAR_10, VAR_20);
    FUNC_2(VAR_15);
    FUNC_2(VAR_16);
    return VAR_9;
}
