
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* member_0; char* member_2; int * DnsServerName; int * TargetName; int * member_9; int member_8; int member_7; int * member_6; int * member_5; int * member_4; int * member_3; int * member_1; } ;
typedef int PCREDENTIALA ;
typedef int DWORD ;
typedef TYPE_1__ CREDENTIAL_TARGET_INFORMATIONA ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,char*,...) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int ,int*,int **) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5(void)
{
    BOOL VAR_2;
    char VAR_3[] = "no_such_target";
    CREDENTIAL_TARGET_INFORMATIONA VAR_4 = {VAR_3, ((void*)0), VAR_3, ((void*)0), ((void*)0), ((void*)0), ((void*)0), 0, 0, ((void*)0)};
    DWORD VAR_5;
    PCREDENTIALA* VAR_6;

    if (!&FUNC_3)
    {
        FUNC_4("CredReadDomainCredentialsA() is not implemented\n");
        return;
    }



if(0)
{
    VAR_2 = FUNC_3(&VAR_4, 0, ((void*)0), &VAR_6);
    FUNC_2(!VAR_2 && FUNC_0() == VAR_0, "!\n");
    VAR_2 = FUNC_3(&VAR_4, 0, &VAR_5, ((void*)0));
    FUNC_2(!VAR_2 && FUNC_0() == VAR_0, "!\n");
}

    FUNC_1(0xdeadbeef);
    VAR_2 = FUNC_3(((void*)0), 0, &VAR_5, &VAR_6);
    FUNC_2(!VAR_2 && FUNC_0() == VAR_0,
        "CredReadDomainCredentialsA should have failed with ERROR_INVALID_PARAMETER instead of %d\n",
        FUNC_0());

    FUNC_1(0xdeadbeef);
    VAR_6 = (void*)0x12345;
    VAR_5 = 2;
    VAR_2 = FUNC_3(&VAR_4, 0, &VAR_5, &VAR_6);
    FUNC_2(!VAR_2 && FUNC_0() == VAR_1,
        "CredReadDomainCredentialsA should have failed with ERROR_NOT_FOUND instead of %d\n",
        FUNC_0());
    FUNC_2(VAR_5 ==0 && VAR_6 == ((void*)0), "CredReadDomainCredentialsA must not return any result\n");

    VAR_4.TargetName = ((void*)0);

    FUNC_1(0xdeadbeef);
    VAR_2 = FUNC_3(&VAR_4, 0, &VAR_5, &VAR_6);
    FUNC_2(!VAR_2, "CredReadDomainCredentialsA should have failed\n");
    FUNC_2(FUNC_0() == VAR_1 ||
        FUNC_0() == VAR_0,
        "Expected ERROR_NOT_FOUND or ERROR_INVALID_PARAMETER instead of %d\n",
        FUNC_0());

    VAR_4.DnsServerName = ((void*)0);

    FUNC_1(0xdeadbeef);
    VAR_2 = FUNC_3(&VAR_4, 0, &VAR_5, &VAR_6);
    FUNC_2(!VAR_2, "CredReadDomainCredentialsA should have failed\n");
    FUNC_2(FUNC_0() == VAR_1 ||
        FUNC_0() == VAR_0,
        "Expected ERROR_NOT_FOUND or ERROR_INVALID_PARAMETER instead of %d\n",
        FUNC_0());
}
