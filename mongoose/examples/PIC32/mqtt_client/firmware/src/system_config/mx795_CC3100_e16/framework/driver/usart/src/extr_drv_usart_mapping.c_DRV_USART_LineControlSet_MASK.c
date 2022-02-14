
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DRV_USART_LINE_CONTROL_SET_RESULT ;
typedef int DRV_USART_LINE_CONTROL ;
typedef int DRV_HANDLE ;


 int FUNC_0 (int const) ;

 int VAR_0 ;

DRV_USART_LINE_CONTROL_SET_RESULT FUNC_1(const DRV_HANDLE VAR_1,const DRV_USART_LINE_CONTROL VAR_2)
{
    uintptr_t VAR_3;
    DRV_USART_LINE_CONTROL_SET_RESULT VAR_4;

    VAR_3 = VAR_1 & 0x00FF;

    switch(VAR_3)
    {
        case 128:
        {
            VAR_4 = FUNC_0(VAR_2);
            break;
        }
        default:
        {
            VAR_4 = VAR_0;
            break;
        }
    }
    return VAR_4;
}
