
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int cx; int cy; } ;
struct TYPE_9__ {int cx; int cy; } ;
struct TYPE_8__ {int cy; float cx; } ;
struct TYPE_12__ {int zoomlevel; int pages_shown; float zoomratio; TYPE_3__ spacing; TYPE_2__ bmScaledSize; TYPE_1__ bmSize; } ;
struct TYPE_11__ {int bottom; int right; } ;
typedef TYPE_4__ RECT ;
typedef int HWND ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int ,TYPE_4__*) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 TYPE_6__ VAR_1 ;
 int FUNC_2 (int ,TYPE_4__*) ;

__attribute__((used)) static void FUNC_3(HWND VAR_2, BOOL VAR_3)
{
    RECT VAR_4;

    FUNC_0(VAR_2, &VAR_4);


    if (VAR_3 || VAR_1.zoomlevel != 1)
    {
        float VAR_5, VAR_6, VAR_7;
        if (VAR_1.zoomlevel == 2)
        {
            VAR_5 = 1.0;
        } else {
            VAR_6 = (VAR_4.bottom - VAR_0 * 2) / (float)VAR_1.bmSize.cy;

            VAR_7 = (float)(VAR_4.right -
                                 VAR_0 * (VAR_1.pages_shown + 1)) /
                         (VAR_1.pages_shown * VAR_1.bmSize.cx);

            if(VAR_7 > VAR_6)
                VAR_5 = VAR_6;
            else
                VAR_5 = VAR_7;

            if (VAR_1.zoomlevel == 1)
                VAR_5 += (1.0 - VAR_5) / 2;
        }
        VAR_1.zoomratio = VAR_5;
    }

    VAR_1.bmScaledSize.cx = VAR_1.bmSize.cx * VAR_1.zoomratio;
    VAR_1.bmScaledSize.cy = VAR_1.bmSize.cy * VAR_1.zoomratio;

    VAR_1.spacing.cy = FUNC_1(VAR_0, (VAR_4.bottom - VAR_1.bmScaledSize.cy) / 2);

    VAR_1.spacing.cx = (VAR_4.right -
                          VAR_1.bmScaledSize.cx * VAR_1.pages_shown) /
                         (VAR_1.pages_shown + 1);
    if (VAR_1.spacing.cx < VAR_0)
        VAR_1.spacing.cx = VAR_0;

    FUNC_2(VAR_2, &VAR_4);
}
