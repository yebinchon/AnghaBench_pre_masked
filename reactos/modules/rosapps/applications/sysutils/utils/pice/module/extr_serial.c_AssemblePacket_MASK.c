
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_4__ {int packet_size; int packet_header_chksum; scalar_t__ packet_chksum; } ;
struct TYPE_5__ {int data; TYPE_1__ header; } ;
typedef int SERIAL_PACKET_HEADER ;
typedef int PUCHAR ;
typedef TYPE_2__* PSERIAL_PACKET ;


 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ,int) ;
 scalar_t__ VAR_0 ;

PSERIAL_PACKET FUNC_2(PUCHAR VAR_1,ULONG VAR_2)
{
    PSERIAL_PACKET VAR_3;
    ULONG VAR_4;

    VAR_3 = (PSERIAL_PACKET)VAR_0;


    VAR_3->header.packet_chksum = FUNC_0(VAR_1,VAR_2);
    VAR_3->header.packet_size = VAR_2;
    VAR_3->header.packet_header_chksum = 0;
    VAR_4 = (ULONG)FUNC_0((PUCHAR)VAR_3,sizeof(SERIAL_PACKET_HEADER));
    VAR_3->header.packet_header_chksum = VAR_4;

    FUNC_1(VAR_3->data,VAR_1,VAR_2);

    return VAR_3;
}
