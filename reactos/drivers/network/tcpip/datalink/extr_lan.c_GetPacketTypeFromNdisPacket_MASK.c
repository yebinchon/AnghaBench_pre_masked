
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_4__ {int HeaderSize; } ;
typedef int PVOID ;
typedef int PULONG ;
typedef int PNDIS_PACKET ;
typedef TYPE_1__* PLAN_ADAPTER ;
typedef int NDIS_STATUS ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_1__*,int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ,char*) ;

NDIS_STATUS
FUNC_5(PLAN_ADAPTER VAR_5,
                            PNDIS_PACKET VAR_6,
                            PULONG VAR_7)
{
    PVOID VAR_8;
    ULONG VAR_9;
    NDIS_STATUS VAR_10;

    VAR_8 = FUNC_1(VAR_4,
                                         VAR_5->HeaderSize,
                                         VAR_1);
    if (!VAR_8)
        return VAR_3;


    VAR_9 = FUNC_0(VAR_8,
                                     VAR_6,
                                     0,
                                     VAR_5->HeaderSize);
    if (VAR_9 != VAR_5->HeaderSize)
    {

        FUNC_2(VAR_8, VAR_1);
        FUNC_4(VAR_0, ("Runt frame (size %d).\n", VAR_9));
        return VAR_2;
    }

    VAR_10 = FUNC_3(VAR_5,
                                           VAR_8,
                                           VAR_9,
                                           VAR_7);

    FUNC_2(VAR_8, VAR_1);

    return VAR_10;
}
