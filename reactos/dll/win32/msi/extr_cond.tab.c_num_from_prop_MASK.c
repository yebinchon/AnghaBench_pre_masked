
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* LPCWSTR ;
typedef int INT ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static BOOL FUNC_0( LPCWSTR VAR_2, INT *VAR_3 )
{
    INT VAR_4 = 0, VAR_5 = 1;

    if (!VAR_2)
        return VAR_0;
    if (*VAR_2 == '-')
    {
        VAR_5 = -1;
        VAR_2++;
    }
    if (!*VAR_2)
        return VAR_0;
    while (*VAR_2)
    {
        if( *VAR_2 < '0' || *VAR_2 > '9' )
            return VAR_0;
        VAR_4 = VAR_4*10 + (*VAR_2 - '0');
        VAR_2++;
    }
    *VAR_3 = VAR_4*VAR_5;
    return VAR_1;
}
