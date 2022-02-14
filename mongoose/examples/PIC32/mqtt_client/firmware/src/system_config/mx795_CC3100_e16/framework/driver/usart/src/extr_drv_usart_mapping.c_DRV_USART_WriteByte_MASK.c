
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int DRV_HANDLE ;


 int FUNC_0 (int const) ;


void FUNC_1( const DRV_HANDLE VAR_0, const uint8_t VAR_1)
{
    uintptr_t VAR_2;

    VAR_2 = VAR_0 & 0x00FF;

    switch(VAR_2)
    {
        case 128:
        {
            FUNC_0(VAR_1);
            break;
        }
        default:
        {
            break;
        }
    }
}
