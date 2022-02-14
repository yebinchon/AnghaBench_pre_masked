
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509 ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,char*) ;
 int * FUNC_2 (int *,int *,int *,int *) ;
 int FUNC_3 (long,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 long FUNC_6 (int *) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_7(void)
{
    X509 *VAR_1 = ((void*)0);
    BIO *VAR_2 = ((void*)0);
    long VAR_3;
    int VAR_4 = 0;

    if (!FUNC_4(VAR_2 = FUNC_1(VAR_0, "r"))
            || !FUNC_4(VAR_1 = FUNC_2(VAR_2, ((void*)0), ((void*)0), ((void*)0)))
            || !FUNC_3(VAR_3 = FUNC_6(VAR_1), 6))
        goto end;

    VAR_4 = 1;

end:
    FUNC_0(VAR_2);
    FUNC_5(VAR_1);
    return VAR_4;
}
