
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OSSL_PROVIDER ;
typedef int OSSL_NAMEMAP ;
typedef int OPENSSL_CTX ;


 int FUNC_0 (int *,int,void (*) (char const*,void*),void*) ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;

void FUNC_3(OSSL_PROVIDER *VAR_0, int VAR_1,
                      void (*VAR_2)(const char *VAR_3, void *VAR_4),
                      void *VAR_5)
{
    OPENSSL_CTX *VAR_6 = FUNC_2(VAR_0);
    OSSL_NAMEMAP *VAR_7 = FUNC_1(VAR_6);

    FUNC_0(VAR_7, VAR_1, VAR_2, VAR_5);
}
