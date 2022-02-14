
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ right; scalar_t__ left; } ;
struct TYPE_11__ {TYPE_7__ bound; } ;
struct TYPE_10__ {scalar_t__ clrBk; int Self; } ;
typedef TYPE_1__ STATUS_INFO ;
typedef TYPE_2__ STATUSWINDOWPART ;
typedef int RECT ;
typedef int HTHEME ;
typedef int HDC ;
typedef int HBRUSH ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int ,int *,TYPE_7__*) ;
 int FUNC_3 (int ,TYPE_7__*,int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,TYPE_7__*) ;
 int FUNC_8 (TYPE_1__ const*,int ,TYPE_2__ const*,int) ;
 int FUNC_9 (char*,int) ;

__attribute__((used)) static void
FUNC_10 (const STATUS_INFO *VAR_2, HDC VAR_3, const STATUSWINDOWPART *VAR_4, int VAR_5)
{
    HBRUSH VAR_6;
    HTHEME VAR_7;

    FUNC_9("item %d\n", VAR_5);

    if (VAR_4->bound.right < VAR_4->bound.left) return;

    if (!FUNC_7(VAR_3, &VAR_4->bound))
        return;

    if ((VAR_7 = FUNC_6 (VAR_2->Self)))
    {
        RECT VAR_8;
        FUNC_4 (VAR_2->Self, &VAR_8);
        FUNC_2(VAR_7, VAR_3, 0, 0, &VAR_8, &VAR_4->bound);
    }
    else
    {
        if (VAR_2->clrBk != VAR_0)
                VAR_6 = FUNC_0 (VAR_2->clrBk);
        else
                VAR_6 = FUNC_5 (VAR_1);
        FUNC_3(VAR_3, &VAR_4->bound, VAR_6);
        if (VAR_2->clrBk != VAR_0)
                FUNC_1 (VAR_6);
    }

    FUNC_8 (VAR_2, VAR_3, VAR_4, VAR_5);
}
