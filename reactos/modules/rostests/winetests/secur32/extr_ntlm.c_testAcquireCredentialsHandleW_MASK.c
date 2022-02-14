
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef char WCHAR ;
typedef int TimeStamp ;
struct TYPE_4__ {char* User; char* Domain; char* Password; int Flags; void* PasswordLength; void* DomainLength; void* UserLength; } ;
typedef TYPE_1__ SEC_WINNT_AUTH_IDENTITY_W ;
typedef TYPE_1__ SEC_WINNT_AUTH_IDENTITY_A ;
typedef scalar_t__ SECURITY_STATUS ;
typedef int * PSecPkgInfoA ;
typedef int CredHandle ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 void* FUNC_1 (char*) ;
 int FUNC_2 (int,char*,...) ;
 scalar_t__ FUNC_3 (int *,char*,int ,int *,TYPE_1__*,int *,int *,int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ,int **) ;
 int VAR_4 ;
 void* FUNC_7 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_8 (char*) ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static void FUNC_9(void)
{
    CredHandle VAR_8;
    TimeStamp VAR_9;
    static WCHAR VAR_10[] = {'N','T','L','M',0 };
    static WCHAR VAR_11[] = {'t','e','s','t','u','s','e','r',0 };
    static WCHAR VAR_12[] = {'W','O','R','K','G','R','O','U','P',0};
    static WCHAR VAR_13[] = {'t','e','s','t','p','a','s','s',0};
    SECURITY_STATUS VAR_14;
    SEC_WINNT_AUTH_IDENTITY_A VAR_15;
    SEC_WINNT_AUTH_IDENTITY_W VAR_16;
    PSecPkgInfoA VAR_17 = ((void*)0);

    if(!&FUNC_3)
    {
        FUNC_8("AcquireCredentialsHandleW not available\n");
        return;
    }

    if(FUNC_6(VAR_4, &VAR_17) != VAR_1)
    {
        FUNC_2(0, "NTLM package not installed, skipping test\n");
        return;
    }
    FUNC_4(VAR_17);

    VAR_16.User = VAR_11;
    VAR_16.UserLength = FUNC_1(VAR_11);
    VAR_16.Domain = VAR_12;
    VAR_16.DomainLength = FUNC_1(VAR_12);
    VAR_16.Password = VAR_13;
    VAR_16.PasswordLength = FUNC_1(VAR_13);
    VAR_16.Flags = VAR_3;

    VAR_14 = FUNC_3(((void*)0), VAR_10, VAR_0,
            ((void*)0), &VAR_16, ((void*)0), ((void*)0), &VAR_8, &VAR_9);
    FUNC_2(VAR_14 == VAR_1, "AcquireCredentialsHandeW() returned %s\n",
            FUNC_0(VAR_14));
    FUNC_5(&VAR_8);

    VAR_16.DomainLength = 0;
    VAR_14 = FUNC_3(((void*)0), VAR_10, VAR_0,
            ((void*)0), &VAR_16, ((void*)0), ((void*)0), &VAR_8, &VAR_9);
    FUNC_2(VAR_14 == VAR_1, "AcquireCredentialsHandeW() returned %s\n",
            FUNC_0(VAR_14));
    FUNC_5(&VAR_8);

    VAR_16.Domain = ((void*)0);
    VAR_14 = FUNC_3(((void*)0), VAR_10, VAR_0,
            ((void*)0), &VAR_16, ((void*)0), ((void*)0), &VAR_8, &VAR_9);
    FUNC_2(VAR_14 == VAR_1, "AcquireCredentialsHandeW() returned %s\n",
            FUNC_0(VAR_14));
    FUNC_5(&VAR_8);

    VAR_16.Domain = VAR_12;
    VAR_16.DomainLength = FUNC_1(VAR_12);
    VAR_16.UserLength = 0;
    VAR_16.User = ((void*)0);
    VAR_14 = FUNC_3(((void*)0), VAR_10, VAR_0,
            ((void*)0), &VAR_16, ((void*)0), ((void*)0), &VAR_8, &VAR_9);
    FUNC_2(VAR_14 == VAR_1, "AcquireCredentialsHandeW() returned %s\n",
            FUNC_0(VAR_14));
    FUNC_5(&VAR_8);

    VAR_16.User = VAR_11;
    VAR_16.UserLength = FUNC_1(VAR_11);
    VAR_16.Password = VAR_13;
    VAR_16.PasswordLength = 0;
    VAR_14 = FUNC_3(((void*)0), VAR_10, VAR_0,
            ((void*)0), &VAR_16, ((void*)0), ((void*)0), &VAR_8, &VAR_9);
    FUNC_2(VAR_14 == VAR_1, "AcquireCredentialsHandeW() returned %s\n",
            FUNC_0(VAR_14));
    FUNC_5(&VAR_8);


    VAR_15.User = (unsigned char*) VAR_6;
    VAR_15.UserLength = FUNC_7(VAR_6);
    VAR_15.Domain = (unsigned char *) VAR_7;
    VAR_15.DomainLength = FUNC_7(VAR_7);
    VAR_15.Password = (unsigned char*) VAR_5;
    VAR_15.PasswordLength = FUNC_7(VAR_5);
    VAR_15.Flags = VAR_2;

    VAR_14 = FUNC_3(((void*)0), VAR_10, VAR_0,
            ((void*)0), &VAR_15, ((void*)0), ((void*)0), &VAR_8, &VAR_9);
    FUNC_2(VAR_14 == VAR_1, "AcquireCredentialsHandeW() returned %s\n",
            FUNC_0(VAR_14));
    FUNC_5(&VAR_8);
}
