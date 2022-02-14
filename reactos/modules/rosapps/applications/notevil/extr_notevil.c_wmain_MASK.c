
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_10__ {int X; int Y; } ;
struct TYPE_9__ {int Right; int Left; int Bottom; int Top; } ;
struct TYPE_13__ {TYPE_2__ dwSize; TYPE_1__ srWindow; } ;
struct TYPE_12__ {int member_1; int member_0; } ;
struct TYPE_11__ {int QuadPart; } ;
typedef TYPE_3__ LARGE_INTEGER ;
typedef int DWORD ;
typedef TYPE_4__ COORD ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ,int *,int ,int *) ;
 scalar_t__ FUNC_2 (int *,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (scalar_t__,int ,int,TYPE_4__,int *) ;
 int VAR_4 ;
 int FUNC_4 (int ,TYPE_6__*) ;
 char* FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_8 () ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_6__ VAR_8 ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__,TYPE_3__*,int,int *,int *,int ) ;
 scalar_t__ VAR_9 ;
 char* VAR_10 ;
 int VAR_11 ;
 int FUNC_11 (char*,...) ;

int FUNC_12(int VAR_12, WCHAR* VAR_13[])
{
    LARGE_INTEGER VAR_14;
    DWORD VAR_15;
    COORD VAR_16 = { 0, 0 };

    VAR_11 = FUNC_6(((void*)0));

    FUNC_4(FUNC_7(VAR_6),
                               &VAR_8);
    VAR_8.dwSize.X = VAR_8.srWindow.Right - VAR_8.srWindow.Left + 1;
    VAR_8.dwSize.Y = VAR_8.srWindow.Bottom - VAR_8.srWindow.Top + 1;
    VAR_7 = FUNC_1(VAR_4,
                                             0,
                                             ((void*)0),
                                             VAR_0,
                                             ((void*)0));
    if (VAR_7 == VAR_5)
    {
        FUNC_11(L"%s: could not create a new screen buffer\n", VAR_10);
        return VAR_1;
    }


    FUNC_3(VAR_7,
                               0,
                               VAR_8.dwSize.X * VAR_8.dwSize.Y,
                               VAR_16,
                               &VAR_15);

    VAR_9 = FUNC_2(((void*)0), VAR_3, ((void*)0));
    if (VAR_9 == VAR_5)
    {
        FUNC_11(L"CreateWaitabletimer() failed\n");
        return 1;
    }
    VAR_14.QuadPart = -2000000;
    if (!FUNC_10(VAR_9, &VAR_14, 200, ((void*)0), ((void*)0), VAR_3))
    {
        FUNC_11(L"SetWaitableTimer() failed: 0x%lx\n", FUNC_5());
        return 2;
    }
    FUNC_9(VAR_7);
    FUNC_8();
    FUNC_0(VAR_7);
    return VAR_2;
}
