
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int user ;
typedef int ULONG ;
typedef int TimeStamp ;
struct TYPE_14__ {int member_0; } ;
struct TYPE_13__ {int cbMaxToken; } ;
struct TYPE_12__ {int pvBuffer; int cbBuffer; int BufferType; } ;
struct TYPE_11__ {TYPE_2__* pBuffers; int cBuffers; int ulVersion; } ;
typedef TYPE_1__ SecBufferDesc ;
typedef TYPE_2__ SecBuffer ;
typedef int SEC_CHAR ;
typedef scalar_t__ SECURITY_STATUS ;
typedef TYPE_3__* PSecPkgInfoA ;
typedef TYPE_4__ CtxtHandle ;
typedef int CredHandle ;
typedef scalar_t__ BOOLEAN ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (int,char*,...) ;
 scalar_t__ FUNC_7 (int *,int *,int ,int *,int *,int *,int *,int *,int *) ;
 scalar_t__ FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (TYPE_3__*) ;
 scalar_t__ FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int ,char*,int*) ;
 scalar_t__ FUNC_12 (int *,int *,int *,int ,int ,int ,int *,int ,TYPE_4__*,TYPE_1__*,int*,int *) ;
 scalar_t__ FUNC_13 (int *,TYPE_3__**) ;

__attribute__((used)) static void FUNC_14(void)
{
    SECURITY_STATUS VAR_8;
    PSecPkgInfoA VAR_9;
    CredHandle VAR_10;
    CtxtHandle VAR_11 = {0};
    SecBufferDesc VAR_12;
    SecBuffer VAR_13[1];
    char VAR_14[256];
    TimeStamp VAR_15;
    ULONG VAR_16, VAR_17;
    BOOLEAN VAR_18;

    if(FUNC_13((SEC_CHAR *)"NTLM", &VAR_9) != VAR_6)
    {
        FUNC_6(0, "NTLM package not installed, skipping test\n");
        return;
    }

    VAR_8 = FUNC_7(((void*)0), (SEC_CHAR *)"NTLM", VAR_4,
                                        ((void*)0), ((void*)0), ((void*)0), ((void*)0), &VAR_10, &VAR_15);
    FUNC_6(VAR_8 == VAR_6, "AcquireCredentialsHandle() failed %s\n", FUNC_5(VAR_8));

    VAR_13[0].cbBuffer = VAR_9->cbMaxToken;
    VAR_13[0].BufferType = VAR_2;
    VAR_13[0].pvBuffer = FUNC_3(FUNC_2(), 0, VAR_13[0].cbBuffer);

    VAR_12.ulVersion = VAR_3;
    VAR_12.cBuffers = FUNC_0(VAR_13);
    VAR_12.pBuffers = VAR_13;

    VAR_17 = sizeof(VAR_14);
    VAR_18 = FUNC_11(VAR_1, VAR_14, &VAR_17);
    FUNC_6(VAR_18, "GetUserNameExA failed %u\n", FUNC_1());

    VAR_8 = FUNC_12(&VAR_10, ((void*)0), (SEC_CHAR *)VAR_14,
                                         VAR_0, 0, VAR_5,
                                         ((void*)0), 0, &VAR_11, &VAR_12, &VAR_16, &VAR_15);
    FUNC_6(VAR_8 == VAR_7, "InitializeSecurityContextA failed %s\n", FUNC_5(VAR_8));

    VAR_18 = FUNC_8(&VAR_11);
    FUNC_6(VAR_18 == VAR_6, "DeleteSecurityContext failed with error 0x%x\n", VAR_18);
    VAR_18 = FUNC_10(&VAR_10);
    FUNC_6(VAR_18 == VAR_6, "FreeCredentialsHandle failed with error 0x%x\n", VAR_18);

    FUNC_9(VAR_9);
    FUNC_4(FUNC_2(), 0, VAR_13[0].pvBuffer);
}
