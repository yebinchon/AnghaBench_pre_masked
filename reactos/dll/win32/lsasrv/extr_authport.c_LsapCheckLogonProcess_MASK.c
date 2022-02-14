
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_11__ ;


struct TYPE_18__ {scalar_t__ Untrusted; } ;
struct TYPE_16__ {int UniqueThread; int UniqueProcess; } ;
struct TYPE_17__ {TYPE_11__ ClientId; } ;
struct TYPE_19__ {scalar_t__ Untrusted; TYPE_2__ ConnectInfo; int * ClientProcessHandle; TYPE_1__ h; } ;
typedef TYPE_3__* PLSA_API_MSG ;
typedef TYPE_3__* PLSAP_LOGON_CONTEXT ;
typedef int OBJECT_ATTRIBUTES ;
typedef TYPE_3__* NTSTATUS ;
typedef int LSAP_LOGON_CONTEXT ;
typedef int * HANDLE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int ,int *,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int *) ;
 TYPE_3__* FUNC_4 (int **,int,int *,TYPE_11__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_3__* FUNC_5 (int ,int ,int) ;
 int FUNC_6 () ;
 TYPE_3__* VAR_7 ;
 TYPE_3__* VAR_8 ;
 int FUNC_7 (char*,TYPE_3__*,...) ;

__attribute__((used)) static NTSTATUS
FUNC_8(PLSA_API_MSG VAR_9,
                      PLSAP_LOGON_CONTEXT *VAR_10)
{
    OBJECT_ATTRIBUTES VAR_11;
    HANDLE VAR_12 = ((void*)0);
    PLSAP_LOGON_CONTEXT VAR_13 = ((void*)0);
    NTSTATUS VAR_14;

    FUNC_7("LsapCheckLogonProcess(%p)\n", VAR_9);

    FUNC_7("Client ID: %p %p\n", VAR_9->h.ClientId.UniqueProcess, VAR_9->h.ClientId.UniqueThread);

    FUNC_0(&VAR_11,
                               ((void*)0),
                               0,
                               ((void*)0),
                               ((void*)0));

    VAR_14 = FUNC_4(&VAR_12,
                           VAR_5 | VAR_6 | VAR_4 | VAR_2 | VAR_3,
                           &VAR_11,
                           &VAR_9->h.ClientId);
    if (!FUNC_2(VAR_14))
    {
        FUNC_7("NtOpenProcess() failed (Status %lx)\n", VAR_14);
        return VAR_14;
    }


    VAR_13 = FUNC_5(FUNC_6(),
                              VAR_1,
                              sizeof(LSAP_LOGON_CONTEXT));
    if (VAR_13 == ((void*)0))
    {
        FUNC_3(VAR_12);
        return VAR_7;
    }

    FUNC_7("New LogonContext: %p\n", VAR_13);

    VAR_13->ClientProcessHandle = VAR_12;
    VAR_13->Untrusted = VAR_9->ConnectInfo.Untrusted;

    if (VAR_13->Untrusted == VAR_0)
        VAR_13->Untrusted = FUNC_1(VAR_12);

    *VAR_10 = VAR_13;

    return VAR_8;
}
