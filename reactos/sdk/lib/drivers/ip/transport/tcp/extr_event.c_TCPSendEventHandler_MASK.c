
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int u16_t ;
typedef int VOID ;
typedef int ULONG ;
typedef int UINT ;
struct TYPE_15__ {int DisconnectTimer; int SendRequest; int Lock; int SocketContext; } ;
struct TYPE_14__ {int MdlAddress; } ;
struct TYPE_12__ {TYPE_3__* RequestContext; } ;
struct TYPE_13__ {scalar_t__ Status; int Information; TYPE_1__ Request; int Entry; } ;
typedef int PVOID ;
typedef TYPE_2__* PTDI_BUCKET ;
typedef int PMDL ;
typedef int PLIST_ENTRY ;
typedef TYPE_3__* PIRP ;
typedef TYPE_4__* PCONNECTION_ENDPOINT ;
typedef scalar_t__ NTSTATUS ;


 TYPE_2__* FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (TYPE_4__*,TYPE_2__*,int ) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int *,int *,int *) ;
 int FUNC_4 (int *,int *) ;
 int VAR_1 ;
 int FUNC_5 (TYPE_4__*,scalar_t__,int ) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (TYPE_4__*,int ,int ,int *,int ) ;
 int FUNC_9 (int ,int *,int *) ;
 int FUNC_10 (TYPE_4__*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_11 (int ) ;
 int VAR_4 ;
 int FUNC_12 (int ,char*) ;
 int VAR_5 ;

VOID
FUNC_13(void *VAR_6, const u16_t VAR_7)
{
    PCONNECTION_ENDPOINT VAR_8 = (PCONNECTION_ENDPOINT)VAR_6;
    PTDI_BUCKET VAR_9;
    PLIST_ENTRY VAR_10;
    PIRP VAR_11;
    NTSTATUS VAR_12;
    PMDL VAR_13;
    ULONG VAR_14;

    FUNC_10(VAR_8);

    while ((VAR_10 = FUNC_4(&VAR_8->SendRequest, &VAR_8->Lock)))
    {
        UINT VAR_15 = 0;
        PVOID VAR_16 = 0;

        VAR_9 = FUNC_0( VAR_10, VAR_4, VAR_10 );

        VAR_11 = VAR_9->Request.RequestContext;
        VAR_13 = VAR_11->MdlAddress;

        FUNC_12(VAR_0,
                    ("Getting the user buffer from %x\n", VAR_13));

        FUNC_9( VAR_13, &VAR_16, &VAR_15 );

        FUNC_12(VAR_0,
                    ("Writing %d bytes to %x\n", VAR_15, VAR_16));

        FUNC_12(VAR_0, ("Connection: %x\n", VAR_8));
        FUNC_12
        (VAR_0,
         ("Connection->SocketContext: %x\n",
          VAR_8->SocketContext));

        VAR_12 = FUNC_11(FUNC_8(VAR_8,
                                              VAR_16,
                                              VAR_15, &VAR_14, VAR_5));

        FUNC_12(VAR_0,("TCP Bytes: %d\n", VAR_14));

        if( VAR_12 == VAR_2 )
        {
            FUNC_3(&VAR_8->SendRequest,
                                        &VAR_9->Entry,
                                        &VAR_8->Lock);
            break;
        }
        else
        {
            FUNC_12(VAR_0,
                        ("Completing Send request: %x %x\n",
                         VAR_9->Request, VAR_12));

            VAR_9->Status = VAR_12;
            VAR_9->Information = (VAR_9->Status == VAR_3) ? VAR_14 : 0;

            FUNC_1(VAR_8, VAR_9, VAR_1);
        }
    }



    if (FUNC_6(&VAR_8->SendRequest))
    {
        FUNC_5(VAR_8, VAR_3, VAR_1);

        if (FUNC_7(&VAR_8->DisconnectTimer))
        {
            FUNC_2(VAR_8);
        }
    }

    FUNC_2(VAR_8);
}
