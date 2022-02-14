
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* UCHAR ;
struct TYPE_4__ {scalar_t__ usCurY; scalar_t__ usCurX; } ;
struct TYPE_3__ {void* y; void* x; void* state; int type; } ;
typedef int SERIAL_DATA_PACKET_CURSOR ;
typedef int PUCHAR ;
typedef int PSERIAL_PACKET ;
typedef TYPE_1__* PSERIAL_DATA_PACKET_CURSOR ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_2__* VAR_5 ;

void FUNC_4(void)
{
    PSERIAL_DATA_PACKET_CURSOR VAR_6;
    PSERIAL_PACKET VAR_7;

    FUNC_1();

    VAR_3 = VAR_2;

    VAR_6 = (PSERIAL_DATA_PACKET_CURSOR)VAR_4;
    VAR_6->type = VAR_1;
    VAR_6->state = (UCHAR)VAR_2;
    VAR_6->x = (UCHAR)VAR_5[VAR_0].usCurX;
    VAR_6->y = (UCHAR)VAR_5[VAR_0].usCurY;

    VAR_7 = FUNC_0((PUCHAR)VAR_6,sizeof(SERIAL_DATA_PACKET_CURSOR));
    FUNC_3(VAR_7);

    FUNC_2();
}
