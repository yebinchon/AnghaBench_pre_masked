
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int TimeStamp ;
struct TYPE_3__ {unsigned char* User; unsigned char* Domain; unsigned char* Password; void* PasswordLength; void* UserLength; void* DomainLength; int Flags; } ;
typedef TYPE_1__ SEC_WINNT_AUTH_IDENTITY_A ;
typedef scalar_t__ SECURITY_STATUS ;
typedef int * PSecPkgInfoA ;
typedef int CredHandle ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,char*,...) ;
 scalar_t__ FUNC_2 (int *,int ,int ,int *,TYPE_1__*,int *,int *,int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ,int **) ;
 int VAR_5 ;
 void* FUNC_6 (char*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static BOOL FUNC_7(void)
{
    CredHandle VAR_9;
    TimeStamp VAR_10;
    SECURITY_STATUS VAR_11;
    SEC_WINNT_AUTH_IDENTITY_A VAR_12;
    PSecPkgInfoA VAR_13 = ((void*)0);

    if(FUNC_5(VAR_5, &VAR_13) != VAR_2)
    {
        FUNC_1(0, "NTLM package not installed, skipping test\n");
        return VAR_0;
    }
    FUNC_3(VAR_13);

    VAR_12.User = (unsigned char*) VAR_7;
    VAR_12.UserLength = FUNC_6((char *) VAR_12.User);
    VAR_12.Domain = (unsigned char *) VAR_8;
    VAR_12.DomainLength = FUNC_6((char *) VAR_12.Domain);
    VAR_12.Password = (unsigned char*) VAR_6;
    VAR_12.PasswordLength = FUNC_6((char *) VAR_12.Password);
    VAR_12.Flags = VAR_3;

    VAR_11 = FUNC_2(((void*)0), VAR_5, VAR_1,
            ((void*)0), &VAR_12, ((void*)0), ((void*)0), &VAR_9, &VAR_10);
    FUNC_1(VAR_11 == VAR_2, "AcquireCredentialsHandle() returned %s\n",
            FUNC_0(VAR_11));
    FUNC_4(&VAR_9);

    VAR_12.DomainLength = 0;
    VAR_11 = FUNC_2(((void*)0), VAR_5, VAR_1,
            ((void*)0), &VAR_12, ((void*)0), ((void*)0), &VAR_9, &VAR_10);
    FUNC_1(VAR_11 == VAR_2, "AcquireCredentialsHandle() returned %s\n",
            FUNC_0(VAR_11));
    FUNC_4(&VAR_9);

    VAR_12.Domain = ((void*)0);
    VAR_11 = FUNC_2(((void*)0), VAR_5, VAR_1,
            ((void*)0), &VAR_12, ((void*)0), ((void*)0), &VAR_9, &VAR_10);
    FUNC_1(VAR_11 == VAR_2, "AcquireCredentialsHandle() returned %s\n",
            FUNC_0(VAR_11));
    FUNC_4(&VAR_9);

    VAR_12.Domain = (unsigned char *) VAR_8;
    VAR_12.DomainLength = FUNC_6((char *) VAR_12.Domain);
    VAR_12.UserLength = 0;
    VAR_12.User = ((void*)0);
    VAR_11 = FUNC_2(((void*)0), VAR_5, VAR_1,
            ((void*)0), &VAR_12, ((void*)0), ((void*)0), &VAR_9, &VAR_10);
    FUNC_1(VAR_11 == VAR_2, "AcquireCredentialsHandle() returned %s\n",
            FUNC_0(VAR_11));
    FUNC_4(&VAR_9);

    VAR_12.User = (unsigned char*) VAR_7;
    VAR_12.UserLength = FUNC_6((char *) VAR_12.User);
    VAR_12.Password = ((void*)0);
    VAR_12.PasswordLength = 0;
    VAR_11 = FUNC_2(((void*)0), VAR_5, VAR_1,
            ((void*)0), &VAR_12, ((void*)0), ((void*)0), &VAR_9, &VAR_10);
    FUNC_1(VAR_11 == VAR_2, "AcquireCredentialsHandle() returned %s\n",
            FUNC_0(VAR_11));
    FUNC_4(&VAR_9);
    return VAR_4;
}
