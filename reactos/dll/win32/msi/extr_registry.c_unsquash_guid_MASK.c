
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* LPWSTR ;
typedef char* LPCWSTR ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;

BOOL FUNC_1(LPCWSTR VAR_2, LPWSTR VAR_3)
{
    DWORD VAR_4,VAR_5=0;

    if (FUNC_0(VAR_2) != 32)
        return VAR_0;

    VAR_3[VAR_5++]='{';
    for(VAR_4=0; VAR_4<8; VAR_4++)
        VAR_3[VAR_5++] = VAR_2[7-VAR_4];
    VAR_3[VAR_5++]='-';
    for(VAR_4=0; VAR_4<4; VAR_4++)
        VAR_3[VAR_5++] = VAR_2[11-VAR_4];
    VAR_3[VAR_5++]='-';
    for(VAR_4=0; VAR_4<4; VAR_4++)
        VAR_3[VAR_5++] = VAR_2[15-VAR_4];
    VAR_3[VAR_5++]='-';
    for(VAR_4=0; VAR_4<2; VAR_4++)
    {
        VAR_3[VAR_5++] = VAR_2[17+VAR_4*2];
        VAR_3[VAR_5++] = VAR_2[16+VAR_4*2];
    }
    VAR_3[VAR_5++]='-';
    for( ; VAR_4<8; VAR_4++)
    {
        VAR_3[VAR_5++] = VAR_2[17+VAR_4*2];
        VAR_3[VAR_5++] = VAR_2[16+VAR_4*2];
    }
    VAR_3[VAR_5++]='}';
    VAR_3[VAR_5]=0;
    return VAR_1;
}
