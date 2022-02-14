
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int dwStyle; int hwndHeader; int hwndSelf; } ;
struct TYPE_8__ {int y; int x; } ;
struct TYPE_7__ {int bottom; int right; int top; int left; } ;
typedef TYPE_1__ RECT ;
typedef TYPE_2__ POINT ;
typedef TYPE_3__ LISTVIEW_INFO ;
typedef int INT ;


 int FUNC_0 (int ,TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,TYPE_2__*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int ,int ,int ,int ,int ,int) ;
 int FUNC_3 (char*,int ) ;

__attribute__((used)) static void FUNC_4(const LISTVIEW_INFO *VAR_6, INT VAR_7)
{
    RECT VAR_8;
    POINT VAR_9[2];

    FUNC_3("nNewScrollPos=%d\n", VAR_7);

    if (!VAR_6->hwndHeader) return;

    FUNC_0(VAR_6->hwndHeader, &VAR_8);
    VAR_9[0].x = VAR_8.left;
    VAR_9[0].y = VAR_8.top;
    VAR_9[1].x = VAR_8.right;
    VAR_9[1].y = VAR_8.bottom;

    FUNC_1(VAR_0, VAR_6->hwndSelf, VAR_9, 2);
    VAR_9[0].x = -VAR_7;
    VAR_9[1].x += VAR_7;

    FUNC_2(VAR_6->hwndHeader,0,
        VAR_9[0].x,VAR_9[0].y,VAR_9[1].x,VAR_9[1].y,
        (VAR_6->dwStyle & VAR_1) ? VAR_2 : VAR_5 |
        VAR_4 | VAR_3);
}
