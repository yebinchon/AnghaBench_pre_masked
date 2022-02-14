
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int y; int x; } ;
typedef int RECT ;
typedef TYPE_1__ POINT ;
typedef int LISTVIEW_INFO ;
typedef int ITERATOR ;
typedef int BOOL ;


 int FUNC_0 (int const*,TYPE_1__*) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int *,int const*,int *) ;
 int FUNC_4 (int const*) ;

__attribute__((used)) static BOOL FUNC_5(ITERATOR* VAR_0, const LISTVIEW_INFO* VAR_1, const RECT *VAR_2)
{
    RECT VAR_3 = *VAR_2;
    POINT VAR_4;

    FUNC_2("(lprc=%s)\n", FUNC_4(VAR_2));

    FUNC_0(VAR_1, &VAR_4);
    FUNC_1(&VAR_3, -VAR_4.x, -VAR_4.y);

    return FUNC_3(VAR_0, VAR_1, &VAR_3);
}
