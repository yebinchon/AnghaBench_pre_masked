
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int dwStyle; int hwndSelf; } ;
struct TYPE_6__ {scalar_t__ left; scalar_t__ right; scalar_t__ top; scalar_t__ bottom; } ;
typedef TYPE_1__ RECT ;
typedef TYPE_2__ REBAR_INFO ;
typedef int LRESULT ;
typedef int HTHEME ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*,int ) ;
 int VAR_2 ;
 void* FUNC_3 (scalar_t__,scalar_t__) ;
 void* FUNC_4 (scalar_t__,scalar_t__) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static inline LRESULT
FUNC_6 (const REBAR_INFO *VAR_3, RECT *VAR_4)
{
    HTHEME VAR_5;

    if (VAR_3->dwStyle & VAR_2) {
        VAR_4->left = FUNC_4(VAR_4->left + FUNC_0(VAR_0), VAR_4->right);
        VAR_4->right = FUNC_3(VAR_4->right - FUNC_0(VAR_0), VAR_4->left);
        VAR_4->top = FUNC_4(VAR_4->top + FUNC_0(VAR_1), VAR_4->bottom);
        VAR_4->bottom = FUNC_3(VAR_4->bottom - FUNC_0(VAR_1), VAR_4->top);
    }
    else if ((VAR_5 = FUNC_1 (VAR_3->hwndSelf)))
    {




        VAR_4->top = FUNC_4(VAR_4->top + 1, VAR_4->bottom);

    }
    FUNC_2("new client=(%s)\n", FUNC_5(VAR_4));
    return 0;
}
