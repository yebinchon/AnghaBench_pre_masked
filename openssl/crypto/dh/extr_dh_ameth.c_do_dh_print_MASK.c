
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int seedlen; scalar_t__ length; int * counter; int * seed; int * j; int * q; int * g; int * p; int * pub_key; int * priv_key; } ;
typedef TYPE_1__ DH ;
typedef int BIO ;
typedef int BIGNUM ;


 int FUNC_0 (int *,char*,int *,int *,int) ;
 int FUNC_1 (int *,int,int) ;
 scalar_t__ FUNC_2 (int *,char*,...) ;
 scalar_t__ FUNC_3 (int *,char*) ;
 scalar_t__ FUNC_4 (int *,char*,int) ;
 int FUNC_5 (int *) ;
 int VAR_0 ;
 int FUNC_6 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_7(BIO *VAR_3, const DH *VAR_4, int VAR_5, int VAR_6)
{
    int VAR_7 = VAR_1;
    const char *VAR_8 = ((void*)0);
    BIGNUM *VAR_9, *VAR_10;

    if (VAR_6 == 2)
        VAR_9 = VAR_4->priv_key;
    else
        VAR_9 = ((void*)0);

    if (VAR_6 > 0)
        VAR_10 = VAR_4->pub_key;
    else
        VAR_10 = ((void*)0);

    if (VAR_4->p == ((void*)0) || (VAR_6 == 2 && VAR_9 == ((void*)0))
            || (VAR_6 > 0 && VAR_10 == ((void*)0))) {
        VAR_7 = VAR_2;
        goto err;
    }

    if (VAR_6 == 2)
        VAR_8 = "DH Private-Key";
    else if (VAR_6 == 1)
        VAR_8 = "DH Public-Key";
    else
        VAR_8 = "DH Parameters";

    FUNC_1(VAR_3, VAR_5, 128);
    if (FUNC_2(VAR_3, "%s: (%d bit)\n", VAR_8, FUNC_5(VAR_4->p)) <= 0)
        goto err;
    VAR_5 += 4;

    if (!FUNC_0(VAR_3, "private-key:", VAR_9, ((void*)0), VAR_5))
        goto err;
    if (!FUNC_0(VAR_3, "public-key:", VAR_10, ((void*)0), VAR_5))
        goto err;

    if (!FUNC_0(VAR_3, "prime:", VAR_4->p, ((void*)0), VAR_5))
        goto err;
    if (!FUNC_0(VAR_3, "generator:", VAR_4->g, ((void*)0), VAR_5))
        goto err;
    if (VAR_4->q && !FUNC_0(VAR_3, "subgroup order:", VAR_4->q, ((void*)0), VAR_5))
        goto err;
    if (VAR_4->j && !FUNC_0(VAR_3, "subgroup factor:", VAR_4->j, ((void*)0), VAR_5))
        goto err;
    if (VAR_4->seed) {
        int VAR_11;
        FUNC_1(VAR_3, VAR_5, 128);
        FUNC_3(VAR_3, "seed:");
        for (VAR_11 = 0; VAR_11 < VAR_4->seedlen; VAR_11++) {
            if ((VAR_11 % 15) == 0) {
                if (FUNC_3(VAR_3, "\n") <= 0
                    || !FUNC_1(VAR_3, VAR_5 + 4, 128))
                    goto err;
            }
            if (FUNC_2(VAR_3, "%02x%s", VAR_4->seed[VAR_11],
                           ((VAR_11 + 1) == VAR_4->seedlen) ? "" : ":") <= 0)
                goto err;
        }
        if (FUNC_4(VAR_3, "\n", 1) <= 0)
            return 0;
    }
    if (VAR_4->counter && !FUNC_0(VAR_3, "counter:", VAR_4->counter, ((void*)0), VAR_5))
        goto err;
    if (VAR_4->length != 0) {
        FUNC_1(VAR_3, VAR_5, 128);
        if (FUNC_2(VAR_3, "recommended-private-length: %d bits\n",
                       (int)VAR_4->length) <= 0)
            goto err;
    }

    return 1;

 err:
    FUNC_6(VAR_0, VAR_7);
    return 0;
}
