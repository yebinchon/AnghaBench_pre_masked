
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int sbi ;
struct TYPE_8__ {int cx; int cy; } ;
struct TYPE_11__ {scalar_t__ zoomlevel; int pages_shown; TYPE_1__ bmScaledSize; } ;
struct TYPE_10__ {int bottom; int right; } ;
struct TYPE_9__ {int cbSize; int fMask; int nMax; int nPage; scalar_t__ nMin; } ;
typedef TYPE_2__ SCROLLINFO ;
typedef TYPE_3__ RECT ;
typedef int HWND ;


 int FUNC_0 (int ,TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,TYPE_2__*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_5__ VAR_6 ;

__attribute__((used)) static void FUNC_2(HWND VAR_7, RECT *VAR_8)
{
    SCROLLINFO VAR_9;
    VAR_9.cbSize = sizeof(VAR_9);
    VAR_9.fMask = VAR_2|VAR_3;
    VAR_9.nMin = 0;
    if (VAR_6.zoomlevel == 0)
    {

        VAR_9.nMax = 0;
        VAR_9.nPage = VAR_8->right;
        FUNC_1(VAR_7, VAR_0, &VAR_9, VAR_4);
        VAR_9.nPage = VAR_8->bottom;
        FUNC_1(VAR_7, VAR_1, &VAR_9, VAR_4);
    } else {
        VAR_9.nMax = VAR_6.bmScaledSize.cx * VAR_6.pages_shown +
                   VAR_5 * (VAR_6.pages_shown + 1);
        VAR_9.nPage = VAR_8->right;
        FUNC_1(VAR_7, VAR_0, &VAR_9, VAR_4);


        FUNC_0(VAR_7, VAR_8);
        VAR_9.nMax = VAR_6.bmScaledSize.cy + VAR_5 * 2;
        VAR_9.nPage = VAR_8->bottom;
        FUNC_1(VAR_7, VAR_1, &VAR_9, VAR_4);
    }
}
