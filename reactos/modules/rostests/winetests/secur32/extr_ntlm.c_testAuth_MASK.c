
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef int info ;
typedef int ULONG ;
typedef int UINT ;
struct TYPE_26__ {unsigned char* User; unsigned char* Domain; unsigned char* Password; int Flags; void* PasswordLength; void* DomainLength; void* UserLength; } ;
struct TYPE_25__ {scalar_t__ NegotiationState; TYPE_3__* PackageInfo; } ;
struct TYPE_24__ {int cbMaxToken; int cbMaxSignature; int cbSecurityTrailer; scalar_t__ cbBlockSize; } ;
struct TYPE_23__ {int fCapabilities; int wVersion; scalar_t__ wRPCID; scalar_t__ Name; char* Comment; } ;
struct TYPE_21__ {int member_0; } ;
struct TYPE_22__ {int cred; int ctxt; TYPE_6__* id; TYPE_1__ member_0; } ;
typedef TYPE_2__ SspiData ;
typedef TYPE_3__ SecPkgInfoA ;
typedef TYPE_4__ SecPkgContext_Sizes ;
typedef TYPE_5__ SecPkgContext_NegotiationInfoA ;
typedef TYPE_6__ SEC_WINNT_AUTH_IDENTITY_A ;
typedef scalar_t__ SECURITY_STATUS ;
typedef int * PSecPkgInfoA ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,TYPE_3__*) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int *,int ,TYPE_5__*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,TYPE_2__*) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__,char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (TYPE_5__*,int ,int) ;
 int FUNC_10 (int,char*,...) ;
 scalar_t__ FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int *,int ,TYPE_4__*) ;
 scalar_t__ FUNC_15 (int ,int **) ;
 scalar_t__ FUNC_16 (TYPE_2__*,scalar_t__,int ) ;
 scalar_t__ FUNC_17 (TYPE_2__*,scalar_t__,int ) ;
 scalar_t__ FUNC_18 (TYPE_2__*,scalar_t__,int ) ;
 int VAR_14 ;
 scalar_t__ FUNC_19 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_20 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_21 (TYPE_2__*,int ) ;
 int FUNC_22 (char*,...) ;
 void* FUNC_23 (char*) ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_24 (char*) ;
 scalar_t__ VAR_17 ;

