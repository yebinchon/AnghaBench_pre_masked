
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL_CTX ;


 int FUNC_0 (int *,char const*) ;
 int FUNC_1 (int *,char const*) ;
 int FUNC_2 (int *,char const*) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;

int FUNC_6(SSL_CTX *VAR_0,
                             const char *VAR_1, int VAR_2,
                             const char *VAR_3, int VAR_4,
                             const char *VAR_5, int VAR_6)
{
    if (VAR_1 == ((void*)0) && VAR_3 == ((void*)0) && VAR_5 == ((void*)0)) {
        if (!VAR_2 && FUNC_4(VAR_0) <= 0)
            return 0;
        if (!VAR_4 && FUNC_3(VAR_0) <= 0)
            return 0;
        if (!VAR_6 && FUNC_5(VAR_0) <= 0)
            return 0;

        return 1;
    }

    if (VAR_1 != ((void*)0) && !FUNC_1(VAR_0, VAR_1))
        return 0;
    if (VAR_3 != ((void*)0) && !FUNC_0(VAR_0, VAR_3))
        return 0;
    if (VAR_5 != ((void*)0) && !FUNC_2(VAR_0, VAR_5))
        return 0;
    return 1;
}
