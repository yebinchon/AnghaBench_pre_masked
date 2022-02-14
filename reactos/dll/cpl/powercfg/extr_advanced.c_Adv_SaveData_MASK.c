
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_4__ {int GlobalFlags; int SleepButtonDc; int PowerButtonDc; int LidCloseDc; int SleepButtonAc; int PowerButtonAc; int LidCloseAc; } ;
struct TYPE_5__ {TYPE_1__ user; } ;
typedef int HWND ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int VAR_10 ;
 int FUNC_3 (int ,char*,int *,int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int) ;
 int FUNC_6 (TYPE_2__*) ;
 TYPE_2__ VAR_11 ;

__attribute__((used)) static VOID
FUNC_7(HWND VAR_12)
{
    BOOL VAR_13;
    BOOL VAR_14;
    BOOL VAR_15;

    VAR_13 =
        (FUNC_2(VAR_12, VAR_8) == VAR_0);

    VAR_14 =
        (FUNC_2(VAR_12, VAR_5) == VAR_0);

    VAR_15 =
        (FUNC_2(VAR_12, VAR_9) == VAR_0);

    if (VAR_13)
    {
        if (!(VAR_11.user.GlobalFlags & VAR_2))
        {
            VAR_11.user.GlobalFlags = VAR_11.user.GlobalFlags + VAR_2;
        }
    }
    else
    {
        if ((VAR_11.user.GlobalFlags & VAR_2))
        {
            VAR_11.user.GlobalFlags = VAR_11.user.GlobalFlags - VAR_2;
        }
    }

    if (VAR_14)
    {
        if (!(VAR_11.user.GlobalFlags & VAR_1))
        {
            VAR_11.user.GlobalFlags = VAR_11.user.GlobalFlags + VAR_1;
        }
    }
    else
    {
        if ((VAR_11.user.GlobalFlags & VAR_1))
        {
            VAR_11.user.GlobalFlags = VAR_11.user.GlobalFlags - VAR_1;
        }
    }

    if (VAR_15)
    {
        if (!(VAR_11.user.GlobalFlags & VAR_3))
        {
            VAR_11.user.GlobalFlags = VAR_11.user.GlobalFlags + VAR_3;
        }
    }
    else
    {
        if ((VAR_11.user.GlobalFlags & VAR_3))
        {
            VAR_11.user.GlobalFlags = VAR_11.user.GlobalFlags - VAR_3;
        }
    }

    if (!FUNC_1())
    {



        FUNC_4(FUNC_0(VAR_12, VAR_6), &VAR_11.user.PowerButtonAc);
        FUNC_4(FUNC_0(VAR_12, VAR_7), &VAR_11.user.SleepButtonAc);
    }
    else
    {





    }

    if (!FUNC_6(&VAR_11))
    {
        FUNC_3(VAR_12, L"WriteGlobalPwrPolicy failed", ((void*)0), VAR_10);
    }

    FUNC_5(VAR_13);


}
