
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int dwStyle; int hwndSelf; } ;
struct TYPE_9__ {int top; int left; } ;
typedef TYPE_1__ RECT ;
typedef TYPE_2__ REBAR_INFO ;
typedef int LRESULT ;
typedef int HTHEME ;
typedef int HDC ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,TYPE_1__*,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ,TYPE_1__*,int ,int ,int *) ;
 int VAR_5 ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*,int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (char*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_8 (TYPE_1__*) ;

__attribute__((used)) static LRESULT
FUNC_9 (const REBAR_INFO *VAR_8)
{
    RECT VAR_9;
    HDC VAR_10;
    HTHEME VAR_11;

    if (VAR_8->dwStyle & VAR_7)
 return 0;

    if (VAR_8->dwStyle & VAR_6) {


 if (!(VAR_10 = FUNC_2( VAR_8->hwndSelf, 0, VAR_3 | VAR_4 )))
     return 0;
 FUNC_3 (VAR_8->hwndSelf, &VAR_9);
 FUNC_5 (&VAR_9, -VAR_9.left, -VAR_9.top);
        FUNC_7("rect (%s)\n", FUNC_8(&VAR_9));
 FUNC_0 (VAR_10, &VAR_9, VAR_5, VAR_1);
 FUNC_6( VAR_8->hwndSelf, VAR_10 );
    }
    else if ((VAR_11 = FUNC_4 (VAR_8->hwndSelf)))
    {

        if (!(VAR_10 = FUNC_2( VAR_8->hwndSelf, 0, VAR_3 | VAR_4 )))
            return 0;
        FUNC_3 (VAR_8->hwndSelf, &VAR_9);
        FUNC_5 (&VAR_9, -VAR_9.left, -VAR_9.top);
        FUNC_7("rect (%s)\n", FUNC_8(&VAR_9));
        FUNC_1 (VAR_11, VAR_10, 0, 0, &VAR_9, VAR_0, VAR_2, ((void*)0));
        FUNC_6( VAR_8->hwndSelf, VAR_10 );
    }

    return 0;
}
