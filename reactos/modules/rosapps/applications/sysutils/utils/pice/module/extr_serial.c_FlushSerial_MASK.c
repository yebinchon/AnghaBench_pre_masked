
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int string; int bkcol; int fgcol; int y; int x; int type; } ;
typedef int SERIAL_DATA_PACKET_PRINT ;
typedef int PUCHAR ;
typedef int PSERIAL_PACKET ;
typedef TYPE_1__* PSERIAL_DATA_PACKET_PRINT ;


 int FUNC_0 (int ,scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (int ,scalar_t__*) ;
 scalar_t__ FUNC_2 (scalar_t__*) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

void FUNC_4(void)
{
    PSERIAL_DATA_PACKET_PRINT VAR_8;
    PSERIAL_PACKET VAR_9;

    VAR_8 = (PSERIAL_DATA_PACKET_PRINT)VAR_6;
    VAR_8->type = VAR_0;
    VAR_8->x = VAR_4;
    VAR_8->y = VAR_5;
    VAR_8->fgcol = VAR_2;
    VAR_8->bkcol = VAR_1;
    VAR_3[VAR_7++] = 0;
    FUNC_1(VAR_8->string,VAR_3);
    VAR_7 = 0;

    VAR_9 = FUNC_0((PUCHAR)VAR_8,sizeof(SERIAL_DATA_PACKET_PRINT)+FUNC_2(VAR_3));
    FUNC_3(VAR_9);
}
