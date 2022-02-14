
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int ULONG ;
typedef int TimeStamp ;
struct TYPE_17__ {int member_0; } ;
struct TYPE_16__ {int cbMaxToken; } ;
struct TYPE_15__ {unsigned char* User; unsigned char* Domain; unsigned char* Password; int Flags; void* PasswordLength; void* DomainLength; void* UserLength; } ;
struct TYPE_14__ {int pvBuffer; int cbBuffer; int BufferType; } ;
struct TYPE_13__ {TYPE_2__* pBuffers; int cBuffers; int ulVersion; } ;
typedef TYPE_1__ SecBufferDesc ;
typedef TYPE_2__ SecBuffer ;
typedef TYPE_3__ SEC_WINNT_AUTH_IDENTITY_A ;
typedef scalar_t__ SECURITY_STATUS ;
typedef TYPE_4__* PSecPkgInfoA ;
typedef TYPE_5__ CtxtHandle ;
typedef int CredHandle ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (int,char*,...) ;
 scalar_t__ FUNC_6 (int *,int ,int ,int *,TYPE_3__*,int *,int *,int *,int *) ;
 scalar_t__ FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (TYPE_4__*) ;
 scalar_t__ FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *,int *,int *,int ,int ,int ,int *,int ,TYPE_5__*,TYPE_1__*,int *,int *) ;
 scalar_t__ FUNC_11 (int ,TYPE_4__**) ;
 int VAR_8 ;
 void* FUNC_12 (char*) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;

__attribute__((used)) static void FUNC_13(void)
{
    SECURITY_STATUS VAR_12;
    SEC_WINNT_AUTH_IDENTITY_A VAR_13;
    PSecPkgInfoA VAR_14 = ((void*)0);
    CredHandle VAR_15;
    CtxtHandle VAR_16 = {0};
    CtxtHandle VAR_17 = {0};
    SecBufferDesc VAR_18;
    SecBuffer VAR_19[1];
    ULONG VAR_20;
    TimeStamp VAR_21;

    if(FUNC_11(VAR_8, &VAR_14) != VAR_5)
    {
        FUNC_5(0, "NTLM package not installed, skipping test\n");
        return;
    }
    VAR_19[0].cbBuffer = VAR_14->cbMaxToken;
    VAR_19[0].BufferType = VAR_1;
    VAR_19[0].pvBuffer = FUNC_2(FUNC_1(), 0, VAR_19[0].cbBuffer);

    FUNC_8(VAR_14);

    VAR_13.User = (unsigned char*) VAR_10;
    VAR_13.UserLength = FUNC_12((char *) VAR_13.User);
    VAR_13.Domain = (unsigned char *) VAR_11;
    VAR_13.DomainLength = FUNC_12((char *) VAR_13.Domain);
    VAR_13.Password = (unsigned char*) VAR_9;
    VAR_13.PasswordLength = FUNC_12((char *) VAR_13.Password);
    VAR_13.Flags = VAR_7;

    VAR_12 = FUNC_6(((void*)0), VAR_8, VAR_3,
            ((void*)0), &VAR_13, ((void*)0), ((void*)0), &VAR_15, &VAR_21);
    FUNC_5(VAR_12 == VAR_5, "AcquireCredentialsHandle() returned %s\n",
            FUNC_4(VAR_12));

    VAR_18.ulVersion = VAR_2;
    VAR_18.cBuffers = FUNC_0(VAR_19);
    VAR_18.pBuffers = VAR_19;

    VAR_12 = FUNC_10(&VAR_15, ((void*)0), ((void*)0), VAR_0,
            0, VAR_4, ((void*)0), 0, &VAR_16, &VAR_18,
            &VAR_20, &VAR_21);
    FUNC_5(VAR_12 == VAR_6, "InitializeSecurityContextA failed with error 0x%x\n", VAR_12);

    VAR_12 = FUNC_10(&VAR_15, ((void*)0), ((void*)0), VAR_0,
            0, VAR_4, ((void*)0), 0, &VAR_17, &VAR_18,
            &VAR_20, &VAR_21);
    FUNC_5(VAR_12 == VAR_6, "Second InitializeSecurityContextA on cred handle failed with error 0x%x\n", VAR_12);

    VAR_12 = FUNC_7(&VAR_16);
    FUNC_5(VAR_12 == VAR_5, "DeleteSecurityContext failed with error 0x%x\n", VAR_12);
    VAR_12 = FUNC_7(&VAR_17);
    FUNC_5(VAR_12 == VAR_5, "DeleteSecurityContext failed with error 0x%x\n", VAR_12);
    VAR_12 = FUNC_9(&VAR_15);
    FUNC_5(VAR_12 == VAR_5, "FreeCredentialsHandle failed with error 0x%x\n", VAR_12);

    FUNC_3(FUNC_1(), 0, VAR_19[0].pvBuffer);
}
