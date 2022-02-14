
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dwStyle; int orgStyle; int hwndSelf; } ;
typedef TYPE_1__ REBAR_INFO ;
typedef int LRESULT ;
typedef scalar_t__ HTHEME ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static LRESULT FUNC_3 (REBAR_INFO* VAR_2)
{
    HTHEME VAR_3 = FUNC_1 (VAR_2->hwndSelf);
    FUNC_0 (VAR_3);
    VAR_3 = FUNC_2 (VAR_2->hwndSelf, VAR_1);


    VAR_2->dwStyle &= ~VAR_0;
    VAR_2->dwStyle |= VAR_3 ? 0 : (VAR_2->orgStyle & VAR_0);
    return 0;
}
