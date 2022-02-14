
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct recvd_message {scalar_t__ message; int flags; char* descr; int lParam; int wParam; scalar_t__ hwnd; } ;
struct TYPE_4__ {scalar_t__ message; int lParam; int wParam; scalar_t__ hwnd; } ;
typedef TYPE_1__ MSG ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 () ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ,int ,int ,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (struct recvd_message*) ;
 int VAR_5 ;
 int FUNC_4 (int ,int,int ,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_5(DWORD VAR_8, BOOL VAR_9)
{
    MSG VAR_10;
    DWORD VAR_11, VAR_12;

    VAR_11 = FUNC_1();

    VAR_11 += VAR_8 / 2;

    do
    {
        while (FUNC_2(&VAR_10, 0, 0, 0, VAR_2))
        {



            if ((VAR_10.message == VAR_4 || VAR_10.message == VAR_3) && VAR_10.hwnd)
            {
                struct recvd_message VAR_13;

                VAR_13.hwnd = VAR_10.hwnd;
                VAR_13.message = VAR_10.message;
                VAR_13.flags = VAR_6|VAR_7|VAR_5;
                VAR_13.wParam = VAR_10.wParam;
                VAR_13.lParam = VAR_10.lParam;
                VAR_13.descr = "msg_loop";
                FUNC_3(&VAR_13);
            }
            FUNC_0(&VAR_10);
        }

        VAR_12 = FUNC_1();


        if (VAR_9 && VAR_11 + VAR_8 / 2 >= VAR_12)
        {
            FUNC_4(VAR_1, -1, 0, 0, 0);
            FUNC_4(VAR_1, 1, 0, 0, 0);

            VAR_9 = VAR_0;
        }
    } while (VAR_11 + VAR_8 >= VAR_12);
}
