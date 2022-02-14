
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* USHORT ;
typedef int ULONG_PTR ;
typedef int ULONG ;
typedef int UCHAR ;
struct TYPE_5__ {int HWAddrLen; int ProtoAddrLen; void* Opcode; void* ProtoType; void* HWType; } ;
struct TYPE_4__ {scalar_t__ HeaderSize; scalar_t__ MinFrameSize; } ;
typedef scalar_t__ PVOID ;
typedef int PUINT ;
typedef int * PNDIS_PACKET ;
typedef TYPE_1__* PIP_INTERFACE ;
typedef int PCHAR ;
typedef TYPE_2__* PARP_HEADER ;
typedef int NDIS_STATUS ;
typedef int ARP_HEADER ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int **,int *,int) ;
 int VAR_0 ;
 int FUNC_2 (int *,int ,int *,int ) ;
 int FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__,scalar_t__,int) ;
 int FUNC_6 (scalar_t__,int) ;
 int FUNC_7 (int ,char*) ;

PNDIS_PACKET FUNC_8(
    PIP_INTERFACE VAR_1,
    USHORT VAR_2,
    USHORT VAR_3,
    UCHAR VAR_4,
    UCHAR VAR_5,
    PVOID VAR_6,
    PVOID VAR_7,
    PVOID VAR_8,
    PVOID VAR_9,
    USHORT VAR_10)
{
    PNDIS_PACKET VAR_11;
    NDIS_STATUS VAR_12;
    PARP_HEADER VAR_13;
    PVOID VAR_14;
    ULONG VAR_15, VAR_16;

    FUNC_7(VAR_0, ("Called.\n"));


    VAR_15 = sizeof(ARP_HEADER) +
        2 * VAR_4 +
        2 * VAR_5;
    VAR_15 = FUNC_3(VAR_15, VAR_1->MinFrameSize - VAR_1->HeaderSize);

    VAR_12 = FUNC_1( &VAR_11, ((void*)0), VAR_15 );
    if( !FUNC_4(VAR_12) ) return ((void*)0);

    FUNC_2( VAR_11, 0, (PCHAR *)&VAR_14, (PUINT)&VAR_16 );
    FUNC_0(VAR_14);

    FUNC_6(VAR_14, VAR_15);
    VAR_13 = (PARP_HEADER)((ULONG_PTR)VAR_14);
    VAR_13->HWType = VAR_2;
    VAR_13->ProtoType = VAR_3;
    VAR_13->HWAddrLen = VAR_4;
    VAR_13->ProtoAddrLen = VAR_5;
    VAR_13->Opcode = VAR_10;
    VAR_14 = (PVOID)((ULONG_PTR)VAR_13 + sizeof(ARP_HEADER));


    FUNC_5(VAR_14, VAR_6, VAR_4);
    VAR_14 = (PVOID)((ULONG_PTR)VAR_14 + VAR_4);


    FUNC_5(VAR_14, VAR_7, VAR_5);

    if (VAR_8) {
        VAR_14 = (PVOID)((ULONG_PTR)VAR_14 + VAR_5);

        FUNC_5(VAR_14, VAR_8, VAR_4);
        VAR_14 = (PVOID)((ULONG_PTR)VAR_14 + VAR_4);
    } else

        VAR_14 = (PVOID)((ULONG_PTR)VAR_14 + VAR_5 + VAR_4);


    FUNC_5(VAR_14, VAR_9, VAR_5);

    return VAR_11;
}
