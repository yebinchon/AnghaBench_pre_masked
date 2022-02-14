
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int VOID ;
typedef int UINT ;
struct TYPE_14__ {int Lock; int ReceiveRequest; } ;
struct TYPE_13__ {int MdlAddress; } ;
struct TYPE_11__ {TYPE_3__* RequestContext; } ;
struct TYPE_12__ {int Information; scalar_t__ Status; int Entry; TYPE_1__ Request; } ;
typedef int PUCHAR ;
typedef TYPE_2__* PTDI_BUCKET ;
typedef int PMDL ;
typedef int PLIST_ENTRY ;
typedef TYPE_3__* PIRP ;
typedef TYPE_4__* PCONNECTION_ENDPOINT ;
typedef scalar_t__ NTSTATUS ;


 TYPE_2__* FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (TYPE_4__*,TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int *,int *,int *) ;
 int FUNC_4 (int *,int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_5 (TYPE_4__*,int ,int ,int *) ;
 int FUNC_6 (int ,int *,int *) ;
 int FUNC_7 (TYPE_4__*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

VOID
FUNC_8(void *VAR_3)
{
    PCONNECTION_ENDPOINT VAR_4 = (PCONNECTION_ENDPOINT)VAR_3;
    PTDI_BUCKET VAR_5;
    PLIST_ENTRY VAR_6;
    PIRP VAR_7;
    PMDL VAR_8;
    UINT VAR_9;
    UINT VAR_10;
    PUCHAR VAR_11;
    NTSTATUS VAR_12;

    FUNC_7(VAR_4);

    while ((VAR_6 = FUNC_4(&VAR_4->ReceiveRequest, &VAR_4->Lock)))
    {
        VAR_5 = FUNC_0( VAR_6, VAR_2, VAR_6 );

        VAR_7 = VAR_5->Request.RequestContext;
        VAR_8 = VAR_7->MdlAddress;

        FUNC_6( VAR_8, &VAR_11, &VAR_10 );

        VAR_12 = FUNC_5(VAR_4, VAR_11, VAR_10, &VAR_9);
        if (VAR_12 == VAR_1)
        {
            FUNC_3(&VAR_4->ReceiveRequest,
                                        &VAR_5->Entry,
                                        &VAR_4->Lock);
            break;
        }

        VAR_5->Status = VAR_12;
        VAR_5->Information = VAR_9;

        FUNC_1(VAR_4, VAR_5, VAR_0);
    }

    FUNC_2(VAR_4);
}
