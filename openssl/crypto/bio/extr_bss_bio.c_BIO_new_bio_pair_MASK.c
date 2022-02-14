
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BIO ;


 int FUNC_0 (int *) ;
 long FUNC_1 (int *,int *) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 () ;
 long FUNC_4 (int *,size_t) ;

int FUNC_5(BIO **VAR_0, size_t VAR_1,
                     BIO **VAR_2, size_t VAR_3)
{
    BIO *VAR_4 = ((void*)0), *VAR_5 = ((void*)0);
    long VAR_6;
    int VAR_7 = 0;

    VAR_4 = FUNC_2(FUNC_3());
    if (VAR_4 == ((void*)0))
        goto err;
    VAR_5 = FUNC_2(FUNC_3());
    if (VAR_5 == ((void*)0))
        goto err;

    if (VAR_1) {
        VAR_6 = FUNC_4(VAR_4, VAR_1);
        if (!VAR_6)
            goto err;
    }
    if (VAR_3) {
        VAR_6 = FUNC_4(VAR_5, VAR_3);
        if (!VAR_6)
            goto err;
    }

    VAR_6 = FUNC_1(VAR_4, VAR_5);
    if (!VAR_6)
        goto err;
    VAR_7 = 1;

 err:
    if (VAR_7 == 0) {
        FUNC_0(VAR_4);
        VAR_4 = ((void*)0);
        FUNC_0(VAR_5);
        VAR_5 = ((void*)0);
    }

    *VAR_0 = VAR_4;
    *VAR_2 = VAR_5;
    return VAR_7;
}
