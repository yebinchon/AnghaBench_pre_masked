
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int ListenRequest; } ;
struct TYPE_10__ {int RequestContext; int RequestNotifyObject; } ;
struct TYPE_11__ {int Entry; TYPE_1__ Request; TYPE_3__* AssociatedEndpoint; } ;
typedef int PVOID ;
typedef int PTDI_REQUEST ;
typedef TYPE_2__* PTDI_BUCKET ;
typedef int PTCP_COMPLETION_ROUTINE ;
typedef TYPE_3__* PCONNECTION_ENDPOINT ;
typedef int NTSTATUS ;
typedef int KIRQL ;


 TYPE_2__* FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (TYPE_3__*,int *) ;
 int FUNC_3 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (TYPE_3__*,int ) ;

NTSTATUS FUNC_5 ( PTDI_REQUEST VAR_3,
                     PCONNECTION_ENDPOINT VAR_4,
                     PCONNECTION_ENDPOINT VAR_5,
                     PTCP_COMPLETION_ROUTINE VAR_6,
                     PVOID VAR_7 )
{
    NTSTATUS VAR_8;
    PTDI_BUCKET VAR_9;
    KIRQL VAR_10;

    FUNC_2(VAR_4, &VAR_10);

    VAR_9 = FUNC_0(&VAR_2);

    if (VAR_9)
    {
        VAR_9->AssociatedEndpoint = VAR_5;
        FUNC_3(VAR_9->AssociatedEndpoint);

        VAR_9->Request.RequestNotifyObject = VAR_6;
        VAR_9->Request.RequestContext = VAR_7;
        FUNC_1( &VAR_4->ListenRequest, &VAR_9->Entry );
        VAR_8 = VAR_1;
    }
    else
        VAR_8 = VAR_0;

    FUNC_4(VAR_4, VAR_10);

    return VAR_8;
}
