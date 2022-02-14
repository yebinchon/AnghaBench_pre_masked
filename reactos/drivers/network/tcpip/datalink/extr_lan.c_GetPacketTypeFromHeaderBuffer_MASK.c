
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ ULONG ;
struct TYPE_7__ {scalar_t__ HeaderSize; int Media; } ;
struct TYPE_6__ {int EType; } ;
typedef TYPE_1__* PVOID ;
typedef int * PULONG ;
typedef TYPE_2__* PLAN_ADAPTER ;
typedef TYPE_1__* PETH_HEADER ;
typedef int NDIS_STATUS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int FUNC_0 (int ,char*) ;

NDIS_STATUS
FUNC_1(PLAN_ADAPTER VAR_4,
                              PVOID VAR_5,
                              ULONG VAR_6,
                              PULONG VAR_7)
{
    PETH_HEADER VAR_8 = VAR_5;

    if (VAR_6 < VAR_4->HeaderSize)
    {
        FUNC_0(VAR_0, ("Runt frame (size %d).\n", VAR_6));
        return VAR_2;
    }

    switch (VAR_4->Media)
    {
        case 128:






            *VAR_7 = VAR_8->EType;
            break;

        default:
            FUNC_0(VAR_1, ("Unsupported media.\n"));


            return VAR_2;
    }

    FUNC_0(VAR_0, ("EtherType (0x%X).\n", *VAR_7));

    return VAR_3;
}
