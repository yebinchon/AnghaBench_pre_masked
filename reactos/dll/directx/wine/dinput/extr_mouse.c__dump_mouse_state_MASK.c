
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * rgbButtons; int lZ; int lY; int lX; } ;
typedef TYPE_1__ DIMOUSESTATE2 ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(const DIMOUSESTATE2 *VAR_1)
{
    int VAR_2;

    if (!FUNC_1(VAR_0)) return;

    FUNC_0("(X: %d Y: %d Z: %d", VAR_1->lX, VAR_1->lY, VAR_1->lZ);
    for (VAR_2 = 0; VAR_2 < 5; VAR_2++) FUNC_0(" B%d: %02x", VAR_2, VAR_1->rgbButtons[VAR_2]);
    FUNC_0(")\n");
}
