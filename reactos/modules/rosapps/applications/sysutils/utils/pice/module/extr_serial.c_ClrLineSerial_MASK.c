
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_2__ {int line; int bkcol; int fgcol; int type; } ;
typedef int SERIAL_DATA_PACKET_CLRLINE ;
typedef int PUCHAR ;
typedef int PSERIAL_PACKET ;
typedef TYPE_1__* PSERIAL_DATA_PACKET_CLRLINE ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

void FUNC_2(ULONG VAR_4)
{
    PSERIAL_DATA_PACKET_CLRLINE VAR_5;
    PSERIAL_PACKET VAR_6;

    VAR_5 = (PSERIAL_DATA_PACKET_CLRLINE)VAR_3;
    VAR_5->type = VAR_0;
    VAR_5->fgcol = VAR_2;
    VAR_5->bkcol = VAR_1;
    VAR_5->line = VAR_4;

    VAR_6 = FUNC_0((PUCHAR)VAR_5,sizeof(SERIAL_DATA_PACKET_CLRLINE));
    FUNC_1(VAR_6);
}
