
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct message {int message; int flags; int id; int lParam; int wParam; int member_0; } ;
typedef int WPARAM ;
typedef int UINT ;
typedef int LPARAM ;
typedef int INT ;
typedef int HWND ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,int ,struct message*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;

__attribute__((used)) static void FUNC_1(HWND VAR_18, UINT VAR_19, WPARAM VAR_20, LPARAM VAR_21, INT VAR_22)
{
    struct message VAR_23 = { 0 };

    if (VAR_19 < VAR_12 &&
        VAR_19 != VAR_2 &&
        VAR_19 != VAR_3 &&
        VAR_19 != VAR_5 &&
        VAR_19 != VAR_4 &&
        VAR_19 != VAR_10 &&
        VAR_19 != VAR_1 &&
        VAR_19 != VAR_11 &&
        (VAR_19 < VAR_8 || VAR_19 > VAR_9) &&
        (VAR_19 < VAR_6 || VAR_19 > VAR_7) &&
        VAR_19 != 0x90)
    {
        VAR_23.message = VAR_19;
        VAR_23.flags = VAR_15|VAR_17|VAR_14|VAR_13;
        VAR_23.wParam = VAR_20;
        VAR_23.lParam = VAR_21;
        VAR_23.id = VAR_22;
        FUNC_0(VAR_16, VAR_0, &VAR_23);
    }
}
