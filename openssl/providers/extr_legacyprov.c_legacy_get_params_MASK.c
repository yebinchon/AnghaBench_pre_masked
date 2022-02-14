
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OSSL_PROVIDER ;
typedef int OSSL_PARAM ;


 char* VAR_0 ;
 char* VAR_1 ;
 int * FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_2(const OSSL_PROVIDER *VAR_5, OSSL_PARAM VAR_6[])
{
    OSSL_PARAM *VAR_7;

    VAR_7 = FUNC_0(VAR_6, VAR_3);
    if (VAR_7 != ((void*)0) && !FUNC_1(VAR_7, "OpenSSL Legacy Provider"))
        return 0;
    VAR_7 = FUNC_0(VAR_6, VAR_4);
    if (VAR_7 != ((void*)0) && !FUNC_1(VAR_7, VAR_1))
        return 0;
    VAR_7 = FUNC_0(VAR_6, VAR_2);
    if (VAR_7 != ((void*)0) && !FUNC_1(VAR_7, VAR_0))
        return 0;

    return 1;
}
