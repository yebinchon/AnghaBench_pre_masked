
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_9__ {int x; int y; } ;
struct TYPE_8__ {int * hRebar; } ;
struct TYPE_7__ {int top; int bottom; int left; int right; } ;
typedef TYPE_1__ RECT ;
typedef TYPE_2__* PTOOLBAR_DOCKS ;
typedef TYPE_3__ POINT ;
typedef size_t DOCK_POSITION ;



 int FUNC_0 (int ,TYPE_1__*) ;




__attribute__((used)) static UINT
FUNC_1(PTOOLBAR_DOCKS VAR_0,
                        DOCK_POSITION VAR_1,
                        POINT VAR_2)
{
    RECT VAR_3;
    UINT VAR_4 = 0;

    FUNC_0(VAR_0->hRebar[VAR_1],
                  &VAR_3);

    switch (VAR_1)
    {
        case 128:
        case 131:
            if (VAR_2.y > VAR_3.top + ((VAR_3.bottom - VAR_3.top) / 2))
                VAR_4 = (UINT)-1;
            break;

        case 130:
        case 129:
            if (VAR_2.x > VAR_3.left + ((VAR_3.right - VAR_3.left) / 2))
                VAR_4 = (UINT)-1;
            break;

        default:
            break;
    }

    return VAR_4;
}
