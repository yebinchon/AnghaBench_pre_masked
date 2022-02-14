
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {int Entry; int * ConnectionHandle; } ;
struct TYPE_10__ {scalar_t__ CreateContext; int OperationalMode; int Status; TYPE_3__* LogonProcessNameBuffer; } ;
struct TYPE_12__ {int h; TYPE_1__ ConnectInfo; } ;
struct TYPE_11__ {int Length; } ;
typedef TYPE_2__ REMOTE_PORT_VIEW ;
typedef int PVOID ;
typedef TYPE_3__* PLSA_API_MSG ;
typedef TYPE_4__* PLSAP_LOGON_CONTEXT ;
typedef int NTSTATUS ;
typedef int * HANDLE ;
typedef scalar_t__ BOOLEAN ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (TYPE_3__*,TYPE_4__**) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int **,int *,int *,scalar_t__,int *,TYPE_2__*) ;
 int FUNC_5 (int *) ;
 int VAR_2 ;
 int FUNC_6 (char*,TYPE_3__*) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static NTSTATUS
FUNC_7(PLSA_API_MSG VAR_4)
{
    PLSAP_LOGON_CONTEXT VAR_5 = ((void*)0);
    HANDLE VAR_6 = ((void*)0);
    BOOLEAN VAR_7;
    REMOTE_PORT_VIEW VAR_8;
    NTSTATUS VAR_9 = VAR_2;

    FUNC_6("LsapHandlePortConnection(%p)\n", VAR_4);

    FUNC_6("Logon Process Name: %s\n", VAR_4->ConnectInfo.LogonProcessNameBuffer);

    if (VAR_4->ConnectInfo.CreateContext != VAR_0)
    {
        VAR_9 = FUNC_2(VAR_4,
                                       &VAR_5);

        VAR_4->ConnectInfo.OperationalMode = 0x43218765;

        VAR_4->ConnectInfo.Status = VAR_9;
    }

    if (FUNC_3(VAR_9))
    {
        VAR_7 = VAR_3;
    }
    else
    {
        VAR_7 = VAR_0;
    }

    VAR_8.Length = sizeof(REMOTE_PORT_VIEW);
    VAR_9 = FUNC_4(&VAR_6,
                                 (PVOID*)VAR_5,
                                 &VAR_4->h,
                                 VAR_7,
                                 ((void*)0),
                                 &VAR_8);
    if (!FUNC_3(VAR_9))
    {
        FUNC_0("NtAcceptConnectPort failed (Status 0x%lx)\n", VAR_9);
        return VAR_9;
    }

    if (VAR_7 != VAR_0)
    {
        if (VAR_5 != ((void*)0))
        {
            VAR_5->ConnectionHandle = VAR_6;

            FUNC_1(&VAR_1,
                           &VAR_5->Entry);
        }

        VAR_9 = FUNC_5(VAR_6);
        if (!FUNC_3(VAR_9))
        {
            FUNC_0("NtCompleteConnectPort failed (Status 0x%lx)\n", VAR_9);
            return VAR_9;
        }
    }

    return VAR_9;
}
