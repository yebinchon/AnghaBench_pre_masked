
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int VOID ;
typedef int UINT ;
struct TYPE_4__ {int dwFlags; int iWindowsEffect; } ;
struct TYPE_5__ {scalar_t__ bShowSounds; TYPE_1__ ssSoundSentry; } ;
typedef int TCHAR ;
typedef TYPE_2__* PGLOBAL_DATA ;
typedef int LPARAM ;
typedef int HWND ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_3 ;
 int FUNC_2 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (int ,scalar_t__,int *,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (int ,int ,int ,int ,int ) ;
 int VAR_11 ;

__attribute__((used)) static VOID
FUNC_5(HWND VAR_12, PGLOBAL_DATA VAR_13)
{
    TCHAR VAR_14[256];
    UINT VAR_15;


    for (VAR_15 = 0; VAR_15 < 4; VAR_15++)
    {
        FUNC_3(VAR_11, VAR_8 + VAR_15, VAR_14, 256);
        FUNC_4(VAR_12, VAR_5, VAR_1, 0, (LPARAM)VAR_14);
    }


    FUNC_4(VAR_12, VAR_5, VAR_2, VAR_13->ssSoundSentry.iWindowsEffect, 0);


    if (!(VAR_13->ssSoundSentry.dwFlags & VAR_9))
    {
        FUNC_1(FUNC_2(VAR_12, VAR_4), VAR_3);
        FUNC_1(FUNC_2(VAR_12, VAR_6), VAR_3);
        FUNC_1(FUNC_2(VAR_12, VAR_5), VAR_3);
    }
    else
    {
        if (VAR_13->ssSoundSentry.dwFlags & VAR_10)
        {
            FUNC_0(VAR_12, VAR_4, VAR_0);
        }
        else
        {
            FUNC_1(FUNC_2(VAR_12, VAR_6), VAR_3);
            FUNC_1(FUNC_2(VAR_12, VAR_5), VAR_3);
        }
    }


    if (VAR_13->bShowSounds)
        FUNC_0(VAR_12, VAR_7, VAR_0);
}
