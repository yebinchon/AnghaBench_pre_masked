
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509_STORE_CTX ;
typedef int X509_STORE ;
typedef int X509_LOOKUP ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 () ;
 int FUNC_7 (int *,char const*,int ) ;
 char* FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(int VAR_1)
{
    int VAR_2 = 0;
    X509_STORE_CTX *VAR_3 = ((void*)0);
    X509_STORE *VAR_4 = ((void*)0);
    X509_LOOKUP *VAR_5 = ((void*)0);
    const char *VAR_6 = FUNC_8(VAR_1);

    if (FUNC_0(VAR_4 = FUNC_6())
        && FUNC_0(VAR_5 = FUNC_4(VAR_4, FUNC_2()))
        && FUNC_1(FUNC_7(VAR_5, VAR_6, VAR_0))
        && FUNC_1(FUNC_7(VAR_5, VAR_6, VAR_0)))
        VAR_2 = 1;

    FUNC_3(VAR_3);
    FUNC_5(VAR_4);
    return VAR_2;
}
