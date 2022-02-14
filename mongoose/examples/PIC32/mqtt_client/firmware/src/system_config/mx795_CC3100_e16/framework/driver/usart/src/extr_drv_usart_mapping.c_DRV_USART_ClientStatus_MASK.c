
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DRV_USART_CLIENT_STATUS ;
typedef int DRV_HANDLE ;


 int VAR_0 ;
 int FUNC_0 () ;


DRV_USART_CLIENT_STATUS FUNC_1 ( DRV_HANDLE VAR_1 )
{
    uintptr_t VAR_2;
    DRV_USART_CLIENT_STATUS VAR_3;

    VAR_2 = VAR_1 & 0x00FF;

    switch(VAR_2)
    {
        case 128:
        {
            VAR_3 = FUNC_0();
            break;
        }
        default:
        {
            VAR_3 = VAR_0;
            break;
        }
    }
    return VAR_3;
}
