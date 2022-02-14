
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_17__ {scalar_t__ uView; int nItemHeight; } ;
struct TYPE_16__ {scalar_t__ y; int x; } ;
struct TYPE_15__ {int bottom; scalar_t__ top; } ;
typedef TYPE_1__ RECT ;
typedef TYPE_2__ POINT ;
typedef TYPE_3__ LISTVIEW_INFO ;
typedef int INT ;


 int FUNC_0 (TYPE_3__ const*,int ,TYPE_1__*) ;
 int FUNC_1 (TYPE_3__ const*,int ,TYPE_2__*) ;
 int FUNC_2 (TYPE_3__ const*,TYPE_2__*) ;
 int FUNC_3 (TYPE_3__ const*,TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (TYPE_1__*,int ,scalar_t__) ;
 int FUNC_5 (int) ;
 int FUNC_6 (TYPE_3__ const*) ;

__attribute__((used)) static inline void FUNC_7(const LISTVIEW_INFO *VAR_1, INT VAR_2, INT VAR_3)
{
    POINT VAR_4, VAR_5;
    RECT VAR_6;

    if(!FUNC_6(VAR_1)) return;
    FUNC_5 (VAR_1->uView == VAR_0);
    FUNC_2(VAR_1, &VAR_4);
    FUNC_1(VAR_1, VAR_2, &VAR_5);
    FUNC_0(VAR_1, VAR_3, &VAR_6);
    VAR_6.top = 0;
    VAR_6.bottom = VAR_1->nItemHeight;
    FUNC_4(&VAR_6, VAR_4.x, VAR_4.y + VAR_5.y);
    FUNC_3(VAR_1, &VAR_6);
}
