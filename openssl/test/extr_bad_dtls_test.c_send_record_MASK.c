
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int iv ;
typedef int HMAC_CTX ;
typedef int EVP_CIPHER_CTX ;
typedef int BIO ;


 int FUNC_0 (int *,unsigned char*,size_t) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,unsigned char*,unsigned char*,size_t) ;
 int FUNC_4 (int *,int ,int *,int ,unsigned char*,int) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;
 int * FUNC_8 () ;
 int FUNC_9 (int *,unsigned char*,int *) ;
 int FUNC_10 (int *,int ,int,int ,int *) ;
 int FUNC_11 (int *,unsigned char*,size_t) ;
 int FUNC_12 (unsigned char*) ;
 unsigned char* FUNC_13 (size_t) ;
 int FUNC_14 (unsigned char*,int) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_15 (unsigned char*,void const*,size_t) ;

__attribute__((used)) static int FUNC_16(BIO *VAR_3, unsigned char VAR_4, uint64_t VAR_5,
                       const void *VAR_6, size_t VAR_7)
{



    static unsigned char VAR_8[2] = { 0x00, 0x01 };
    static unsigned char VAR_9[6] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
    static unsigned char VAR_10[2] = { 0x01, 0x00 };
    unsigned char VAR_11[2];
    HMAC_CTX *VAR_12;
    EVP_CIPHER_CTX *VAR_13;
    unsigned char VAR_14[16];
    unsigned char VAR_15;
    unsigned char *VAR_16;

    VAR_9[0] = (VAR_5 >> 40) & 0xff;
    VAR_9[1] = (VAR_5 >> 32) & 0xff;
    VAR_9[2] = (VAR_5 >> 24) & 0xff;
    VAR_9[3] = (VAR_5 >> 16) & 0xff;
    VAR_9[4] = (VAR_5 >> 8) & 0xff;
    VAR_9[5] = VAR_5 & 0xff;

    VAR_15 = 15 - ((VAR_7 + VAR_0) % 16);
    VAR_16 = FUNC_13(VAR_7 + VAR_0 + 1 + VAR_15);
    if (VAR_16 == ((void*)0))
        return 0;


    FUNC_15(VAR_16, VAR_6, VAR_7);


    VAR_12 = FUNC_8();
    FUNC_10(VAR_12, VAR_2, 20, FUNC_6(), ((void*)0));
    FUNC_11(VAR_12, VAR_8, 2);
    FUNC_11(VAR_12, VAR_9, 6);
    FUNC_11(VAR_12, &VAR_4, 1);
    FUNC_11(VAR_12, VAR_10, 2);
    VAR_11[0] = (unsigned char)(VAR_7 >> 8);
    VAR_11[1] = (unsigned char)(VAR_7);
    FUNC_11(VAR_12, VAR_11, 2);
    FUNC_11(VAR_12, VAR_16, VAR_7);
    FUNC_9(VAR_12, VAR_16 + VAR_7, ((void*)0));
    FUNC_7(VAR_12);


    VAR_7 += VAR_0;
    do {
        VAR_16[VAR_7++] = VAR_15;
    } while (VAR_7 % 16);


    FUNC_14(VAR_14, sizeof(VAR_14));
    VAR_13 = FUNC_2();
    FUNC_4(VAR_13, FUNC_5(), ((void*)0), VAR_1, VAR_14, 1);
    FUNC_3(VAR_13, VAR_16, VAR_16, VAR_7);
    FUNC_1(VAR_13);


    FUNC_0(VAR_3, &VAR_4, 1);
    FUNC_0(VAR_3, VAR_10, 2);
    FUNC_0(VAR_3, VAR_8, 2);
    FUNC_0(VAR_3, VAR_9, 6);
    VAR_11[0] = (unsigned char)((VAR_7 + sizeof(VAR_14)) >> 8);
    VAR_11[1] = (unsigned char)(VAR_7 + sizeof(VAR_14));
    FUNC_0(VAR_3, VAR_11, 2);

    FUNC_0(VAR_3, VAR_14, sizeof(VAR_14));
    FUNC_0(VAR_3, VAR_16, VAR_7);

    FUNC_12(VAR_16);
    return 1;
}
