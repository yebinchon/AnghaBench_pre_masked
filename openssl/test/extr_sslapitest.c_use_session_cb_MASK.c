
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL_SESSION ;
typedef int SSL ;
typedef int EVP_MD ;


 int FUNC_0 (int *) ;
 int * VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t FUNC_1 (scalar_t__) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(SSL *VAR_3, const EVP_MD *VAR_4, const unsigned char **VAR_5,
                          size_t *VAR_6, SSL_SESSION **VAR_7)
{
    switch (++VAR_2) {
    case 1:

        if (VAR_4 != ((void*)0))
            return 0;
        break;

    case 2:

        if (VAR_4 == ((void*)0))
            return 0;
        break;

    default:

        return 0;
    }

    if (VAR_0 != ((void*)0))
        FUNC_0(VAR_0);

    *VAR_7 = VAR_0;
    *VAR_5 = (const unsigned char *)VAR_1;
    *VAR_6 = FUNC_1(VAR_1);

    return 1;
}
