
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t* LPCWSTR ;
typedef int GUID ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;

BOOL FUNC_0( LPCWSTR VAR_3, GUID *VAR_4 )
{
    DWORD VAR_5, VAR_6 = 0, VAR_7 = 1, *VAR_8;

    if (!VAR_3)
        return VAR_0;

    VAR_8 = (DWORD*) VAR_4;
    for( VAR_5=0; VAR_5<20; VAR_5++ )
    {
        if( (VAR_5%5) == 0 )
        {
            VAR_6 = 0;
            VAR_7 = 1;
        }
        VAR_6 += VAR_2[VAR_3[VAR_5]] * VAR_7;
        if( VAR_3[VAR_5] >= 0x80 )
            return VAR_0;
        if( VAR_2[VAR_3[VAR_5]] == 0xff )
            return VAR_0;
        if( (VAR_5%5) == 4 )
            VAR_8[VAR_5/5] = VAR_6;
        VAR_7 *= 85;
    }
    return VAR_1;
}
