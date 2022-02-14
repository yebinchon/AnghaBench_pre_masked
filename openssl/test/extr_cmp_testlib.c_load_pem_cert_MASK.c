
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509 ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *,char const*) ;
 int FUNC_3 () ;
 int * FUNC_4 (int *,int *,int *,int *) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (int *) ;

X509 *FUNC_7(const char *VAR_0)
{
    X509 *VAR_1 = ((void*)0);
    BIO *VAR_2 = ((void*)0);

    if (!FUNC_6(VAR_2 = FUNC_1(FUNC_3())))
        return ((void*)0);
    if (FUNC_5(FUNC_2(VAR_2, VAR_0), 0))
        (void)FUNC_6(VAR_1 = FUNC_4(VAR_2, ((void*)0), ((void*)0), ((void*)0)));

    FUNC_0(VAR_2);
    return VAR_1;
}
