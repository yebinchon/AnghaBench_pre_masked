
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* prefix; int prefixlen; } ;
typedef TYPE_1__ SSL_CONF_CTX ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*) ;
 int FUNC_2 (char*) ;

int FUNC_3(SSL_CONF_CTX *VAR_0, const char *VAR_1)
{
    char *VAR_2 = ((void*)0);
    if (VAR_1) {
        VAR_2 = FUNC_1(VAR_1);
        if (VAR_2 == ((void*)0))
            return 0;
    }
    FUNC_0(VAR_0->prefix);
    VAR_0->prefix = VAR_2;
    if (VAR_2)
        VAR_0->prefixlen = FUNC_2(VAR_2);
    else
        VAR_0->prefixlen = 0;
    return 1;
}
