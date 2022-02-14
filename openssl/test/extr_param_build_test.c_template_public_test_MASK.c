
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
typedef scalar_t__ int32_t ;
struct TYPE_23__ {char const* key; char const* data; int data_type; int data_size; } ;
typedef int OSSL_PARAM_BLD ;
typedef TYPE_1__ OSSL_PARAM ;
typedef TYPE_1__ BIGNUM ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 () ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (TYPE_1__*,TYPE_1__**) ;
 int FUNC_6 (TYPE_1__*,double*) ;
 int FUNC_7 (TYPE_1__*,int*) ;
 int FUNC_8 (TYPE_1__*,scalar_t__*) ;
 int FUNC_9 (TYPE_1__*,scalar_t__*) ;
 int FUNC_10 (TYPE_1__*,long*) ;
 int FUNC_11 (TYPE_1__*,char const**) ;
 int FUNC_12 (TYPE_1__*,char**,int ) ;
 TYPE_1__* FUNC_13 (TYPE_1__*,char*) ;
 int FUNC_14 (double,double) ;
 int FUNC_15 (int,int) ;
 int FUNC_16 (long,int) ;
 int FUNC_17 (TYPE_1__*) ;
 int FUNC_18 (int ,int) ;
 int FUNC_19 (char const*,char*) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ,int ) ;
 int FUNC_22 (TYPE_1__*) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int *,char*,TYPE_1__*) ;
 int FUNC_25 (int *,char*,double) ;
 int FUNC_26 (int *,char*,int) ;
 int FUNC_27 (int *,char*,int) ;
 int FUNC_28 (int *,char*,int) ;
 int FUNC_29 (int *,char*,int) ;
 int FUNC_30 (int *,char*,char*,int ) ;
 int FUNC_31 (int *,char*,char*,int) ;
 TYPE_1__* FUNC_32 (int *) ;

__attribute__((used)) static int FUNC_33(void)
{
    OSSL_PARAM_BLD VAR_3;
    OSSL_PARAM *VAR_4 = ((void*)0), *VAR_5;
    BIGNUM *VAR_6 = ((void*)0), *VAR_7 = ((void*)0);
    int VAR_8;
    long int VAR_9;
    int32_t VAR_10;
    int64_t VAR_11;
    double VAR_12;
    char *VAR_13 = ((void*)0);
    const char *VAR_14;
    int VAR_15 = 0;

    FUNC_23(&VAR_3);
    if (!FUNC_20(FUNC_26(&VAR_3, "i", -6))
        || !FUNC_20(FUNC_29(&VAR_3, "l", 42))
        || !FUNC_20(FUNC_27(&VAR_3, "i32", 1532))
        || !FUNC_20(FUNC_28(&VAR_3, "i64", -9999999))
        || !FUNC_20(FUNC_25(&VAR_3, "d", 1.61803398875))
        || !FUNC_17(VAR_6 = FUNC_2())
        || !FUNC_20(FUNC_3(VAR_6, 1729))
        || !FUNC_20(FUNC_24(&VAR_3, "bignumber", VAR_6))
        || !FUNC_20(FUNC_31(&VAR_3, "utf8_s", "foo",
                                                      sizeof("foo")))
        || !FUNC_20(FUNC_30(&VAR_3, "utf8_p", "bar-boom",
                                                   0))
        || !FUNC_17(VAR_4 = FUNC_32(&VAR_3))

        || !FUNC_17(VAR_5 = FUNC_13(VAR_4, "i"))
        || !FUNC_20(FUNC_7(VAR_5, &VAR_8))
        || !FUNC_19(VAR_5->key, "i")
        || !FUNC_21(VAR_5->data_type, VAR_0)
        || !FUNC_18(VAR_5->data_size, sizeof(int))
        || !FUNC_15(VAR_8, -6)

        || !FUNC_17(VAR_5 = FUNC_13(VAR_4, "i32"))
        || !FUNC_20(FUNC_8(VAR_5, &VAR_10))
        || !FUNC_19(VAR_5->key, "i32")
        || !FUNC_21(VAR_5->data_type, VAR_0)
        || !FUNC_18(VAR_5->data_size, sizeof(int32_t))
        || !FUNC_15((int)VAR_10, 1532)

        || !FUNC_17(VAR_5 = FUNC_13(VAR_4, "i64"))
        || !FUNC_19(VAR_5->key, "i64")
        || !FUNC_21(VAR_5->data_type, VAR_0)
        || !FUNC_18(VAR_5->data_size, sizeof(int64_t))
        || !FUNC_20(FUNC_9(VAR_5, &VAR_11))
        || !FUNC_16((long)VAR_11, -9999999)

        || !FUNC_17(VAR_5 = FUNC_13(VAR_4, "l"))
        || !FUNC_19(VAR_5->key, "l")
        || !FUNC_21(VAR_5->data_type, VAR_0)
        || !FUNC_18(VAR_5->data_size, sizeof(long int))
        || !FUNC_20(FUNC_10(VAR_5, &VAR_9))
        || !FUNC_16(VAR_9, 42)

        || !FUNC_17(VAR_5 = FUNC_13(VAR_4, "d"))
        || !FUNC_20(FUNC_6(VAR_5, &VAR_12))
        || !FUNC_19(VAR_5->key, "d")
        || !FUNC_21(VAR_5->data_type, VAR_1)
        || !FUNC_18(VAR_5->data_size, sizeof(double))
        || !FUNC_14(VAR_12, 1.61803398875)

        || !FUNC_17(VAR_5 = FUNC_13(VAR_4, "utf8_s"))
        || !FUNC_19(VAR_5->data, "foo")
        || !FUNC_20(FUNC_12(VAR_5, &VAR_13, 0))
        || !FUNC_19(VAR_13, "foo")

        || !FUNC_17(VAR_5 = FUNC_13(VAR_4, "utf8_p"))
        || !FUNC_20(FUNC_11(VAR_5, &VAR_14))
        || !FUNC_19(VAR_14, "bar-boom")

        || !FUNC_17(VAR_5 = FUNC_13(VAR_4, "bignumber"))
        || !FUNC_19(VAR_5->key, "bignumber")
        || !FUNC_21(VAR_5->data_type, VAR_2)
        || !FUNC_20(FUNC_5(VAR_5, &VAR_7))
        || !FUNC_15(FUNC_0(VAR_7, VAR_6), 0))
        goto err;
    VAR_15 = 1;
err:
    FUNC_22(VAR_4);
    FUNC_4(VAR_13);
    FUNC_1(VAR_6);
    FUNC_1(VAR_7);
    return VAR_15;
}
