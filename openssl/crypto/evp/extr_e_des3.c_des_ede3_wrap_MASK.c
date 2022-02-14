
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_CIPHER_CTX ;


 int FUNC_0 (unsigned char*,int *,size_t) ;
 unsigned char* FUNC_1 (int *) ;
 int FUNC_2 (unsigned char*,int) ;
 scalar_t__ FUNC_3 (unsigned char*,int) ;
 int FUNC_4 (unsigned char const*,size_t,unsigned char*) ;
 int VAR_0 ;
 int FUNC_5 (int *,unsigned char*,unsigned char*,size_t) ;
 int FUNC_6 (unsigned char*,unsigned char*,int) ;
 int FUNC_7 (unsigned char*,unsigned char const*,size_t) ;
 unsigned char* VAR_1 ;

__attribute__((used)) static int FUNC_8(EVP_CIPHER_CTX *VAR_2, unsigned char *VAR_3,
                         const unsigned char *VAR_4, size_t VAR_5)
{
    unsigned char VAR_6[VAR_0];
    if (VAR_3 == ((void*)0))
        return VAR_5 + 16;

    FUNC_7(VAR_3 + 8, VAR_4, VAR_5);

    FUNC_4(VAR_4, VAR_5, VAR_6);
    FUNC_6(VAR_3 + VAR_5 + 8, VAR_6, 8);
    FUNC_2(VAR_6, VAR_0);

    if (FUNC_3(FUNC_1(VAR_2), 8) <= 0)
        return -1;
    FUNC_6(VAR_3, FUNC_1(VAR_2), 8);

    FUNC_5(VAR_2, VAR_3 + 8, VAR_3 + 8, VAR_5 + 8);
    FUNC_0(VAR_3, ((void*)0), VAR_5 + 16);
    FUNC_6(FUNC_1(VAR_2), VAR_1, 8);
    FUNC_5(VAR_2, VAR_3, VAR_3, VAR_5 + 16);
    return VAR_5 + 16;
}
