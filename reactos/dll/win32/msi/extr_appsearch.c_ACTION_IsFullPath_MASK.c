
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef char* LPCWSTR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 char FUNC_0 (char) ;

__attribute__((used)) static BOOL FUNC_1(LPCWSTR VAR_2)
{
    WCHAR VAR_3 = FUNC_0(VAR_2[0]);
    BOOL VAR_4;

    if (VAR_3 >= 'A' && VAR_3 <= 'Z' && VAR_2[1] == ':')
        VAR_4 = VAR_1;
    else if (VAR_2[0] == '\\' && VAR_2[1] == '\\')
        VAR_4 = VAR_1;
    else
        VAR_4 = VAR_0;
    return VAR_4;
}
