
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct recvd_message {scalar_t__ message; int flags; char* descr; int lParam; int wParam; int hwnd; } ;
struct TYPE_6__ {scalar_t__ message; int lParam; int wParam; int hwnd; } ;
typedef TYPE_1__ MSG ;
typedef int HWND ;
typedef int HACCEL ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (struct recvd_message*) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_6(HWND VAR_5, HACCEL VAR_6)
{
    MSG VAR_7;

    while (FUNC_1(&VAR_7, 0, 0, 0, VAR_0))
    {
        struct recvd_message VAR_8;


        if (VAR_7.message == VAR_1 ||
            VAR_7.message == VAR_2 ||
            FUNC_5( VAR_7.message ))
            continue;

        VAR_8.hwnd = VAR_7.hwnd;
        VAR_8.message = VAR_7.message;
        VAR_8.flags = VAR_4|VAR_3;
        VAR_8.wParam = VAR_7.wParam;
        VAR_8.lParam = VAR_7.lParam;
        VAR_8.descr = "accel";
        FUNC_4(&VAR_8);

        if (!VAR_6 || !FUNC_2(VAR_5, VAR_6, &VAR_7))
        {
            FUNC_3(&VAR_7);
            FUNC_0(&VAR_7);
        }
    }
}
