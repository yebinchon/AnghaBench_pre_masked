
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DRV_USART_TRANSFER_STATUS ;
typedef int DRV_HANDLE ;


 int FUNC_0 () ;


DRV_USART_TRANSFER_STATUS FUNC_1( const DRV_HANDLE VAR_0 )
{
    uintptr_t VAR_1;
    DRV_USART_TRANSFER_STATUS VAR_2;

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
            VAR_2 = (DRV_USART_TRANSFER_STATUS)((void*)0);
            break;
        }
    }
    return VAR_2;
}
