
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_8__ ;
typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_12__ ;


typedef scalar_t__ UINT ;
struct TYPE_27__ {scalar_t__ BytesUsed; scalar_t__ Content; } ;
struct TYPE_30__ {scalar_t__ LastReceiveStatus; scalar_t__* PollStatus; int FileObject; int DeviceExt; int PollState; int * PendingIrpList; TYPE_5__ Recv; scalar_t__ Overread; } ;
struct TYPE_29__ {int BufferCount; int BufferArray; } ;
struct TYPE_26__ {scalar_t__ Information; scalar_t__ Status; } ;
struct TYPE_24__ {int ListEntry; } ;
struct TYPE_25__ {TYPE_2__ Overlay; } ;
struct TYPE_28__ {scalar_t__ MdlAddress; TYPE_4__ IoStatus; TYPE_3__ Tail; } ;
struct TYPE_23__ {int ListEntry; } ;
struct TYPE_22__ {TYPE_1__ Overlay; } ;
typedef int PLIST_ENTRY ;
typedef TYPE_6__* PIRP ;
typedef int PIO_STACK_LOCATION ;
typedef TYPE_7__* PAFD_RECV_INFO ;
typedef TYPE_8__* PAFD_FCB ;
typedef scalar_t__ NTSTATUS ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_6__* FUNC_1 (int ,int ,int ) ;
 scalar_t__ FUNC_2 (TYPE_8__*) ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 TYPE_7__* FUNC_3 (TYPE_6__*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (TYPE_6__*,int ) ;
 int FUNC_6 (TYPE_6__*) ;
 int FUNC_7 (TYPE_6__*,int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int VAR_9 ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int *) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 TYPE_12__ VAR_14 ;
 scalar_t__ FUNC_11 (TYPE_8__*,TYPE_7__*,scalar_t__*) ;
 int FUNC_12 (int ,int ,int ) ;
 int FUNC_13 (TYPE_6__*,int ) ;

__attribute__((used)) static NTSTATUS FUNC_14( PAFD_FCB VAR_15, PIRP VAR_16 ) {
    PLIST_ENTRY VAR_17;
    PIRP VAR_18;
    PIO_STACK_LOCATION VAR_19;
    PAFD_RECV_INFO VAR_20;
    UINT VAR_21 = 0;
    NTSTATUS VAR_22 = VAR_12, VAR_23 = VAR_11;

    FUNC_0(VAR_9,("%p %p\n", VAR_15, VAR_16));

    FUNC_0(VAR_9,("FCB %p Receive data waiting %u\n",
                            VAR_15, VAR_15->Recv.Content));

    if( FUNC_2( VAR_15 ) ) {



        while( !FUNC_8( &VAR_15->PendingIrpList[VAR_6] ) ) {
            VAR_17 = FUNC_10(&VAR_15->PendingIrpList[VAR_6]);
            VAR_18 = FUNC_1(VAR_17, VAR_8, VAR_14.Overlay.ListEntry);
            VAR_19 = FUNC_6( VAR_18 );
            VAR_20 = FUNC_3(VAR_18, VAR_19);

            FUNC_0(VAR_9,("Completing recv %p (%u)\n", VAR_18,
                                    VAR_21));
            FUNC_12( VAR_20->BufferArray,
                           VAR_20->BufferCount, VAR_3 );
            if (VAR_15->Overread && VAR_15->LastReceiveStatus == VAR_12)
            {

                VAR_22 = VAR_10;
            }
            else
            {

                VAR_22 = VAR_15->LastReceiveStatus;
            }
            VAR_18->IoStatus.Status = VAR_22;
            VAR_18->IoStatus.Information = 0;
            if( VAR_18 == VAR_16 ) VAR_23 = VAR_22;
            if( VAR_18->MdlAddress ) FUNC_13( VAR_18, FUNC_6( VAR_18 ) );
            (void)FUNC_7(VAR_18, ((void*)0));
            FUNC_5( VAR_18, VAR_7 );
            VAR_15->Overread = VAR_13;
        }
    } else {



        FUNC_0(VAR_9,("FCB %p Receive data waiting %u\n",
                                VAR_15, VAR_15->Recv.Content));



        while( !FUNC_8( &VAR_15->PendingIrpList[VAR_6] ) ) {
            VAR_17 = FUNC_10(&VAR_15->PendingIrpList[VAR_6]);
            VAR_18 = FUNC_1(VAR_17, VAR_8, VAR_14.Overlay.ListEntry);
            VAR_19 = FUNC_6( VAR_18 );
            VAR_20 = FUNC_3(VAR_18, VAR_19);

            FUNC_0(VAR_9,("RecvReq @ %p\n", VAR_20));

            VAR_22 = FUNC_11
            ( VAR_15, VAR_20, &VAR_21 );

            if( VAR_22 == VAR_11 ) {
                FUNC_0(VAR_9,("Ran out of data for %p\n", VAR_18));
                FUNC_4(&VAR_15->PendingIrpList[VAR_6],
                               &VAR_18->Tail.Overlay.ListEntry);
                break;
            } else {
                FUNC_0(VAR_9,("Completing recv %p (%u)\n", VAR_18,
                                        VAR_21));
                FUNC_12( VAR_20->BufferArray,
                               VAR_20->BufferCount, VAR_3 );
                VAR_18->IoStatus.Status = VAR_22;
                VAR_18->IoStatus.Information = VAR_21;
                if( VAR_18 == VAR_16 ) {
                    VAR_23 = VAR_22;
                }
                if( VAR_18->MdlAddress ) FUNC_13( VAR_18, FUNC_6( VAR_18 ) );
                (void)FUNC_7(VAR_18, ((void*)0));
                FUNC_5( VAR_18, VAR_7 );
            }
        }
    }

    if( VAR_15->Recv.Content - VAR_15->Recv.BytesUsed &&
        FUNC_8(&VAR_15->PendingIrpList[VAR_6]) ) {
        VAR_15->PollState |= VAR_2;
        VAR_15->PollStatus[VAR_5] = VAR_12;
        FUNC_9( VAR_15->DeviceExt, VAR_15->FileObject );
    }
    else
    {
        VAR_15->PollState &= ~VAR_2;
    }


    if (FUNC_2(VAR_15))
    {
        if (VAR_15->LastReceiveStatus == VAR_12)
        {
            VAR_15->PollState |= VAR_1;
        }
        else
        {
            VAR_15->PollState |= VAR_0;
        }
        VAR_15->PollStatus[VAR_4] = VAR_15->LastReceiveStatus;
        FUNC_9(VAR_15->DeviceExt, VAR_15->FileObject);
    }

    FUNC_0(VAR_9,("RetStatus for irp %p is %x\n", VAR_16, VAR_23));

    return VAR_23;
}
