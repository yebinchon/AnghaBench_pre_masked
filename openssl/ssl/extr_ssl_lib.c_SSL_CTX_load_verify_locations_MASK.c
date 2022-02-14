
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL_CTX ;


 int FUNC_0 (int *,char const*) ;
 int FUNC_1 (int *,char const*) ;

int FUNC_2(SSL_CTX *VAR_0, const char *VAR_1,
                                  const char *VAR_2)
{
    if (VAR_1 == ((void*)0) && VAR_2 == ((void*)0))
        return 0;
    if (VAR_1 != ((void*)0) && !FUNC_1(VAR_0, VAR_1))
        return 0;
    if (VAR_2 != ((void*)0) && !FUNC_0(VAR_0, VAR_2))
        return 0;
    return 1;
}
