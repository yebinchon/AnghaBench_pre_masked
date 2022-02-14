
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__* LPWSTR ;
typedef int GUID ;
typedef int BOOL ;


 int VAR_0 ;
 void** VAR_1 ;

BOOL FUNC_0( GUID *VAR_2, LPWSTR VAR_3 )
{
    unsigned int VAR_4, *VAR_5, VAR_6;

    VAR_5 = (unsigned int*) VAR_2;
    for( VAR_6=0; VAR_6<4; VAR_6++ )
    {
        VAR_4 = VAR_5[VAR_6];
        *VAR_3++ = VAR_1[VAR_4%85];
        VAR_4 = VAR_4/85;
        *VAR_3++ = VAR_1[VAR_4%85];
        VAR_4 = VAR_4/85;
        *VAR_3++ = VAR_1[VAR_4%85];
        VAR_4 = VAR_4/85;
        *VAR_3++ = VAR_1[VAR_4%85];
        VAR_4 = VAR_4/85;
        *VAR_3++ = VAR_1[VAR_4%85];
    }
    *VAR_3 = 0;

    return VAR_0;
}
