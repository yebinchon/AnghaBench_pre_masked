
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int aux; } ;
typedef TYPE_1__ X509 ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (TYPE_1__**,unsigned char const**,long) ;
 int FUNC_2 (int *,unsigned char const**,long) ;

X509 *FUNC_3(X509 **VAR_0, const unsigned char **VAR_1, long VAR_2)
{
    const unsigned char *VAR_3;
    X509 *VAR_4;
    int VAR_5 = 0;


    VAR_3 = *VAR_1;

    if (VAR_0 == ((void*)0) || *VAR_0 == ((void*)0))
        VAR_5 = 1;
    VAR_4 = FUNC_1(VAR_0, &VAR_3, VAR_2);

    if (VAR_4 == ((void*)0))
        return ((void*)0);

    VAR_2 -= VAR_3 - *VAR_1;
    if (VAR_2 > 0 && !FUNC_2(&VAR_4->aux, &VAR_3, VAR_2))
        goto err;
    *VAR_1 = VAR_3;
    return VAR_4;
 err:
    if (VAR_5) {
        FUNC_0(VAR_4);
        if (VAR_0)
            *VAR_0 = ((void*)0);
    }
    return ((void*)0);
}
