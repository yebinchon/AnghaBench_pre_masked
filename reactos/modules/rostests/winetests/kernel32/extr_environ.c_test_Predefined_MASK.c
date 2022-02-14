
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HANDLE ;
typedef int Env ;
typedef int Data ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 () ;
 int VAR_0 ;
 int FUNC_4 (int,char*,char*,...) ;
 int FUNC_5 (int ,char*,int*) ;
 int FUNC_6 (int ,int ,int *) ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (char*,char*) ;

__attribute__((used)) static void FUNC_9(void)
{
    char VAR_1[1024];
    DWORD VAR_2;
    char VAR_3[sizeof(VAR_1)];
    DWORD VAR_4;
    HANDLE VAR_5;
    BOOL VAR_6;





    if (&FUNC_6 == ((void*)0) || &FUNC_5 == ((void*)0))
    {
        FUNC_7("Skipping USERPROFILE check\n");
        return;
    }
    VAR_6 = FUNC_6(FUNC_1(), VAR_0, &VAR_5);
    FUNC_4(VAR_6, "Failed to open token, error %u\n", FUNC_3());
    VAR_2 = sizeof(VAR_1);
    VAR_6 = FUNC_5(VAR_5, VAR_1, &VAR_2);
    FUNC_4(VAR_6, "Failed to get user profile dir, error %u\n", FUNC_3());
    if (VAR_6)
    {
        VAR_4 = FUNC_2("USERPROFILE", VAR_3, sizeof(VAR_3));
        FUNC_4(VAR_4 != 0 && VAR_4 <= sizeof(VAR_3),
           "Failed to retrieve environment variable USERPROFILE, error %u\n",
           FUNC_3());
        FUNC_4(FUNC_8(VAR_1, VAR_3) == 0,
           "USERPROFILE env var %s doesn't match GetUserProfileDirectory %s\n",
           VAR_3, VAR_1);
    }
    else
        FUNC_7("Skipping USERPROFILE check, can't get user profile dir\n");
    VAR_6 = FUNC_0(VAR_5);
    FUNC_4(VAR_6, "Failed to close token, error %u\n", FUNC_3());
}
