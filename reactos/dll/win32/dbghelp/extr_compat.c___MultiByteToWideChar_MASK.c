
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int * LPWSTR ;
typedef int * LPCSTR ;
typedef int INT ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

INT
FUNC_2(UINT VAR_1, DWORD VAR_2, LPCSTR VAR_3, INT VAR_4,
                                LPWSTR VAR_5, INT VAR_6 )
{
    int VAR_7;

    if (!VAR_3 || !VAR_4 || (!VAR_5 && VAR_6))
    {
        FUNC_0( VAR_0 );
        return 0;
    }

    if (VAR_4 < 0) VAR_4 = FUNC_1(VAR_3) + 1;

    if(!VAR_6)
        return VAR_4;

    for(VAR_7=0; VAR_7<VAR_4 && VAR_7<VAR_6; VAR_7++)
        VAR_5[VAR_7] = VAR_3[VAR_7];

    return VAR_7;
}
