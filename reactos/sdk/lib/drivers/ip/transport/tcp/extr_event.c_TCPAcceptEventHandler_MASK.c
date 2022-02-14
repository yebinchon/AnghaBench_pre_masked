
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_24__ {TYPE_3__* SocketContext; int Lock; int ListenRequest; } ;
struct TYPE_23__ {int Parameters; } ;
struct TYPE_22__ {scalar_t__ state; } ;
struct TYPE_20__ {int RequestContext; } ;
struct TYPE_21__ {TYPE_5__* AssociatedEndpoint; scalar_t__ Information; int Status; TYPE_1__ Request; } ;
typedef int PTDI_REQUEST_KERNEL ;
typedef TYPE_2__* PTDI_BUCKET ;
typedef TYPE_3__* PTCP_PCB ;
typedef int PLIST_ENTRY ;
typedef int PIRP ;
typedef TYPE_4__* PIO_STACK_LOCATION ;
typedef TYPE_5__* PCONNECTION_ENDPOINT ;
typedef int NTSTATUS ;
typedef int KIRQL ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 TYPE_2__* FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (TYPE_5__*,TYPE_2__*,int ) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (int *,int *) ;
 int VAR_2 ;
 TYPE_4__* FUNC_5 (int ) ;
 int FUNC_6 (TYPE_3__*,TYPE_3__*,TYPE_5__*) ;
 int FUNC_7 (TYPE_5__*,int ,int ) ;
 int FUNC_8 (TYPE_5__*,int *) ;
 int FUNC_9 (TYPE_5__*) ;
 int VAR_3 ;
 int FUNC_10 (TYPE_3__*,int ) ;
 int VAR_4 ;
 int FUNC_11 (int ,char*) ;
 int VAR_5 ;
 int FUNC_12 (TYPE_5__*,int ) ;

VOID
FUNC_13(void *VAR_6, PTCP_PCB VAR_7)
{
    PCONNECTION_ENDPOINT VAR_8 = (PCONNECTION_ENDPOINT)VAR_6;
    PTDI_BUCKET VAR_9;
    PLIST_ENTRY VAR_10;
    PIRP VAR_11;
    NTSTATUS VAR_12;
    KIRQL VAR_13;

    FUNC_9(VAR_8);

    while ((VAR_10 = FUNC_4(&VAR_8->ListenRequest, &VAR_8->Lock)))
    {
        PIO_STACK_LOCATION VAR_14;

        VAR_9 = FUNC_1( VAR_10, VAR_4, VAR_10 );

        VAR_11 = VAR_9->Request.RequestContext;
        VAR_14 = FUNC_5( VAR_11 );

        FUNC_11(VAR_1,("[IP, TCPAcceptEventHandler] Getting the socket\n"));

        VAR_12 = FUNC_10(VAR_7,
                                       (PTDI_REQUEST_KERNEL)&VAR_14->Parameters);

        FUNC_11(VAR_1,("Socket: Status: %x\n", VAR_12));

        VAR_9->Status = VAR_12;
        VAR_9->Information = 0;

        if (VAR_12 == VAR_3)
        {
            FUNC_8(VAR_9->AssociatedEndpoint, &VAR_13);


            FUNC_0( ((PTCP_PCB)VAR_9->AssociatedEndpoint->SocketContext)->state == VAR_0 );


            FUNC_7(VAR_9->AssociatedEndpoint, VAR_5, VAR_2);


            VAR_9->AssociatedEndpoint->SocketContext = VAR_7;

            FUNC_6(VAR_7, (PTCP_PCB)VAR_8->SocketContext, VAR_9->AssociatedEndpoint);

            FUNC_12(VAR_9->AssociatedEndpoint, VAR_13);
        }

        FUNC_3(VAR_9->AssociatedEndpoint);

        FUNC_2(VAR_8, VAR_9, VAR_2);

        if (VAR_12 == VAR_3)
        {
            break;
        }
    }

    FUNC_3(VAR_8);
}
