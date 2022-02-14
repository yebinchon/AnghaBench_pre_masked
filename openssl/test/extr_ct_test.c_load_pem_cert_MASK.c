
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509 ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;
 int * FUNC_3 (int *,int *,int *,int *) ;
 char* FUNC_4 (char const*,char const*) ;

__attribute__((used)) static X509 *FUNC_5(const char *VAR_0, const char *VAR_1)
{
    X509 *VAR_2 = ((void*)0);
    char *VAR_3 = FUNC_4(VAR_0, VAR_1);

    if (VAR_3 != ((void*)0)) {
        BIO *VAR_4 = FUNC_1(VAR_3, "r");

        if (VAR_4 != ((void*)0))
            VAR_2 = FUNC_3(VAR_4, ((void*)0), ((void*)0), ((void*)0));
        FUNC_0(VAR_4);
    }

    FUNC_2(VAR_3);
    return VAR_2;
}
