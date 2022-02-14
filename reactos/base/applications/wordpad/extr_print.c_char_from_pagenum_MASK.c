
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int bottom; } ;
struct TYPE_5__ {scalar_t__ cpMin; } ;
struct TYPE_7__ {TYPE_2__ rc; TYPE_1__ chrg; } ;
typedef int LPARAM ;
typedef int HWND ;
typedef TYPE_3__ FORMATRANGE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(HWND VAR_2, FORMATRANGE *VAR_3, int VAR_4)
{
    int VAR_5;

    VAR_3->chrg.cpMin = 0;

    for(VAR_5 = 1; VAR_5 < VAR_4; VAR_5++)
    {
        int VAR_6 = VAR_3->rc.bottom;
        VAR_3->chrg.cpMin = FUNC_0(VAR_2, VAR_0, VAR_1, (LPARAM)VAR_3);
        VAR_3->rc.bottom = VAR_6;
    }
}
