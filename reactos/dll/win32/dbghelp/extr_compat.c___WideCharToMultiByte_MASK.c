
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int* LPSTR ;
typedef int* LPCWSTR ;
typedef int LPCSTR ;
typedef int INT ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int*) ;

INT
FUNC_2(UINT VAR_2, DWORD VAR_3, LPCWSTR VAR_4, INT VAR_5,
                                LPSTR VAR_6, INT VAR_7, LPCSTR VAR_8, BOOL *VAR_9 )
{
    int VAR_10;

    if (!VAR_4 || !VAR_5 || (!VAR_6 && VAR_7))
    {
        FUNC_0( VAR_0 );
        return 0;
    }

    if (VAR_5 < 0) VAR_5 = FUNC_1(VAR_4) + 1;

    if(!VAR_7)
        return VAR_5;

    for(VAR_10=0; VAR_10<VAR_5 && VAR_10<VAR_7; VAR_10++)
        VAR_6[VAR_10] = VAR_4[VAR_10] & 0xFF;

    if (VAR_9) *VAR_9 = VAR_1;

    return VAR_10;
}
