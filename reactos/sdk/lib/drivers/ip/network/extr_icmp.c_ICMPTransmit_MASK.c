
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int VOID ;
typedef scalar_t__ USHORT ;
struct TYPE_8__ {int IPv4Address; } ;
struct TYPE_11__ {TYPE_1__ Address; } ;
struct TYPE_10__ {scalar_t__ Checksum; } ;
struct TYPE_9__ {int (* Free ) (TYPE_2__*) ;TYPE_5__ DstAddr; scalar_t__ HeaderSize; scalar_t__ TotalSize; scalar_t__ Data; } ;
typedef int PVOID ;
typedef int PNEIGHBOR_CACHE_ENTRY ;
typedef int PIP_TRANSMIT_COMPLETE ;
typedef TYPE_2__* PIP_PACKET ;
typedef TYPE_3__* PICMP_HEADER ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__,int ) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (TYPE_2__*) ;

VOID FUNC_5(
    PIP_PACKET VAR_1,
    PIP_TRANSMIT_COMPLETE VAR_2,
    PVOID VAR_3)






{
    PNEIGHBOR_CACHE_ENTRY VAR_4;

    FUNC_3(VAR_0, ("Called.\n"));


    ((PICMP_HEADER)VAR_1->Data)->Checksum = (USHORT)
        FUNC_1(VAR_1->Data, VAR_1->TotalSize - VAR_1->HeaderSize, 0);


    if ((VAR_4 = FUNC_2(&VAR_1->DstAddr))) {

        FUNC_0(VAR_1, VAR_4);
    } else {

        FUNC_3(VAR_0, ("No route to destination address 0x%X.\n",
                                 VAR_1->DstAddr.Address.IPv4Address));
        VAR_1->Free(VAR_1);
    }
}
