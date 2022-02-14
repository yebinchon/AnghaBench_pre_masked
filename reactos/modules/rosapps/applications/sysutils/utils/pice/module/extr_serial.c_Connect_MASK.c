
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* USHORT ;
struct TYPE_2__ {void* ysize; void* xsize; int type; } ;
typedef int SERIAL_DATA_PACKET_CONNECT ;
typedef int PUCHAR ;
typedef int PSERIAL_PACKET ;
typedef TYPE_1__* PSERIAL_DATA_PACKET_CONNECT ;
typedef int BOOLEAN ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;

BOOLEAN FUNC_2(USHORT VAR_2,USHORT VAR_3)
{
    PSERIAL_DATA_PACKET_CONNECT VAR_4;
    PSERIAL_PACKET VAR_5;

    VAR_4 = (PSERIAL_DATA_PACKET_CONNECT)VAR_1;
    VAR_4->type = VAR_0;
    VAR_4->xsize = VAR_2;
    VAR_4->ysize = VAR_3;

    VAR_5 = FUNC_0((PUCHAR)VAR_4,sizeof(SERIAL_DATA_PACKET_CONNECT));
    return FUNC_1(VAR_5);
}
