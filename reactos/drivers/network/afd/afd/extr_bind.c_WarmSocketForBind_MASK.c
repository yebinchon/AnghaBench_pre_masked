
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_9__ ;
typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_16__ {TYPE_1__* Address; } ;
struct TYPE_15__ {int Buffer; int Length; } ;
struct TYPE_13__ {scalar_t__ Size; scalar_t__ Content; int Window; } ;
struct TYPE_12__ {int Object; int Handle; } ;
struct TYPE_11__ {int InFlightRequest; } ;
struct TYPE_14__ {int Flags; int AddressFrom; TYPE_4__ Recv; TYPE_3__ AddressFile; TYPE_2__ ReceiveIrp; TYPE_9__* LocalAddress; TYPE_8__ TdiDeviceName; } ;
struct TYPE_10__ {int AddressType; } ;
typedef TYPE_5__* PAFD_FCB ;
typedef scalar_t__ NTSTATUS ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,scalar_t__,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_3 (TYPE_8__*,TYPE_9__*,int ,int *,int *) ;
 scalar_t__ FUNC_4 (int ,scalar_t__*) ;
 scalar_t__ FUNC_5 (int *,int ,int ,int ,scalar_t__,int ,int ,TYPE_5__*) ;

NTSTATUS FUNC_6( PAFD_FCB VAR_11, ULONG VAR_12 ) {
    NTSTATUS VAR_13;

    FUNC_0(VAR_1,("Called (AF %u)\n",
                            VAR_11->LocalAddress->Address[0].AddressType));

    if( !VAR_11->TdiDeviceName.Length || !VAR_11->TdiDeviceName.Buffer ) {
        FUNC_0(VAR_2,("Null Device\n"));
        return VAR_7;
    }
    if( !VAR_11->LocalAddress ) {
        FUNC_0(VAR_2,("No local address\n"));
        return VAR_5;
    }

    VAR_13 = FUNC_3(&VAR_11->TdiDeviceName,
                                VAR_11->LocalAddress,
                                VAR_12,
                                &VAR_11->AddressFile.Handle,
                                &VAR_11->AddressFile.Object );
    if (!FUNC_2(VAR_13))
        return VAR_13;

    if (VAR_11->Flags & VAR_0)
    {
        if (!VAR_11->Recv.Size)
        {
            VAR_13 = FUNC_4(VAR_11->AddressFile.Object,
                                               &VAR_11->Recv.Size);
        }

        if (FUNC_2(VAR_13) && !VAR_11->Recv.Window)
        {
            VAR_11->Recv.Window = FUNC_1(VAR_4,
                                                     VAR_11->Recv.Size,
                                                     VAR_10);

            if (!VAR_11->Recv.Window)
                VAR_13 = VAR_6;
        }

        if (FUNC_2(VAR_13) && VAR_11->Recv.Content < VAR_11->Recv.Size)
        {
            VAR_13 = FUNC_5(&VAR_11->ReceiveIrp.InFlightRequest,
                                        VAR_11->AddressFile.Object,
                                        0,
                                        VAR_11->Recv.Window,
                                        VAR_11->Recv.Size,
                                        VAR_11->AddressFrom,
                                        VAR_3,
                                        VAR_11);


            if( VAR_13 == VAR_8 ) VAR_13 = VAR_9;
        }
    }

    FUNC_0(VAR_1,("Returning %x\n", VAR_13));

    return VAR_13;
}
