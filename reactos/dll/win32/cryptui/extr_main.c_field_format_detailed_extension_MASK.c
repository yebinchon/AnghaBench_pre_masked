
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef void* PCERT_EXTENSION ;
typedef int PCCERT_CONTEXT ;
typedef int * LPWSTR ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (void*,int) ;
 int * FUNC_1 (void*) ;

__attribute__((used)) static WCHAR *FUNC_2(PCCERT_CONTEXT VAR_2, void *VAR_3)
{
    PCERT_EXTENSION VAR_4 = VAR_3;
    LPWSTR VAR_5 = FUNC_0(VAR_4,
     VAR_0 | VAR_1);

    if (!VAR_5)
        VAR_5 = FUNC_1(VAR_4);
    return VAR_5;
}
