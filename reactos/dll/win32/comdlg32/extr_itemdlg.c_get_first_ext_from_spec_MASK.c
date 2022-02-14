
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef char* LPWSTR ;
typedef int LPCWSTR ;


 char* FUNC_0 (char*) ;
 char* FUNC_1 (char*,char) ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static LPWSTR FUNC_3(LPWSTR VAR_0, LPCWSTR VAR_1)
{
    WCHAR *VAR_2, *VAR_3;

    FUNC_2(VAR_0, VAR_1);
    if( (VAR_2 = FUNC_1(VAR_0, ';')) )
        *VAR_2 = '\0';

    VAR_3 = FUNC_0(VAR_0);
    if(FUNC_1(VAR_3, '*'))
        return ((void*)0);

    return VAR_3;
}
