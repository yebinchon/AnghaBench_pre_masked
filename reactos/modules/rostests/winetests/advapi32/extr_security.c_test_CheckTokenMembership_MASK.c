
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {size_t GroupCount; TYPE_1__* Groups; } ;
struct TYPE_6__ {int Attributes; int Sid; } ;
typedef TYPE_2__* PTOKEN_GROUPS ;
typedef int * HANDLE ;
typedef size_t DWORD ;
typedef int BOOL ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int **) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int *,int ,TYPE_2__*,size_t,size_t*) ;
 TYPE_2__* FUNC_6 (int ,int ,size_t) ;
 int FUNC_7 (int ,int ,TYPE_2__*) ;
 int FUNC_8 (int ,int,int **) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_9 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_10 (int,char*,...) ;
 int FUNC_11 (int *,int ,int*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*) ;

__attribute__((used)) static void FUNC_14(void)
{
    PTOKEN_GROUPS VAR_9;
    DWORD VAR_10;
    HANDLE VAR_11, VAR_12;
    BOOL VAR_13;
    BOOL VAR_14;
    DWORD VAR_15;

    if (!&FUNC_11)
    {
        FUNC_13("CheckTokenMembership is not available\n");
        return;
    }
    VAR_14 = FUNC_8(FUNC_2(), VAR_5|VAR_6, &VAR_11);
    FUNC_10(VAR_14, "OpenProcessToken failed with error %d\n", FUNC_3());

    VAR_14 = FUNC_1(VAR_11, VAR_4, &VAR_12);
    FUNC_10(VAR_14, "DuplicateToken failed with error %d\n", FUNC_3());


    VAR_14 = FUNC_5(VAR_12, VAR_8, ((void*)0), 0, &VAR_10);
    FUNC_10(!VAR_14 && FUNC_3() == VAR_0,
        "GetTokenInformation(TokenGroups) %s with error %d\n",
        VAR_14 ? "succeeded" : "failed", FUNC_3());
    VAR_9 = FUNC_6(FUNC_4(), 0, VAR_10);
    VAR_14 = FUNC_5(VAR_12, VAR_8, VAR_9, VAR_10, &VAR_10);
    FUNC_10(VAR_14, "GetTokenInformation(TokenGroups) failed with error %d\n", FUNC_3());

    for (VAR_15 = 0; VAR_15 < VAR_9->GroupCount; VAR_15++)
    {
        if (VAR_9->Groups[VAR_15].Attributes & VAR_3)
            break;
    }

    if (VAR_15 == VAR_9->GroupCount)
    {
        FUNC_7(FUNC_4(), 0, VAR_9);
        FUNC_0(VAR_12);
        FUNC_12("user not a member of any group\n");
        return;
    }

    VAR_13 = VAR_2;
    VAR_14 = FUNC_11(VAR_12, VAR_9->Groups[VAR_15].Sid, &VAR_13);
    FUNC_10(VAR_14, "CheckTokenMembership failed with error %d\n", FUNC_3());
    FUNC_10(VAR_13, "CheckTokenMembership should have detected sid as member\n");

    VAR_13 = VAR_2;
    VAR_14 = FUNC_11(((void*)0), VAR_9->Groups[VAR_15].Sid, &VAR_13);
    FUNC_10(VAR_14, "CheckTokenMembership failed with error %d\n", FUNC_3());
    FUNC_10(VAR_13, "CheckTokenMembership should have detected sid as member\n");

    VAR_13 = VAR_7;
    FUNC_9(0xdeadbeef);
    VAR_14 = FUNC_11(VAR_11, VAR_9->Groups[VAR_15].Sid, &VAR_13);
    FUNC_10(!VAR_14 && FUNC_3() == VAR_1,
        "CheckTokenMembership with process token %s with error %d\n",
        VAR_14 ? "succeeded" : "failed", FUNC_3());
    FUNC_10(!VAR_13, "CheckTokenMembership should have cleared is_member\n");

    FUNC_7(FUNC_4(), 0, VAR_9);
    FUNC_0(VAR_12);
    FUNC_0(VAR_11);
}
