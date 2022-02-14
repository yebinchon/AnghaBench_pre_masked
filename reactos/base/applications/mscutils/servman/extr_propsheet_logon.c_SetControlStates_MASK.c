
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WPARAM ;
typedef int VOID ;
struct TYPE_3__ {scalar_t__ bInitialized; char* szAccountName; char* szPassword1; char* szPassword2; int bLocalSystem; scalar_t__ nInteractive; } ;
typedef TYPE_1__* PLOGONDATA ;
typedef int HWND ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int) ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,char*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_3 (int ,int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ,char*) ;
 scalar_t__ VAR_11 ;

__attribute__((used)) static
VOID
FUNC_5(
    HWND VAR_12,
    PLOGONDATA VAR_13,
    BOOL VAR_14)
{
    FUNC_0(FUNC_1(VAR_12, VAR_5), VAR_14);
    FUNC_0(FUNC_1(VAR_12, VAR_4), !VAR_14);
    FUNC_0(FUNC_1(VAR_12, VAR_10), VAR_3 );
    FUNC_0(FUNC_1(VAR_12, VAR_8), !VAR_14);
    FUNC_0(FUNC_1(VAR_12, VAR_6), !VAR_14);
    FUNC_0(FUNC_1(VAR_12, VAR_9), !VAR_14);
    FUNC_0(FUNC_1(VAR_12, VAR_7), !VAR_14);

    if (VAR_14)
    {
        FUNC_3(VAR_12, VAR_5, VAR_1, (WPARAM)VAR_13->nInteractive, 0);

        if (VAR_13->bInitialized == VAR_11)
        {
            FUNC_2(VAR_12, VAR_4, VAR_13->szAccountName, 64);
            FUNC_2(VAR_12, VAR_6, VAR_13->szPassword1, 64);
            FUNC_2(VAR_12, VAR_7, VAR_13->szPassword2, 64);
        }

        FUNC_4(VAR_12, VAR_4, L"");
        FUNC_4(VAR_12, VAR_6, L"");
        FUNC_4(VAR_12, VAR_7, L"");
    }
    else
    {
        if (VAR_13->bInitialized == VAR_11)
            VAR_13->nInteractive = FUNC_3(VAR_12, VAR_5, VAR_0, 0, 0);
        FUNC_3(VAR_12, VAR_5, VAR_1, (WPARAM)VAR_2, 0);

        FUNC_4(VAR_12, VAR_4, VAR_13->szAccountName);
        FUNC_4(VAR_12, VAR_6, VAR_13->szPassword1);
        FUNC_4(VAR_12, VAR_7, VAR_13->szPassword2);
    }

    VAR_13->bLocalSystem = VAR_14;
}
