
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
typedef int int64_t ;
typedef int int32_t ;
typedef int data2 ;
typedef int data1 ;
struct TYPE_21__ {unsigned int data_type; size_t data_size; void* data; int key; } ;
typedef int OSSL_PARAM_BLD ;
typedef TYPE_1__ OSSL_PARAM ;
typedef TYPE_1__ BIGNUM ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 () ;
 int FUNC_3 (TYPE_1__*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (TYPE_1__*,TYPE_1__**) ;
 int FUNC_5 (TYPE_1__*,size_t*) ;
 int FUNC_6 (TYPE_1__*,unsigned int*) ;
 int FUNC_7 (TYPE_1__*,scalar_t__*) ;
 int FUNC_8 (TYPE_1__*,scalar_t__*) ;
 int FUNC_9 (TYPE_1__*,unsigned long*) ;
 TYPE_1__* FUNC_10 (TYPE_1__*,char*) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (void*,size_t,...) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (size_t,int) ;
 int FUNC_15 (int ,char*) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (unsigned int,int) ;
 int FUNC_18 (unsigned long,int) ;
 int FUNC_19 (TYPE_1__*) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *,char*,TYPE_1__*) ;
 int FUNC_22 (int *,char*,unsigned char*,int) ;
 int FUNC_23 (int *,char*,int*,int) ;
 int FUNC_24 (int *,char*,int) ;
 int FUNC_25 (int *,char*,int) ;
 int FUNC_26 (int *,char*,int) ;
 int FUNC_27 (int *,char*,int) ;
 int FUNC_28 (int *,char*,int) ;
 TYPE_1__* FUNC_29 (int *) ;

__attribute__((used)) static int FUNC_30(void)
{
    static int VAR_3[] = { 2, 3, 5, 7, 11, 15, 17 };
    static unsigned char VAR_4[] = { 2, 4, 6, 8, 10 };
    OSSL_PARAM_BLD VAR_5;
    OSSL_PARAM *VAR_6 = ((void*)0), *VAR_7;
    unsigned int VAR_8;
    unsigned long int VAR_9;
    uint32_t VAR_10;
    uint64_t VAR_11;
    size_t VAR_12;
    BIGNUM *VAR_13 = ((void*)0), *VAR_14 = ((void*)0);
    int VAR_15 = 0;

    FUNC_20(&VAR_5);
    if (!FUNC_16(FUNC_25(&VAR_5, "i", 6))
        || !FUNC_16(FUNC_28(&VAR_5, "l", 42))
        || !FUNC_16(FUNC_26(&VAR_5, "i32", 1532))
        || !FUNC_16(FUNC_27(&VAR_5, "i64", 9999999))
        || !FUNC_16(FUNC_24(&VAR_5, "st", 65537))
        || !FUNC_13(VAR_13 = FUNC_2())
        || !FUNC_16(FUNC_3(VAR_13, 1729))
        || !FUNC_16(FUNC_21(&VAR_5, "bignumber", VAR_13))
        || !FUNC_16(FUNC_23(&VAR_5, "oct_s", VAR_3,
                                                       sizeof(VAR_3)))
        || !FUNC_16(FUNC_22(&VAR_5, "oct_p", VAR_4,
                                                    sizeof(VAR_4)))
        || !FUNC_13(VAR_6 = FUNC_29(&VAR_5))

        || !FUNC_13(VAR_7 = FUNC_10(VAR_6, "i"))
        || !FUNC_16(FUNC_6(VAR_7, &VAR_8))
        || !FUNC_15(VAR_7->key, "i")
        || !FUNC_17(VAR_7->data_type, VAR_2)
        || !FUNC_14(VAR_7->data_size, sizeof(int))
        || !FUNC_17(VAR_8, 6)

        || !FUNC_13(VAR_7 = FUNC_10(VAR_6, "i32"))
        || !FUNC_16(FUNC_7(VAR_7, &VAR_10))
        || !FUNC_15(VAR_7->key, "i32")
        || !FUNC_17(VAR_7->data_type, VAR_2)
        || !FUNC_14(VAR_7->data_size, sizeof(int32_t))
        || !FUNC_17((unsigned int)VAR_10, 1532)

        || !FUNC_13(VAR_7 = FUNC_10(VAR_6, "i64"))
        || !FUNC_15(VAR_7->key, "i64")
        || !FUNC_17(VAR_7->data_type, VAR_2)
        || !FUNC_14(VAR_7->data_size, sizeof(int64_t))
        || !FUNC_16(FUNC_8(VAR_7, &VAR_11))
        || !FUNC_18((unsigned long)VAR_11, 9999999)

        || !FUNC_13(VAR_7 = FUNC_10(VAR_6, "l"))
        || !FUNC_15(VAR_7->key, "l")
        || !FUNC_17(VAR_7->data_type, VAR_2)
        || !FUNC_14(VAR_7->data_size, sizeof(unsigned long int))
        || !FUNC_16(FUNC_9(VAR_7, &VAR_9))
        || !FUNC_18(VAR_9, 42)

        || !FUNC_13(VAR_7 = FUNC_10(VAR_6, "st"))
        || !FUNC_15(VAR_7->key, "st")
        || !FUNC_17(VAR_7->data_type, VAR_2)
        || !FUNC_14(VAR_7->data_size, sizeof(size_t))
        || !FUNC_16(FUNC_5(VAR_7, &VAR_12))
        || !FUNC_14(VAR_12, 65537)

        || !FUNC_13(VAR_7 = FUNC_10(VAR_6, "oct_s"))
        || !FUNC_15(VAR_7->key, "oct_s")
        || !FUNC_17(VAR_7->data_type, VAR_1)
        || !FUNC_12(VAR_7->data, VAR_7->data_size, VAR_3, sizeof(VAR_3))

        || !FUNC_13(VAR_7 = FUNC_10(VAR_6, "oct_p"))
        || !FUNC_15(VAR_7->key, "oct_p")
        || !FUNC_17(VAR_7->data_type, VAR_0)
        || !FUNC_12(*(void **)VAR_7->data, VAR_7->data_size, VAR_4, sizeof(VAR_4))

        || !FUNC_13(VAR_7 = FUNC_10(VAR_6, "bignumber"))
        || !FUNC_15(VAR_7->key, "bignumber")
        || !FUNC_17(VAR_7->data_type, VAR_2)
        || !FUNC_16(FUNC_4(VAR_7, &VAR_14))
        || !FUNC_11(FUNC_0(VAR_14, VAR_13), 0))
        goto err;
    VAR_15 = 1;
err:
    FUNC_19(VAR_6);
    FUNC_1(VAR_13);
    FUNC_1(VAR_14);
    return VAR_15;
}
