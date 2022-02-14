
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RAND_POOL ;
typedef int OPENSSL_CTX ;


 size_t VAR_0 ;
 int FUNC_0 (unsigned char*,size_t,unsigned char*,unsigned int*,int ,int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_3(OPENSSL_CTX *VAR_4, RAND_POOL *VAR_5,
                            unsigned char *VAR_6, unsigned char *VAR_7,
                            unsigned int *VAR_8)
{
    size_t VAR_9, VAR_10;

    if (!FUNC_2(VAR_2, VAR_3))
        return 0;

    VAR_10 = VAR_2++;
    if (VAR_10 > 0 && VAR_1 == VAR_10)
        VAR_10--;
    for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++)
        VAR_6[VAR_9] = (unsigned char)(VAR_9 + 'A' + VAR_10);
    return FUNC_0(VAR_6, VAR_0, VAR_7, VAR_8, FUNC_1(), ((void*)0));
}
