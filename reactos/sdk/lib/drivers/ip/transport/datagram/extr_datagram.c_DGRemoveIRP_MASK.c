
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {struct TYPE_11__* Flink; } ;
struct TYPE_13__ {TYPE_1__ ReceiveQueue; } ;
struct TYPE_12__ {scalar_t__ Irp; int ListEntry; } ;
typedef TYPE_1__* PLIST_ENTRY ;
typedef scalar_t__ PIRP ;
typedef TYPE_2__* PDATAGRAM_RECEIVE_REQUEST ;
typedef TYPE_3__* PADDRESS_FILE ;
typedef int KIRQL ;
typedef int BOOLEAN ;


 TYPE_2__* FUNC_0 (TYPE_1__*,int ,TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_3__*,int *) ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char*) ;
 int VAR_4 ;
 int FUNC_5 (TYPE_3__*,int ) ;

BOOLEAN FUNC_6(
    PADDRESS_FILE VAR_5,
    PIRP VAR_6)
{
    PLIST_ENTRY VAR_7;
    PDATAGRAM_RECEIVE_REQUEST VAR_8;
    KIRQL VAR_9;
    BOOLEAN VAR_10 = VAR_2;

    FUNC_4(VAR_3, ("Called (Cancel IRP %08x for file %08x).\n",
                            VAR_6, VAR_5));

    FUNC_2(VAR_5, &VAR_9);

    for( VAR_7 = VAR_5->ReceiveQueue.Flink;
         VAR_7 != &VAR_5->ReceiveQueue;
         VAR_7 = VAR_7->Flink )
    {
        VAR_8 = FUNC_0
            (VAR_7, VAR_0, VAR_7);

        FUNC_4(VAR_3, ("Request: %08x?\n", VAR_8));

        if (VAR_8->Irp == VAR_6)
        {
            FUNC_3(&VAR_8->ListEntry);
            FUNC_1(VAR_8, VAR_1);
            VAR_10 = VAR_4;
            break;
        }
    }

    FUNC_5(VAR_5, VAR_9);

    FUNC_4(VAR_3, ("Done.\n"));

    return VAR_10;
}
