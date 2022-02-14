
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509_EXTENSION ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char**) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,char const*) ;
 int FUNC_7 (int ) ;
 int VAR_0 ;
 int FUNC_8 (int *,int *,int ,int ) ;

__attribute__((used)) static int FUNC_9(X509_EXTENSION *VAR_1,
                                      const char *VAR_2)
{
    BIO *VAR_3 = ((void*)0);
    char *VAR_4 = ((void*)0);
    int VAR_5 = 0;

    if (!FUNC_5(VAR_3 = FUNC_2(FUNC_3()))
            || !FUNC_7(FUNC_8(VAR_3, VAR_1,
                                           VAR_0, 0)))
        goto end;


    if (!FUNC_7(FUNC_4(VAR_3, "\0", 1)))
        goto end;

    FUNC_1(VAR_3, &VAR_4);
    if (!FUNC_6(VAR_4, VAR_2))
        goto end;

    VAR_5 = 1;

end:
    FUNC_0(VAR_3);
    return VAR_5;
}
