
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hash ;
typedef int SSL ;
typedef int EVP_MD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (unsigned char*,int,unsigned char const*,int) ;
 int FUNC_2 (int *,unsigned char*,int,size_t*) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *,int const*,unsigned char*,unsigned char*,int) ;
 int FUNC_5 (int *,int const*,unsigned char*,unsigned char*,int) ;
 int FUNC_6 (int *,int const*,unsigned char*,unsigned char const*,size_t,unsigned char*,size_t,unsigned char*,size_t,int) ;

__attribute__((used)) static int FUNC_7(SSL *VAR_3, unsigned char *VAR_4,
                       const unsigned char *VAR_5, size_t VAR_6,
                       const unsigned char *VAR_7,
                       const unsigned char *VAR_8, const unsigned char *VAR_9)
{
    size_t VAR_10;
    unsigned char VAR_11[VAR_0];
    unsigned char VAR_12[VAR_0];
    unsigned char VAR_13[VAR_2];
    unsigned char VAR_14[VAR_1];
    const EVP_MD *VAR_15 = FUNC_3(VAR_3);

    if (!FUNC_2(VAR_3, VAR_12, sizeof(VAR_12), &VAR_10)) {
        FUNC_0("Failed to get hash");
        return 0;
    }

    if (!FUNC_6(VAR_3, VAR_15, VAR_4, VAR_5, VAR_6, VAR_12, VAR_10,
                           VAR_11, VAR_10, 1)) {
        FUNC_0("Secret generation failed");
        return 0;
    }

    if (!FUNC_1(VAR_11, VAR_10, VAR_7, VAR_10))
        return 0;

    if (!FUNC_5(VAR_3, VAR_15, VAR_11, VAR_13, VAR_2)) {
        FUNC_0("Key generation failed");
        return 0;
    }

    if (!FUNC_1(VAR_13, VAR_2, VAR_8, VAR_2))
        return 0;

    if (!FUNC_4(VAR_3, VAR_15, VAR_11, VAR_14, VAR_1)) {
        FUNC_0("IV generation failed");
        return 0;
    }

    if (!FUNC_1(VAR_14, VAR_1, VAR_9, VAR_1))
        return 0;

    return 1;
}
