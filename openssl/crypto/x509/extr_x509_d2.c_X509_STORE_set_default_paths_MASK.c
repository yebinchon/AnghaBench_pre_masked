
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509_STORE ;
typedef int X509_LOOKUP ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int *,int *,int ) ;
 int FUNC_6 () ;
 int * FUNC_7 (int *,int ) ;

int FUNC_8(X509_STORE *VAR_1)
{
    X509_LOOKUP *VAR_2;

    VAR_2 = FUNC_7(VAR_1, FUNC_3());
    if (VAR_2 == ((void*)0))
        return 0;
    FUNC_5(VAR_2, ((void*)0), VAR_0);

    VAR_2 = FUNC_7(VAR_1, FUNC_4());
    if (VAR_2 == ((void*)0))
        return 0;
    FUNC_1(VAR_2, ((void*)0), VAR_0);

    VAR_2 = FUNC_7(VAR_1, FUNC_6());
    if (VAR_2 == ((void*)0))
        return 0;
    FUNC_2(VAR_2, ((void*)0));


    FUNC_0();

    return 1;
}
