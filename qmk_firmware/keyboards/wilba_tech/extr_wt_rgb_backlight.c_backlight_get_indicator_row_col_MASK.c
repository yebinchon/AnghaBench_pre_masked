
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int,int*) ;

void FUNC_1( uint8_t VAR_2, uint8_t *VAR_3, uint8_t *VAR_4 )
{
    if ( VAR_2 == 255 || VAR_2 == 254 )
    {

        *VAR_3 = VAR_2;
        *VAR_4 = 0;
        return;
    }
    for ( uint8_t VAR_5 = 0; VAR_5 < VAR_1; VAR_5++ )
    {
        for ( uint8_t VAR_6 = 0; VAR_6 < VAR_0; VAR_6++ )
        {
            uint8_t VAR_7 = 255;
            FUNC_0( VAR_5, VAR_6, &VAR_7 );
            if ( VAR_7 == VAR_2 )
            {
                *VAR_3 = VAR_5;
                *VAR_4 = VAR_6;
                return;
            }
        }
    }
}
