
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {int OverSampling; int HwFlowCtl; int Mode; int Parity; int StopBits; int WordLength; int BaudRate; } ;
struct TYPE_9__ {TYPE_1__ Init; } ;
struct TYPE_8__ {TYPE_3__ uart; } ;
typedef TYPE_2__ pyb_uart_obj_t ;
typedef TYPE_3__ UART_HandleTypeDef ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_3__*,int ,int) ;
 int FUNC_1 (TYPE_2__*) ;

bool FUNC_2(pyb_uart_obj_t *VAR_6, uint32_t VAR_7) {
    return FUNC_1(VAR_6);
}
