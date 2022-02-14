
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hMainWnd; int hInstance; } ;
typedef int LPWSTR ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 TYPE_1__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ,int ,int ,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(LPWSTR VAR_6)
{
    if (FUNC_2(VAR_0.hMainWnd, VAR_0.hInstance,
                      VAR_4, VAR_5,
                      VAR_2 | VAR_3) != VAR_1)
    {
        return;
    }

    if (!FUNC_3(VAR_0.hMainWnd))
    {
        FUNC_5(VAR_0.hMainWnd);
        return;
    }

    FUNC_1();
    FUNC_4(VAR_6);

    FUNC_0();
}
