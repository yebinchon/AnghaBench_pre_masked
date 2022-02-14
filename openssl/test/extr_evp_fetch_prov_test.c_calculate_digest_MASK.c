
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_MD_CTX ;
typedef int EVP_MD ;


 int FUNC_0 (int *,unsigned char*,int *) ;
 int FUNC_1 (int *,int const*,int *) ;
 int FUNC_2 (int *,char const*,size_t) ;
 int FUNC_3 (int *) ;
 int const* FUNC_4 (int *) ;
 int * FUNC_5 () ;
 int VAR_0 ;
 int FUNC_6 (unsigned char*,int,unsigned char const*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(const EVP_MD *VAR_1, const char *VAR_2, size_t VAR_3,
                            const unsigned char *VAR_4)
{
    unsigned char VAR_5[VAR_0];
    EVP_MD_CTX *VAR_6;
    int VAR_7 = 0;

    if (!FUNC_7(VAR_6 = FUNC_5())
            || !FUNC_8(FUNC_1(VAR_6, VAR_1, ((void*)0)))
            || !FUNC_8(FUNC_2(VAR_6, VAR_2, VAR_3))
            || !FUNC_8(FUNC_0(VAR_6, VAR_5, ((void*)0)))
            || !FUNC_6(VAR_5, VAR_0, VAR_4,
                            VAR_0)
            || !FUNC_8(VAR_1 == FUNC_4(VAR_6)))
        goto err;

    VAR_7 = 1;
 err:
    FUNC_3(VAR_6);
    return VAR_7;
}
