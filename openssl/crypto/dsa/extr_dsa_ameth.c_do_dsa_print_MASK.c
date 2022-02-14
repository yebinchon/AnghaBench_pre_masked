
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int const* g; int const* q; int const* p; int * pub_key; int * priv_key; } ;
typedef TYPE_1__ DSA ;
typedef int BIO ;
typedef int BIGNUM ;


 int FUNC_0 (int *,char*,int const*,int *,int) ;
 int FUNC_1 (int *,int,int) ;
 scalar_t__ FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int const*) ;

__attribute__((used)) static int FUNC_4(BIO *VAR_0, const DSA *VAR_1, int VAR_2, int VAR_3)
{
    int VAR_4 = 0;
    const char *VAR_5 = ((void*)0);
    const BIGNUM *VAR_6, *VAR_7;
    int VAR_8 = 0;

    if (VAR_1->p != ((void*)0))
        VAR_8 = FUNC_3(VAR_1->p);

    if (VAR_3 == 2)
        VAR_6 = VAR_1->priv_key;
    else
        VAR_6 = ((void*)0);

    if (VAR_3 > 0)
        VAR_7 = VAR_1->pub_key;
    else
        VAR_7 = ((void*)0);

    if (VAR_3 == 2)
        VAR_5 = "Private-Key";
    else if (VAR_3 == 1)
        VAR_5 = "Public-Key";
    else
        VAR_5 = "DSA-Parameters";

    if (VAR_6) {
        if (!FUNC_1(VAR_0, VAR_2, 128))
            goto err;
        if (FUNC_2(VAR_0, "%s: (%d bit)\n", VAR_5, FUNC_3(VAR_1->p))
            <= 0)
            goto err;
    } else {
        if (FUNC_2(VAR_0, "Public-Key: (%d bit)\n", VAR_8) <= 0)
            goto err;
    }

    if (!FUNC_0(VAR_0, "priv:", VAR_6, ((void*)0), VAR_2))
        goto err;
    if (!FUNC_0(VAR_0, "pub: ", VAR_7, ((void*)0), VAR_2))
        goto err;
    if (!FUNC_0(VAR_0, "P:   ", VAR_1->p, ((void*)0), VAR_2))
        goto err;
    if (!FUNC_0(VAR_0, "Q:   ", VAR_1->q, ((void*)0), VAR_2))
        goto err;
    if (!FUNC_0(VAR_0, "G:   ", VAR_1->g, ((void*)0), VAR_2))
        goto err;
    VAR_4 = 1;
 err:
    return VAR_4;
}