__attribute__((used)) static void FUNC_25(ULONG VAR_18, BOOL VAR_19)
{
    SECURITY_STATUS VAR_20 = VAR_11;
    SECURITY_STATUS VAR_21 = VAR_11;
    SECURITY_STATUS VAR_22;
    PSecPkgInfoA VAR_23 = ((void*)0);
    BOOL VAR_24 = VAR_13;
    SspiData VAR_25 = {0}, VAR_26 = {0};
    SEC_WINNT_AUTH_IDENTITY_A VAR_27;
    SecPkgContext_Sizes VAR_28;
    SecPkgContext_NegotiationInfoA VAR_29;
    SecPkgInfoA *VAR_30;

    if(FUNC_15( VAR_14, &VAR_23)!= VAR_10)
    {
        FUNC_10(0, "NTLM package not installed, skipping test.\n");
        return;
    }

    FUNC_12(VAR_23);
    VAR_27.User = (unsigned char*) VAR_16;
    VAR_27.UserLength = FUNC_23((char *) VAR_27.User);
    VAR_27.Domain = (unsigned char *) VAR_17;
    VAR_27.DomainLength = FUNC_23((char *) VAR_27.Domain);
    VAR_27.Password = (unsigned char*) VAR_15;
    VAR_27.PasswordLength = FUNC_23((char *) VAR_27.Password);
    VAR_27.Flags = VAR_12;

    VAR_25.id = &VAR_27;

    VAR_22 = FUNC_19(&VAR_25, VAR_14);

    if(VAR_22 != VAR_10)
    {
        FUNC_22("Error: Setting up the client returned %s, exiting test!\n",
                FUNC_6(VAR_22));
        FUNC_13(&VAR_25.cred);
        return;
    }

    if(VAR_19)
        VAR_22 = FUNC_20(&VAR_26, VAR_14);
    else
        VAR_22 = FUNC_21(&VAR_26, VAR_14);

    if(VAR_22 != VAR_10)
    {
        FUNC_22("Error: Setting up the server returned %s, exiting test!\n",
                FUNC_6(VAR_22));
        FUNC_13(&VAR_26.cred);
        FUNC_13(&VAR_25.cred);
        return;
    }

    while(VAR_20 == VAR_11 && VAR_21 == VAR_11)
    {
        VAR_20 = FUNC_16(&VAR_25, VAR_24, VAR_18);

        FUNC_10(VAR_20 == VAR_10 || VAR_20 == VAR_11,
                "Running the client returned %s, more tests will fail.\n",
                FUNC_6(VAR_20));

        FUNC_5(&VAR_25, &VAR_26);

        if(VAR_19)
            VAR_21 = FUNC_17(&VAR_26, VAR_24, VAR_18);
        else
            VAR_21 = FUNC_18(&VAR_26, VAR_24, VAR_18);

        FUNC_10(VAR_21 == VAR_10 || VAR_21 == VAR_11 ||
                VAR_21 == VAR_9,
                "Running the server returned %s, more tests will fail from now.\n",
                FUNC_6(VAR_21));

        FUNC_5(&VAR_26, &VAR_25);
        FUNC_24("Looping\n");
        VAR_24 = VAR_0;
    }

    if(VAR_20 != VAR_10)
    {
        FUNC_22("Authentication failed, skipping test.\n");
        goto tAuthend;
    }

    VAR_22 = FUNC_14(&VAR_25.ctxt,
            VAR_4, &VAR_28);

    FUNC_10(VAR_22 == VAR_10,
            "pQueryContextAttributesA(SECPKG_ATTR_SIZES) returned %s\n",
            FUNC_6(VAR_22));
    FUNC_10((VAR_28.cbMaxToken == 1904) || (VAR_28.cbMaxToken == 2888),
            "cbMaxToken should be 1904 or 2888 but is %u\n",
            VAR_28.cbMaxToken);
    FUNC_10(VAR_28.cbMaxSignature == 16,
            "cbMaxSignature should be 16 but is %u\n",
            VAR_28.cbMaxSignature);
    FUNC_10(VAR_28.cbSecurityTrailer == 16,
            "cbSecurityTrailer should be 16 but is  %u\n",
            VAR_28.cbSecurityTrailer);
    FUNC_10(VAR_28.cbBlockSize == 0,
            "cbBlockSize should be 0 but is %u\n",
            VAR_28.cbBlockSize);

    FUNC_9(&VAR_29, 0, sizeof(VAR_29));
    VAR_22 = FUNC_3(&VAR_25.ctxt, VAR_3, &VAR_29);
    FUNC_10(VAR_22 == VAR_10, "QueryContextAttributesA returned %08x\n", VAR_22);

    VAR_30 = VAR_29.PackageInfo;
    FUNC_10(VAR_29.NegotiationState == VAR_8, "got %u\n", VAR_29.NegotiationState);
    FUNC_10(VAR_30 != ((void*)0), "expected non-NULL PackageInfo\n");
    if (VAR_30)
    {
        UINT VAR_31, VAR_32;
        char *VAR_33;

        FUNC_10(VAR_30->fCapabilities == VAR_1 ||
           VAR_30->fCapabilities == (VAR_1|VAR_6) ||
           VAR_30->fCapabilities == (VAR_1|VAR_7) ||
           VAR_30->fCapabilities == (VAR_1|VAR_7|
                                 VAR_5),
           "got %08x\n", VAR_30->fCapabilities);
        FUNC_10(VAR_30->wVersion == 1, "got %u\n", VAR_30->wVersion);
        FUNC_10(VAR_30->wRPCID == VAR_2, "got %u\n", VAR_30->wRPCID);
        FUNC_10(!FUNC_7( VAR_30->Name, "NTLM" ), "got %s\n", VAR_30->Name);

        VAR_31 = sizeof(*VAR_30) + FUNC_8(VAR_30->Name) + 1 + FUNC_8(VAR_30->Comment) + 1;
        VAR_32 = FUNC_2(FUNC_1(), 0, VAR_30);
        FUNC_10(VAR_32 == VAR_31, "got %u, expected %u\n", VAR_32, VAR_31);
        VAR_33 = (char *)VAR_30 + VAR_31;
        FUNC_10(VAR_30->Name + FUNC_8(VAR_30->Name) < VAR_33, "Name doesn't fit into allocated block\n");
        FUNC_10(VAR_30->Comment + FUNC_8(VAR_30->Comment) < VAR_33, "Comment doesn't fit into allocated block\n");

        VAR_22 = FUNC_0(VAR_30);
        FUNC_10(VAR_22 == VAR_10, "FreeContextBuffer error %#x\n", VAR_22);
    }

tAuthend:
    FUNC_4(&VAR_25);
    FUNC_4(&VAR_26);

    if(!VAR_19)
    {
        VAR_22 = FUNC_11(&VAR_26.ctxt);
        FUNC_10(VAR_22 == VAR_10, "DeleteSecurityContext(server) returned %s\n",
            FUNC_6(VAR_22));
    }

    VAR_22 = FUNC_11(&VAR_25.ctxt);
    FUNC_10(VAR_22 == VAR_10, "DeleteSecurityContext(client) returned %s\n",
            FUNC_6(VAR_22));

    if(!VAR_19)
    {
        VAR_22 = FUNC_13(&VAR_26.cred);
        FUNC_10(VAR_22 == VAR_10, "FreeCredentialsHandle(server) returned %s\n",
            FUNC_6(VAR_22));
    }

    VAR_22 = FUNC_13(&VAR_25.cred);
    FUNC_10(VAR_22 == VAR_10, "FreeCredentialsHandle(client) returned %s\n",
            FUNC_6(VAR_22));
}
