
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int ** VAR_2 ;
 size_t FUNC_0 (int *) ;

void FUNC_1( uint8_t VAR_3, uint8_t VAR_4, uint8_t *VAR_5 )
{
    *VAR_5 = 255;
    if ( VAR_3 < VAR_1 && VAR_4 < VAR_0 )
    {
        *VAR_5 = FUNC_0(&VAR_2[VAR_3][VAR_4]);
    }
}
