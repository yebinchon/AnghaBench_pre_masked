
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_45__ TYPE_1__ ;


typedef int ul ;
typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
typedef int ubuf ;
typedef scalar_t__ int64_t ;
typedef int int32_t ;
typedef int buf2 ;
typedef int buf ;
typedef int bn_val ;
struct TYPE_45__ {size_t data_size; int return_size; } ;
typedef TYPE_1__ OSSL_PARAM ;
typedef TYPE_1__ BIGNUM ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (unsigned char const*,int,int *) ;
 int FUNC_2 (void*) ;
 size_t FUNC_3 (char const**) ;
 TYPE_1__ FUNC_4 (char*,unsigned char*,int) ;
 TYPE_1__ FUNC_5 (char*,double*) ;
 TYPE_1__ FUNC_6 () ;
 TYPE_1__ FUNC_7 (char*,int*) ;
 TYPE_1__ FUNC_8 (char*,int *) ;
 TYPE_1__ FUNC_9 (char*,scalar_t__*) ;
 TYPE_1__ FUNC_10 (char*,long*) ;
 TYPE_1__ FUNC_11 (char*,void**,int ) ;
 TYPE_1__ FUNC_12 (char*,char*,int) ;
 TYPE_1__ FUNC_13 (char*,size_t*) ;
 TYPE_1__ FUNC_14 (char*,unsigned int*) ;
 TYPE_1__ FUNC_15 (char*,int *) ;
 TYPE_1__ FUNC_16 (char*,scalar_t__*) ;
 TYPE_1__ FUNC_17 (char*,unsigned long*) ;
 TYPE_1__ FUNC_18 (char*,char**,int ) ;
 TYPE_1__ FUNC_19 (char*,char*,int) ;
 int FUNC_20 (TYPE_1__*,TYPE_1__**) ;
 int FUNC_21 (TYPE_1__*,double*) ;
 int FUNC_22 (TYPE_1__*,scalar_t__*) ;
 int FUNC_23 (TYPE_1__*,void const**,size_t*) ;
 int FUNC_24 (TYPE_1__*,void**,int,size_t*) ;
 int FUNC_25 (TYPE_1__*,scalar_t__*) ;
 int FUNC_26 (TYPE_1__*,char const**) ;
 int FUNC_27 (TYPE_1__*,char**,int) ;
 TYPE_1__* FUNC_28 (TYPE_1__*,char const*) ;
 int FUNC_29 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_30 (TYPE_1__*,double) ;
 int FUNC_31 (TYPE_1__*,int ) ;
 int FUNC_32 (TYPE_1__*,unsigned long*,int) ;
 int FUNC_33 (TYPE_1__*,char*,int) ;
 int FUNC_34 (TYPE_1__*,int ) ;
 int FUNC_35 (TYPE_1__*,char*) ;
 int FUNC_36 (TYPE_1__*,char*) ;
 int FUNC_37 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_38 (double,double) ;
 int FUNC_39 (void*,int,char*,int) ;
 int FUNC_40 (char*,size_t,char const*) ;
 int FUNC_41 (TYPE_1__*) ;
 int FUNC_42 (void*,void*) ;
 int FUNC_43 (TYPE_1__*) ;
 int FUNC_44 (size_t,int) ;
 int FUNC_45 (char*,char*) ;
 int FUNC_46 (int ) ;

