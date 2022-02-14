
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__* LPWSTR ;
typedef int GUID ;


 void** VAR_0 ;

__attribute__((used)) static void FUNC_0( GUID *VAR_1, LPWSTR VAR_2 )
{
    unsigned int VAR_3, *VAR_4, VAR_5;

    VAR_4 = (unsigned int*) VAR_1;
    for( VAR_5=0; VAR_5<4; VAR_5++ )
    {
        VAR_3 = VAR_4[VAR_5];
        *VAR_2++ = VAR_0[VAR_3%85];
        VAR_3 = VAR_3/85;
        *VAR_2++ = VAR_0[VAR_3%85];
        VAR_3 = VAR_3/85;
        *VAR_2++ = VAR_0[VAR_3%85];
        VAR_3 = VAR_3/85;
        *VAR_2++ = VAR_0[VAR_3%85];
        VAR_3 = VAR_3/85;
        *VAR_2++ = VAR_0[VAR_3%85];
    }
    *VAR_2 = 0;
}
