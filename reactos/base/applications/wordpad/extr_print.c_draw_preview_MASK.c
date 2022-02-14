
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int* pageEnds; int pageCapacity; } ;
struct TYPE_7__ {int bottom; } ;
struct TYPE_6__ {int cpMin; } ;
struct TYPE_8__ {TYPE_2__ rc; TYPE_1__ chrg; int hdc; } ;
typedef int RECT ;
typedef int LPARAM ;
typedef int HWND ;
typedef TYPE_3__ FORMATRANGE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int* FUNC_3 (int ,int ,int) ;
 int* FUNC_4 (int ,int ,int*,int) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_6 (int) ;
 TYPE_4__ VAR_4 ;

__attribute__((used)) static void FUNC_7(HWND VAR_5, FORMATRANGE* VAR_6, RECT* VAR_7, int VAR_8)
{
    int VAR_9;

    if (!VAR_4.pageEnds)
    {
        VAR_4.pageCapacity = 32;
        VAR_4.pageEnds = FUNC_3(FUNC_1(), 0,
                                    sizeof(int) * VAR_4.pageCapacity);
        if (!VAR_4.pageEnds) return;
    } else if (VAR_8 >= VAR_4.pageCapacity) {
        int *VAR_10;
        VAR_10 = FUNC_4(FUNC_1(), 0, VAR_4.pageEnds,
                                 sizeof(int) * VAR_4.pageCapacity * 2);
        if (!VAR_10) return;
        VAR_4.pageCapacity *= 2;
        VAR_4.pageEnds = VAR_10;
    }

    FUNC_0(VAR_6->hdc, VAR_7, FUNC_2(VAR_3));
    if (VAR_8 > 1 && FUNC_6(VAR_8 - 1)) return;
    VAR_6->chrg.cpMin = VAR_8 <= 1 ? 0 : VAR_4.pageEnds[VAR_8-2];
    VAR_9 = VAR_6->rc.bottom;
    VAR_4.pageEnds[VAR_8-1] = FUNC_5(VAR_5, VAR_0, VAR_2, (LPARAM)VAR_6);



    VAR_6->rc.bottom = VAR_9;
    FUNC_5(VAR_5, VAR_0, VAR_1, 0);
}