__attribute__((used)) static int FUNC_47(void)
{
    static const char *VAR_0[] = {
        "int", "long", "int32", "int64"
    };
    static const char *VAR_1[] = {
        "uint", "ulong", "uint32", "uint64", "size_t"
    };
    static const unsigned char VAR_2[16] = {
        0xac, 0x75, 0x22, 0x7d, 0x81, 0x06, 0x7a, 0x23,
        0xa6, 0xed, 0x87, 0xc7, 0xab, 0xf4, 0x73, 0x22
    };
    OSSL_PARAM VAR_3[20];
    char VAR_4[100], VAR_5[100], *VAR_6, *VAR_7;
    unsigned char VAR_8[100];
    void *VAR_9, *VAR_10 = ((void*)0), *VAR_11;
    OSSL_PARAM *VAR_12;
    int VAR_13, VAR_14 = 0, VAR_15 = 0;
    unsigned int VAR_16;
    long int VAR_17;
    unsigned long int VAR_18;
    int32_t VAR_19;
    uint32_t VAR_20;
    int64_t VAR_21;
    uint64_t VAR_22;
    size_t VAR_23, VAR_24, VAR_25;
    double VAR_26, VAR_27;
    BIGNUM *VAR_28 = ((void*)0), *VAR_29 = ((void*)0);

    VAR_3[VAR_14++] = FUNC_7("int", &VAR_13);
    VAR_3[VAR_14++] = FUNC_14("uint", &VAR_16);
    VAR_3[VAR_14++] = FUNC_10("long", &VAR_17);
    VAR_3[VAR_14++] = FUNC_17("ulong", &VAR_18);
    VAR_3[VAR_14++] = FUNC_8("int32", &VAR_19);
    VAR_3[VAR_14++] = FUNC_9("int64", &VAR_21);
    VAR_3[VAR_14++] = FUNC_15("uint32", &VAR_20);
    VAR_3[VAR_14++] = FUNC_16("uint64", &VAR_22);
    VAR_3[VAR_14++] = FUNC_13("size_t", &VAR_25);
    VAR_3[VAR_14++] = FUNC_5("double", &VAR_26);
    VAR_3[VAR_14++] = FUNC_4("bignum", VAR_8, sizeof(VAR_8));
    VAR_3[VAR_14++] = FUNC_19("utf8str", VAR_4, sizeof(VAR_4));
    VAR_3[VAR_14++] = FUNC_12("octstr", VAR_4, sizeof(VAR_4));
    VAR_3[VAR_14++] = FUNC_18("utf8ptr", &VAR_6, 0);
    VAR_3[VAR_14++] = FUNC_11("octptr", &VAR_9, 0);
    VAR_3[VAR_14] = FUNC_6();


    if (!FUNC_43(FUNC_28(VAR_3, "fnord")))
        goto err;


    for (VAR_23 = 0; VAR_23 < FUNC_3(VAR_0); VAR_23++) {
        if (!FUNC_41(VAR_12 = FUNC_28(VAR_3, VAR_0[VAR_23]))
            || !FUNC_46(FUNC_31(VAR_12, (int32_t)(3 + VAR_23)))
            || !FUNC_46(FUNC_22(VAR_12, &VAR_21))
            || !FUNC_44(VAR_12->data_size, VAR_12->return_size)
            || !FUNC_44((size_t)VAR_21, 3 + VAR_23)) {
            FUNC_40("iteration %zu var %s", VAR_23 + 1, VAR_0[VAR_23]);
            goto err;
        }
    }

    for (VAR_23 = 0; VAR_23 < FUNC_3(VAR_1); VAR_23++) {
        if (!FUNC_41(VAR_12 = FUNC_28(VAR_3, VAR_1[VAR_23]))
            || !FUNC_46(FUNC_34(VAR_12, (uint32_t)(3 + VAR_23)))
            || !FUNC_46(FUNC_25(VAR_12, &VAR_22))
            || !FUNC_44(VAR_12->data_size, VAR_12->return_size)
            || !FUNC_44((size_t)VAR_22, 3 + VAR_23)) {
            FUNC_40("iteration %zu var %s", VAR_23 + 1, VAR_1[VAR_23]);
            goto err;
        }
    }

    if (!FUNC_41(VAR_12 = FUNC_28(VAR_3, "double"))
        || !FUNC_46(FUNC_30(VAR_12, 3.14))
        || !FUNC_46(FUNC_21(VAR_12, &VAR_27))
        || !FUNC_44(VAR_12->return_size, sizeof(double))
        || !FUNC_38(VAR_26, VAR_27))
        goto err;

    VAR_6 = ((void*)0);
    if (!FUNC_41(VAR_12 = FUNC_28(VAR_3, "utf8str"))
        || !FUNC_46(FUNC_36(VAR_12, "abcdef"))
        || !FUNC_44(VAR_12->return_size, sizeof("abcdef"))
        || !FUNC_46(FUNC_27(VAR_12, &VAR_6, 0))
        || !FUNC_45(VAR_6, "abcdef"))
        goto err;
    FUNC_2(VAR_6);
    VAR_6 = VAR_5;
    if (!FUNC_46(FUNC_27(VAR_12, &VAR_6, sizeof(VAR_5)))
        || !FUNC_45(VAR_5, "abcdef"))
        goto err;

    VAR_6 = VAR_4;
    if (!FUNC_41(VAR_12 = FUNC_28(VAR_3, "utf8ptr"))
        || !FUNC_46(FUNC_35(VAR_12, "tuvwxyz"))
        || !FUNC_44(VAR_12->return_size, sizeof("tuvwxyz"))
        || !FUNC_45(VAR_6, "tuvwxyz")
        || !FUNC_46(FUNC_26(VAR_12, (const char **)&VAR_7))
        || !FUNC_42(VAR_7, VAR_6))
        goto err;

    if (!FUNC_41(VAR_12 = FUNC_28(VAR_3, "octstr"))
        || !FUNC_46(FUNC_33(VAR_12, "abcdefghi",
                                                  sizeof("abcdefghi")))
        || !FUNC_44(VAR_12->return_size, sizeof("abcdefghi")))
        goto err;

    VAR_12->data_size = VAR_12->return_size;
    if (!FUNC_46(FUNC_24(VAR_12, &VAR_10, 0, &VAR_25))
        || !FUNC_44(VAR_25, sizeof("abcdefghi"))
        || !FUNC_39(VAR_10, sizeof("abcdefghi"),
                        "abcdefghi", sizeof("abcdefghi")))
        goto err;
    VAR_9 = VAR_5;
    if (!FUNC_46(FUNC_24(VAR_12, &VAR_9, sizeof(VAR_5), &VAR_25))
        || !FUNC_44(VAR_25, sizeof("abcdefghi"))
        || !FUNC_39(VAR_9, sizeof("abcdefghi"),
                        "abcdefghi", sizeof("abcdefghi")))
        goto err;

    VAR_9 = &VAR_17;
    if (!FUNC_41(VAR_12 = FUNC_28(VAR_3, "octptr"))
        || !FUNC_46(FUNC_32(VAR_12, &VAR_18, sizeof(VAR_18)))
        || !FUNC_44(VAR_12->return_size, sizeof(VAR_18))
        || !FUNC_42(VAR_9, &VAR_18))
        goto err;

    VAR_12->data_size = VAR_12->return_size;
    if (!FUNC_46(FUNC_23(VAR_12, (const void **)&VAR_11, &VAR_24))
        || !FUNC_44(VAR_24, sizeof(VAR_18))
        || !FUNC_42(VAR_11, VAR_9))
        goto err;

    if (!FUNC_41(VAR_12 = FUNC_28(VAR_3, "bignum"))
        || !FUNC_41(VAR_28 = FUNC_1(VAR_2, (int)sizeof(VAR_2), ((void*)0)))
        || !FUNC_46(FUNC_29(VAR_12, VAR_28))
        || !FUNC_44(VAR_12->data_size, VAR_12->return_size))
        goto err;

    VAR_12->data_size = VAR_12->return_size;
    if(!FUNC_46(FUNC_20(VAR_12, &VAR_29))
        || !FUNC_37(VAR_28, VAR_29))
        goto err;
    VAR_15 = 1;
err:
    FUNC_2(VAR_10);
    FUNC_0(VAR_28);
    FUNC_0(VAR_29);
    return VAR_15;
}
