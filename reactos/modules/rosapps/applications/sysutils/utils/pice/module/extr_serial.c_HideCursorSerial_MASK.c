
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ UCHAR ;
struct TYPE_2__ {scalar_t__ state; int type; } ;
typedef int SERIAL_DATA_PACKET_CURSOR ;
typedef int PUCHAR ;
typedef int PSERIAL_PACKET ;
typedef TYPE_1__* PSERIAL_DATA_PACKET_CURSOR ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 () ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

void FUNC_4(void)
{
    PSERIAL_DATA_PACKET_CURSOR VAR_5;
    PSERIAL_PACKET VAR_6;

    FUNC_1();

    VAR_3 = VAR_0;

    VAR_5 = (PSERIAL_DATA_PACKET_CURSOR)VAR_4;
    VAR_5->type = VAR_1;
    VAR_5->state = (UCHAR)VAR_2;

    VAR_6 = FUNC_0((PUCHAR)VAR_5,sizeof(SERIAL_DATA_PACKET_CURSOR));
    FUNC_3(VAR_6);

    FUNC_2();
}
