
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_1__ ;


typedef int secure ;
typedef int data ;
struct TYPE_19__ {char* key; unsigned int data_type; char* data; int data_size; } ;
typedef int OSSL_PARAM_BLD ;
typedef TYPE_1__ OSSL_PARAM ;
typedef int BN_ULONG ;
typedef TYPE_1__ BIGNUM ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 () ;
 TYPE_1__* FUNC_3 () ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_7 (TYPE_1__*,TYPE_1__**) ;
 int FUNC_8 (TYPE_1__*,unsigned int*) ;
 int FUNC_9 (TYPE_1__*,char**,int ) ;
 TYPE_1__* FUNC_10 (TYPE_1__*,char*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (int ,int) ;
 int FUNC_13 (int ,int) ;
 int FUNC_14 (char*,char*) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (unsigned int,int) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *,char*,TYPE_1__*) ;
 int FUNC_19 (int *,char*,int) ;
 int FUNC_20 (int *,char*,char*,int ) ;
 TYPE_1__* FUNC_21 (int *,TYPE_1__*,int ,unsigned char*,int,unsigned char*,int) ;

__attribute__((used)) static int FUNC_22(int VAR_1)
{
    unsigned char VAR_2[1000], VAR_3[500];
    OSSL_PARAM_BLD VAR_4;
    OSSL_PARAM VAR_5[20], *VAR_6;
    BIGNUM *VAR_7 = ((void*)0), *VAR_8 = ((void*)0);
    unsigned int VAR_9;
    char *VAR_10 = ((void*)0);
    int VAR_11 = 0;

    FUNC_17(&VAR_4);
    if (!FUNC_15(FUNC_19(&VAR_4, "i", 6))
        || !FUNC_11(VAR_7 = (VAR_1 & 1) == 0 ? FUNC_2() : FUNC_3())
        || !FUNC_15(FUNC_4(VAR_7, 1337))
        || !FUNC_15(FUNC_18(&VAR_4, "bn", VAR_7))
        || !FUNC_15(FUNC_20(&VAR_4, "utf8_s", "bar",
                                                      0))
        || !FUNC_11(FUNC_21(&VAR_4, VAR_5,
                                                FUNC_6(VAR_5),
                                                VAR_2, sizeof(VAR_2),
                                                VAR_3, sizeof(VAR_3)))

        || !FUNC_11(VAR_6 = FUNC_10(VAR_5, "i"))
        || !FUNC_15(FUNC_8(VAR_6, &VAR_9))
        || !FUNC_14(VAR_6->key, "i")
        || !FUNC_16(VAR_6->data_type, VAR_0)
        || !FUNC_12(VAR_6->data_size, sizeof(int))
        || !FUNC_16(VAR_9, 6)

        || !FUNC_11(VAR_6 = FUNC_10(VAR_5, "bn"))
        || !FUNC_15(FUNC_7(VAR_6, &VAR_8))
        || !FUNC_14(VAR_6->key, "bn")
        || !FUNC_16(VAR_6->data_type, VAR_0)
        || !FUNC_13(VAR_6->data_size, sizeof(BN_ULONG))
        || !FUNC_16((unsigned int)FUNC_1(VAR_8), 1337)

        || !FUNC_11(VAR_6 = FUNC_10(VAR_5, "utf8_s"))
        || !FUNC_14(VAR_6->data, "bar")
        || !FUNC_15(FUNC_9(VAR_6, &VAR_10, 0))
        || !FUNC_14(VAR_10, "bar"))
        goto err;
    VAR_11 = 1;
err:
    FUNC_5(VAR_10);
    FUNC_0(VAR_7);
    FUNC_0(VAR_8);
    return VAR_11;
}
