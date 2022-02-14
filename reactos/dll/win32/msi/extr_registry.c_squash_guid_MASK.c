
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * LPWSTR ;
typedef int * LPCWSTR ;
typedef int LPCOLESTR ;
typedef int GUID ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

BOOL FUNC_2(LPCWSTR VAR_2, LPWSTR VAR_3)
{
    DWORD VAR_4,VAR_5=1;
    GUID VAR_6;

    VAR_3[0] = 0;

    if (FUNC_1(FUNC_0((LPCOLESTR)VAR_2, &VAR_6)))
        return VAR_0;

    for(VAR_4=0; VAR_4<8; VAR_4++)
        VAR_3[7-VAR_4] = VAR_2[VAR_5++];
    VAR_5++;
    for(VAR_4=0; VAR_4<4; VAR_4++)
        VAR_3[11-VAR_4] = VAR_2[VAR_5++];
    VAR_5++;
    for(VAR_4=0; VAR_4<4; VAR_4++)
        VAR_3[15-VAR_4] = VAR_2[VAR_5++];
    VAR_5++;
    for(VAR_4=0; VAR_4<2; VAR_4++)
    {
        VAR_3[17+VAR_4*2] = VAR_2[VAR_5++];
        VAR_3[16+VAR_4*2] = VAR_2[VAR_5++];
    }
    VAR_5++;
    for( ; VAR_4<8; VAR_4++)
    {
        VAR_3[17+VAR_4*2] = VAR_2[VAR_5++];
        VAR_3[16+VAR_4*2] = VAR_2[VAR_5++];
    }
    VAR_3[32]=0;
    return VAR_1;
}
