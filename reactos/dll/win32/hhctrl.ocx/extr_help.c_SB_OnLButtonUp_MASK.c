
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int WPARAM ;
struct TYPE_4__ {short iNavWidth; } ;
struct TYPE_6__ {TYPE_1__ WinType; } ;
struct TYPE_5__ {short x; short y; } ;
typedef TYPE_2__ POINT ;
typedef int LPARAM ;
typedef int HWND ;
typedef TYPE_3__ HHInfo ;


 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(HWND VAR_0, WPARAM VAR_1, LPARAM VAR_2)
{
    HHInfo *VAR_3 = (HHInfo *)FUNC_0(VAR_0, 0);
    POINT VAR_4;

    VAR_4.x = (short)FUNC_3(VAR_2);
    VAR_4.y = (short)FUNC_1(VAR_2);


    VAR_3->WinType.iNavWidth += VAR_4.x;
    FUNC_2(VAR_0);

    FUNC_4();
}
