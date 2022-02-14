
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int,int) ;
 int VAR_0 ;

void FUNC_1(void)
{


    switch ( (VAR_0 & 0x30) >> 4 )
    {
        case 0:
        {
            FUNC_0( 255, 0, 0 );
            break;
        }
        case 1:
        {
            FUNC_0( 0, 255, 0 );
            break;
        }
        case 2:
        {
            FUNC_0( 0, 0, 255 );
            break;
        }
        case 3:
        {
            FUNC_0( 255, 255, 255 );
            break;
        }
    }
}
