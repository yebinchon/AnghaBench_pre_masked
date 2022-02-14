
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_5__ {int BufferLength; void* Buffer; int NetEvent; } ;
typedef int * PVOID ;
typedef TYPE_1__* PNET_PNP_EVENT ;
typedef int NET_PNP_EVENT_CODE ;
typedef int NET_PNP_EVENT ;


 void* FUNC_0 (int ,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_2 (int ,char*) ;
 int VAR_1 ;
 int FUNC_3 (void*,int *,int) ;
 int FUNC_4 (TYPE_1__*,int) ;

PNET_PNP_EVENT
FUNC_5(
    NET_PNP_EVENT_CODE VAR_2,
    PVOID VAR_3,
    ULONG VAR_4)
{
    PNET_PNP_EVENT VAR_5;

    VAR_5 = FUNC_0(VAR_1, sizeof(NET_PNP_EVENT));
    if (!VAR_5) {
        FUNC_2(VAR_0, ("Insufficient resources\n"));
        return ((void*)0);
    }

    FUNC_4(VAR_5, sizeof(NET_PNP_EVENT));

    VAR_5->NetEvent = VAR_2;

    if (VAR_3 != ((void*)0))
    {
        VAR_5->Buffer = FUNC_0(VAR_1, VAR_4);
        if (!VAR_5->Buffer)
        {
            FUNC_2(VAR_0, ("Insufficient resources\n"));
            FUNC_1(VAR_5);
            return ((void*)0);
        }

        VAR_5->BufferLength = VAR_4;

        FUNC_3(VAR_5->Buffer, VAR_3, VAR_5->BufferLength);
    }

    return VAR_5;
}
