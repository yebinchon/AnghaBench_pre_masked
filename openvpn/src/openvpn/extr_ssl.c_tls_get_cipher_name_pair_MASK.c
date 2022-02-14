
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * iana_name; int * openssl_name; } ;
typedef TYPE_1__ tls_cipher_name_pair ;


 scalar_t__ FUNC_0 (char const*,int *,size_t) ;
 size_t FUNC_1 (int *) ;
 TYPE_1__* VAR_0 ;

const tls_cipher_name_pair *
FUNC_2(const char *VAR_1, size_t VAR_2)
{
    const tls_cipher_name_pair *VAR_3 = VAR_0;

    while (VAR_3->openssl_name != ((void*)0))
    {
        if ((FUNC_1(VAR_3->openssl_name) == VAR_2 && 0 == FUNC_0(VAR_1, VAR_3->openssl_name, VAR_2))
            || (FUNC_1(VAR_3->iana_name) == VAR_2 && 0 == FUNC_0(VAR_1, VAR_3->iana_name, VAR_2)))
        {
            return VAR_3;
        }
        VAR_3++;
    }


    return ((void*)0);
}
