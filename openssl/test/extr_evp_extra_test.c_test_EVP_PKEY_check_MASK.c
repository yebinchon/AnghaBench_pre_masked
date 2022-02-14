
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_1__ ;


struct TYPE_28__ {unsigned char* kder; size_t size; int evptype; int check; int pub_check; int param_check; int type; } ;
struct TYPE_27__ {struct TYPE_27__* pkey; } ;
typedef TYPE_1__ EVP_PKEY_CTX ;
typedef TYPE_1__ EVP_PKEY ;
typedef TYPE_1__ EC_KEY ;
typedef TYPE_1__ BIO ;
typedef TYPE_5__ APK_DATA ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (unsigned char const*,size_t) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (TYPE_1__*,int *) ;
 TYPE_1__* FUNC_4 (int,int *) ;
 int FUNC_5 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 TYPE_1__* FUNC_9 () ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (int ,int) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (unsigned char const*,unsigned char const*) ;
 int FUNC_16 (int ) ;
 TYPE_1__* FUNC_17 (int *,unsigned char const**,size_t) ;
 TYPE_1__* FUNC_18 (int *,unsigned char const**,size_t) ;
 TYPE_1__* FUNC_19 (TYPE_1__*,int *) ;
 TYPE_5__* VAR_0 ;

__attribute__((used)) static int FUNC_20(int VAR_1)
{
    int VAR_2 = 0;
    const unsigned char *VAR_3;
    EVP_PKEY *VAR_4 = ((void*)0);

    EC_KEY *VAR_5 = ((void*)0);

    EVP_PKEY_CTX *VAR_6 = ((void*)0);
    EVP_PKEY_CTX *VAR_7 = ((void*)0);
    const APK_DATA *VAR_8 = &VAR_0[VAR_1];
    const unsigned char *VAR_9 = VAR_8->kder;
    size_t VAR_10 = VAR_8->size;
    int VAR_11 = VAR_8->evptype;
    int VAR_12 = VAR_8->check;
    int VAR_13 = VAR_8->pub_check;
    int VAR_14 = VAR_8->param_check;
    int VAR_15 = VAR_8->type;
    BIO *VAR_16 = ((void*)0);

    VAR_3 = VAR_9;

    switch (VAR_15) {
    case 0:
        if (!FUNC_14(VAR_4 = FUNC_17(((void*)0), &VAR_3, VAR_10))
            || !FUNC_15(VAR_3, VAR_9 + VAR_10)
            || !FUNC_13(FUNC_8(VAR_4), VAR_11))
            goto done;
        break;

    case 1:
        if (!FUNC_14(VAR_16 = FUNC_1(VAR_9, VAR_10))
            || !FUNC_14(VAR_5 = FUNC_19(VAR_16, ((void*)0)))
            || !FUNC_14(VAR_4 = FUNC_9())
            || !FUNC_16(FUNC_5(VAR_4, VAR_5)))
            goto done;
        break;
    case 2:
        if (!FUNC_14(VAR_5 = FUNC_18(((void*)0), &VAR_3, VAR_10))
            || !FUNC_15(VAR_3, VAR_9 + VAR_10)
            || !FUNC_14(VAR_4 = FUNC_9())
            || !FUNC_16(FUNC_5(VAR_4, VAR_5)))
            goto done;
        break;

    default:
        return 0;
    }

    if (!FUNC_14(VAR_6 = FUNC_3(VAR_4, ((void*)0))))
        goto done;

    if (!FUNC_13(FUNC_6(VAR_6), VAR_12))
        goto done;

    if (!FUNC_13(FUNC_11(VAR_6), VAR_13))
        goto done;

    if (!FUNC_13(FUNC_10(VAR_6), VAR_14))
        goto done;

    VAR_7 = FUNC_4(0xdefaced, ((void*)0));

    FUNC_12(VAR_4);
    VAR_7->pkey = VAR_4;

    if (!FUNC_13(FUNC_6(VAR_7), 0xbeef))
        goto done;

    if (!FUNC_13(FUNC_11(VAR_7), 0xbeef))
        goto done;

    if (!FUNC_13(FUNC_10(VAR_7), 0xbeef))
        goto done;

    VAR_2 = 1;

 done:
    FUNC_2(VAR_6);
    FUNC_2(VAR_7);
    FUNC_7(VAR_4);
    FUNC_0(VAR_16);
    return VAR_2;
}
