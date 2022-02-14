
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int DRV_HANDLE ;


 int FUNC_0 () ;

 int FUNC_1 (int,char*) ;

uint8_t FUNC_2( const DRV_HANDLE VAR_0 )
{
    uintptr_t VAR_1;
    uint8_t VAR_2;

    VAR_1 = VAR_0 & 0x00FF;

    switch(VAR_1)
    {
        case 128:
        {
            VAR_2 = FUNC_0();
            break;
        }
        default:
        {
            FUNC_1(0, "Incorrect Driver Handle");
            VAR_2 = 0;
            break;
        }
    }
    return VAR_2;
}
