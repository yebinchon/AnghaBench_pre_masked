
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RAND_POOL ;
typedef int OPENSSL_CTX ;
typedef int EVP_MD ;


 size_t VAR_0 ;
 int FUNC_0 (unsigned char*,size_t,unsigned char*,unsigned int*,int *,int *) ;
 int * FUNC_1 (int *,char*,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (unsigned char*,unsigned char*,size_t) ;
 size_t FUNC_4 (int *) ;
 unsigned char* FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned char*) ;

int FUNC_7(OPENSSL_CTX *VAR_1,
                              RAND_POOL *VAR_2,
                              unsigned char *VAR_3,
                              unsigned char *VAR_4,
                              unsigned int *VAR_5)
{
    int VAR_6;
    size_t VAR_7;
    unsigned char *VAR_8;

    if (VAR_2 == ((void*)0))
        return 0;

    VAR_7 = FUNC_4(VAR_2);
    if (VAR_7 >= VAR_0) {
        EVP_MD *VAR_9 = FUNC_1(VAR_1, "SHA256", "");
        if (VAR_9 == ((void*)0))
            return 0;
        VAR_8 = FUNC_5(VAR_2);
        VAR_6 = FUNC_0(VAR_8, VAR_0, VAR_4, VAR_5, VAR_9, ((void*)0));
        if (VAR_6 != 0)
            FUNC_3(VAR_3, VAR_8, VAR_0);
        FUNC_6(VAR_2, VAR_8);
        FUNC_2(VAR_9);
        return VAR_6;
    }
    return 0;
}
