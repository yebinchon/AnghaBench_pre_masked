
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_10__ {int dwFlags; int grbitEnabledProtocols; } ;
struct TYPE_9__ {int member_0; int pvBuffer; int * member_2; int member_1; } ;
struct TYPE_8__ {int member_1; TYPE_2__* member_2; int member_0; } ;
typedef TYPE_1__ SecBufferDesc ;
typedef TYPE_2__ SecBuffer ;
typedef int SEC_CHAR ;
typedef scalar_t__ SECURITY_STATUS ;
typedef TYPE_3__ SCHANNEL_CRED ;
typedef int CtxtHandle ;
typedef int CredHandle ;


 scalar_t__ FUNC_0 (int *,int *,int ,int *,TYPE_3__*,int *,int *,int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (int *,int *,int *,int,int ,int ,TYPE_1__*,int ,int *,TYPE_1__*,int *,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_7(void)
{
    SCHANNEL_CRED VAR_13;
    CredHandle VAR_14;
    CtxtHandle VAR_15;
    SECURITY_STATUS VAR_16;
    SecBuffer VAR_17 = {1000, VAR_6, ((void*)0)};
    SecBuffer VAR_18 = {0, VAR_5, ((void*)0)};
    SecBufferDesc VAR_19 = {VAR_7, 1, &VAR_17};
    SecBufferDesc VAR_20 = {VAR_7, 1, &VAR_18};
    ULONG VAR_21;

    FUNC_5(&VAR_13);
    VAR_13.grbitEnabledProtocols = VAR_11;
    VAR_13.dwFlags = VAR_4|VAR_3;
    VAR_16 = FUNC_0(((void*)0), (SEC_CHAR *)VAR_12, VAR_8, ((void*)0),
        &VAR_13, ((void*)0), ((void*)0), &VAR_14, ((void*)0));
    FUNC_6(VAR_16 == VAR_9, "AcquireCredentialsHandleA failed: %08x\n", VAR_16);
    if (VAR_16 != VAR_9) return;

    VAR_16 = FUNC_4(&VAR_14, ((void*)0), (SEC_CHAR *)"localhost",
        VAR_1|VAR_2|VAR_0,
        0, 0, &VAR_20, 0, &VAR_15, &VAR_19, &VAR_21, ((void*)0));
    FUNC_6(VAR_16 == VAR_10, "Expected SEC_I_CONTINUE_NEEDED, got %08x\n", VAR_16);

    FUNC_2(VAR_17.pvBuffer);
    FUNC_1(&VAR_15);
    FUNC_3(&VAR_14);
}
