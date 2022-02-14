
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int uItemHeight; int dwStyle; int bHeightSet; } ;
typedef TYPE_1__ TREEVIEW_INFO ;
typedef int LRESULT ;
typedef int INT ;


 int VAR_0 ;
 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static LRESULT
FUNC_5(TREEVIEW_INFO *VAR_3, INT VAR_4)
{
    INT VAR_5 = VAR_3->uItemHeight;

    FUNC_0("new=%d, old=%d\n", VAR_4, VAR_5);
    if (VAR_4 == -1)
    {
 VAR_3->uItemHeight = FUNC_2(VAR_3);
 VAR_3->bHeightSet = VAR_0;
    }
    else
    {
        if (VAR_4 == 0) VAR_4 = 1;
        VAR_3->uItemHeight = VAR_4;
        VAR_3->bHeightSet = VAR_1;
    }


    if (!(VAR_3->dwStyle & VAR_2) && VAR_3->uItemHeight != 1)
    {
        VAR_3->uItemHeight &= ~1;
        FUNC_0("after rounding=%d\n", VAR_3->uItemHeight);
    }

    if (VAR_3->uItemHeight != VAR_5)
    {
 FUNC_3(VAR_3, ((void*)0));
 FUNC_4(VAR_3);
 FUNC_1(VAR_3, ((void*)0));
    }

    return VAR_5;
}
