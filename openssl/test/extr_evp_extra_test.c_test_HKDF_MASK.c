
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int salt ;
typedef int out ;
typedef int key ;
typedef int info ;
typedef int expected ;
typedef int EVP_PKEY_CTX ;


 int FUNC_0 (int *,unsigned char*,int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,int *) ;
 int FUNC_3 (int *,unsigned char*,int) ;
 int FUNC_4 (int *,unsigned char*,int) ;
 int FUNC_5 (int *,int ) ;
 int VAR_0 ;
 int FUNC_6 (int *,unsigned char*,size_t*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 () ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (unsigned char*,size_t,unsigned char const*,size_t) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (unsigned char*,int ,size_t) ;

__attribute__((used)) static int FUNC_13(void)
{
    EVP_PKEY_CTX *VAR_1;
    unsigned char VAR_2[20];
    size_t VAR_3;
    int VAR_4, VAR_5 = 0;
    unsigned char VAR_6[] = "0123456789";
    unsigned char VAR_7[] = "012345678901234567890123456789";
    unsigned char VAR_8[] = "infostring";
    const unsigned char VAR_9[] = {
        0xe5, 0x07, 0x70, 0x7f, 0xc6, 0x78, 0xd6, 0x54, 0x32, 0x5f, 0x7e, 0xc5,
        0x7b, 0x59, 0x3e, 0xd8, 0x03, 0x6b, 0xed, 0xca
    };
    size_t VAR_10 = sizeof(VAR_9);

    if (!FUNC_11(VAR_1 = FUNC_2(VAR_0, ((void*)0))))
        goto done;


    for (VAR_4 = 0; VAR_4 < 2; VAR_4++) {
        VAR_3 = sizeof(VAR_2);
        FUNC_12(VAR_2, 0, VAR_3);

        if (!FUNC_9(FUNC_7(VAR_1), 0)
                || !FUNC_9(FUNC_5(VAR_1, FUNC_8()), 0)
                || !FUNC_9(FUNC_4(VAR_1, VAR_6,
                                                            sizeof(VAR_6) - 1), 0)
                || !FUNC_9(FUNC_3(VAR_1, VAR_7,
                                                           sizeof(VAR_7) - 1), 0)
                || !FUNC_9(FUNC_0(VAR_1, VAR_8,
                                                            sizeof(VAR_8) - 1), 0)
                || !FUNC_9(FUNC_6(VAR_1, VAR_2, &VAR_3), 0)
                || !FUNC_10(VAR_2, VAR_3, VAR_9, VAR_10))
            goto done;
    }

    VAR_5 = 1;

 done:
    FUNC_1(VAR_1);

    return VAR_5;
}
