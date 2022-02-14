
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef char WCHAR ;
typedef int UINT ;
struct TYPE_6__ {int bottom; int top; } ;
struct TYPE_5__ {int cy; int cx; } ;
typedef TYPE_1__ SIZE ;
typedef TYPE_2__ RECT ;
typedef char* LPWSTR ;
typedef int LPARAM ;
typedef int HWND ;
typedef scalar_t__ HFONT ;
typedef int HDC ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*,int ,TYPE_1__*) ;
 int FUNC_3 (int ,TYPE_2__*) ;
 char* FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,int ,char*) ;
 int FUNC_6 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_7 (int ,scalar_t__) ;
 int FUNC_8 (int ,int ,int,int ) ;
 int FUNC_9 (int ,int *,int ,int ,int,int,int) ;
 int FUNC_10 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_11 (char*) ;
 scalar_t__ FUNC_12 (int ,int) ;
 int FUNC_13 (scalar_t__,int) ;

__attribute__((used)) static void FUNC_14(HWND VAR_6, UINT VAR_7, UINT VAR_8, BOOL VAR_9)
{
    LPWSTR VAR_10;
    UINT VAR_11, VAR_12;
    UINT VAR_13, VAR_14;
    SIZE VAR_15;
    RECT VAR_16;
    HDC VAR_17;
    WCHAR *VAR_18;
    HFONT VAR_19;

    FUNC_10("\n");

    VAR_11 = FUNC_8(VAR_6, VAR_5, 0, 0);
    VAR_10 = FUNC_4(FUNC_1(), 0, sizeof(WCHAR)*(VAR_11+1));
    if(!VAR_10) return;
    FUNC_8(VAR_6, VAR_4, VAR_11+1, (LPARAM)VAR_10);

    VAR_17 = FUNC_0(VAR_6);
    VAR_19 = (HFONT)FUNC_8(VAR_6, VAR_3, 0, 0);
    VAR_19 = FUNC_7(VAR_17, VAR_19);
    FUNC_2(VAR_17, VAR_10, FUNC_11(VAR_10), &VAR_15);
    FUNC_7(VAR_17, VAR_19);
    FUNC_6(VAR_6, VAR_17);

    if(VAR_11 && VAR_9)
    {

        for(VAR_13 = 1, VAR_18 = VAR_10; *VAR_18 != '\0'; VAR_18++)
            if(*VAR_18 == '\n') VAR_13++;

        VAR_14 = VAR_15.cy*VAR_13 + 2*4;
    }
    else
    {
        FUNC_3(VAR_6, &VAR_16);
        VAR_14 = VAR_16.bottom - VAR_16.top;
    }

    VAR_12 = FUNC_13(FUNC_12(VAR_15.cx, VAR_7) + 4, VAR_8);
    FUNC_9(VAR_6, ((void*)0), 0, 0, VAR_12, VAR_14,
                 VAR_2 | VAR_1 | VAR_0);

    FUNC_5(FUNC_1(), 0, VAR_10);
}
