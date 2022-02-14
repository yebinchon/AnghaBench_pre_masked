
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef char* LPWSTR ;
typedef char* LPCWSTR ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3( LPWSTR VAR_0, LPCWSTR VAR_1, int VAR_2,
                               BOOL VAR_3 )
{
    WCHAR VAR_4 = '\0';

    if(!VAR_0) return;

    if (VAR_3 && ((*VAR_1 == '\'') || (*VAR_1 == '\"')))
    {
        if (VAR_1[1] && (VAR_1[FUNC_2(VAR_1)-1] == *VAR_1)) VAR_4 = *VAR_1++;
    }

    FUNC_0( VAR_0, VAR_1, VAR_2 );
    if (VAR_4 && (VAR_2 >= FUNC_1(VAR_1))) VAR_0[FUNC_2(VAR_0)-1] = '\0';
}
