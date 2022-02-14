
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; } ;
typedef TYPE_1__ SSL_CONF_CTX ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,char const*,char const*) ;

int FUNC_1(SSL_CONF_CTX *VAR_2, int *VAR_3, char ***VAR_4)
{
    int VAR_5;
    const char *VAR_6 = ((void*)0), *VAR_7;

    if (VAR_3 != ((void*)0) && *VAR_3 == 0)
        return 0;
    if (VAR_3 == ((void*)0) || *VAR_3 > 0)
        VAR_6 = **VAR_4;
    if (VAR_6 == ((void*)0))
        return 0;
    if (VAR_3 == ((void*)0) || *VAR_3 > 1)
        VAR_7 = (*VAR_4)[1];
    else
        VAR_7 = ((void*)0);
    VAR_2->flags &= ~VAR_1;
    VAR_2->flags |= VAR_0;
    VAR_5 = FUNC_0(VAR_2, VAR_6, VAR_7);
    if (VAR_5 > 0) {

        (*VAR_4) += VAR_5;
        if (VAR_3)
            (*VAR_3) -= VAR_5;
        return VAR_5;
    }

    if (VAR_5 == -2)
        return 0;

    if (VAR_5 == 0)
        return -1;
    return VAR_5;
}
