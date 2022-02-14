
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_CIPHER_CTX ;


 char* FUNC_0 (unsigned char*,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,unsigned char*,unsigned char*,int ,int,unsigned char*,unsigned char*) ;
 int FUNC_2 (int *,unsigned char*,int*) ;
 int FUNC_3 (int *,int ,unsigned char*,unsigned char*) ;
 int FUNC_4 (int *,unsigned char*,int*,void const*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int VAR_4 ;
 int FUNC_7 (void const*,int,char const*,unsigned char*,unsigned char*) ;
 int FUNC_8 (unsigned char*) ;
 int FUNC_9 (unsigned char*) ;
 unsigned char* FUNC_10 (int) ;
 int FUNC_11 (char const*) ;

char *
FUNC_12(const void *VAR_5, int VAR_6, const char *VAR_7) {
    EVP_CIPHER_CTX VAR_8;
    unsigned char VAR_9[VAR_0];
    unsigned char VAR_10[VAR_2];
    unsigned char VAR_11[VAR_3];
    unsigned char *VAR_12;
    char *VAR_13;
    int VAR_14, VAR_15;

    if (VAR_5 == 0 || VAR_6 <= 0 || VAR_7 == 0 || *VAR_7 == 0) {
        return 0;
    }
    VAR_12 = FUNC_10(VAR_4 + VAR_0 + VAR_6 + VAR_1);
    FUNC_9(VAR_12);
    FUNC_7(VAR_5, VAR_6, VAR_7, VAR_12, VAR_9);
    FUNC_1(FUNC_5(), FUNC_6(), VAR_12,
        (unsigned char *) VAR_7, FUNC_11(VAR_7), 1, VAR_11, VAR_10);
    FUNC_3(&VAR_8, FUNC_5(), VAR_11, VAR_10);
    VAR_14 = VAR_4;
    FUNC_4(&VAR_8, VAR_12 + VAR_14, &VAR_15, VAR_9, VAR_0);
    VAR_14 += VAR_15;
    FUNC_4(&VAR_8, VAR_12 + VAR_14, &VAR_15, VAR_5, VAR_6);
    VAR_14 += VAR_15;
    FUNC_2(&VAR_8, VAR_12 + VAR_14, &VAR_15);
    VAR_13 = FUNC_0(VAR_12, VAR_14 + VAR_15);
    FUNC_8(VAR_12);
    return VAR_13;
}
