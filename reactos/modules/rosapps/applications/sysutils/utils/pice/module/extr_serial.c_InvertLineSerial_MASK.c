
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_2__ {int line; int type; } ;
typedef int SERIAL_DATA_PACKET_INVERTLINE ;
typedef int PUCHAR ;
typedef int PSERIAL_PACKET ;
typedef TYPE_1__* PSERIAL_DATA_PACKET_INVERTLINE ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;

void FUNC_2(ULONG VAR_2)
{
    PSERIAL_DATA_PACKET_INVERTLINE VAR_3;
    PSERIAL_PACKET VAR_4;

    VAR_3 = (PSERIAL_DATA_PACKET_INVERTLINE)VAR_1;
    VAR_3->type = VAR_0;
    VAR_3->line = VAR_2;

    VAR_4 = FUNC_0((PUCHAR)VAR_3,sizeof(SERIAL_DATA_PACKET_INVERTLINE));
    FUNC_1(VAR_4);
}
