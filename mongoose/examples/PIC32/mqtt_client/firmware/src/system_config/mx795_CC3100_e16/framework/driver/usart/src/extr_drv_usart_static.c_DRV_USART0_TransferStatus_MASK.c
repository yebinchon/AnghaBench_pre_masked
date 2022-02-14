
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DRV_USART_TRANSFER_STATUS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_4 ;

DRV_USART_TRANSFER_STATUS FUNC_3( void )
{
    DRV_USART_TRANSFER_STATUS VAR_5 = 0;


    if(FUNC_0(VAR_4))
    {
        VAR_5|= VAR_0;
    }
    else
    {
        VAR_5|= VAR_1;
    }


    if(FUNC_2(VAR_4))
    {
        VAR_5|= VAR_2;
    }


    if(FUNC_1(VAR_4))
    {
        VAR_5|= VAR_3;
    }

    return(VAR_5);
}
