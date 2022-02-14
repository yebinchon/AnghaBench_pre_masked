
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ UCHAR ;
struct TYPE_2__ {int build_number; int minor_version; int major_version; int type; } ;
typedef int SERIAL_DATA_PACKET_POLL ;
typedef int PUCHAR ;
typedef int PSERIAL_PACKET ;
typedef TYPE_1__* PSERIAL_DATA_PACKET_POLL ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

UCHAR FUNC_2(void)
{
    UCHAR VAR_6;
    PSERIAL_DATA_PACKET_POLL VAR_7;
    PSERIAL_PACKET VAR_8;

    VAR_7 = (PSERIAL_DATA_PACKET_POLL)VAR_4;
    VAR_7->type = VAR_0;
    VAR_7->major_version = VAR_2;
    VAR_7->minor_version = VAR_3;
    VAR_7->build_number = VAR_1;

    VAR_8 = FUNC_0((PUCHAR)VAR_7,sizeof(SERIAL_DATA_PACKET_POLL));
    FUNC_1(VAR_8);

    VAR_6 = VAR_5;

    VAR_5 = 0;

    return VAR_6;
}
