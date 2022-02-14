
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_MD_CTX ;


 int FUNC_0 (int *,unsigned char*,int *) ;
 int FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (int *,unsigned char const*,int) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 () ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(unsigned char *VAR_0,
                          const unsigned char *VAR_1, unsigned int VAR_2,
                          const unsigned char *VAR_3, int VAR_4)
{
    EVP_MD_CTX *VAR_5 = FUNC_4();
    int VAR_6 = 1;
    if (VAR_5 == ((void*)0)
        || !FUNC_1(VAR_5, FUNC_5(), ((void*)0))
        || !FUNC_2(VAR_5, VAR_1, VAR_2)
        || !FUNC_2(VAR_5, VAR_3, VAR_4)
        || !FUNC_0(VAR_5, VAR_0, ((void*)0)))
        VAR_6 = 0;

    FUNC_3(VAR_5);
    return VAR_6;
}
