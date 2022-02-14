
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int int32_t ;
typedef int DRV_USART_BAUD_SET_RESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int VAR_3 ;
 int VAR_4 ;

DRV_USART_BAUD_SET_RESULT FUNC_8(uint32_t VAR_5)
{
    uint32_t VAR_6;
    int32_t VAR_7=0;
    int32_t VAR_8=0;
    DRV_USART_BAUD_SET_RESULT VAR_9 = VAR_2;





    VAR_6 = FUNC_7 ( VAR_0 );


    VAR_7 = ( (VAR_6/VAR_5) >> 4 ) - 1;
    VAR_8 = ( (VAR_6/VAR_5) >> 2 ) - 1;
    if ((VAR_8 >= 0) && (VAR_8 <= VAR_3))
    {
        FUNC_1(VAR_4);
        FUNC_2(VAR_4,VAR_6,VAR_5);
    }


    else if ((VAR_7 >= 0) && (VAR_7 <= VAR_3))
    {
        FUNC_0(VAR_4);
        FUNC_3(VAR_4, VAR_6, VAR_5);
    }
    else
    {
            VAR_9 = VAR_1;
    }
    return VAR_9;
}
