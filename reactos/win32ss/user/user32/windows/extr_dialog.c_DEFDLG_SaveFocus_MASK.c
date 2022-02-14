
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ hwndFocus; } ;
typedef scalar_t__ HWND ;
typedef TYPE_1__ DIALOGINFO ;


 TYPE_1__* FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_3( HWND VAR_0 )
{
    DIALOGINFO *VAR_1;
    HWND VAR_2 = FUNC_1();

    if (!VAR_2 || !FUNC_2( VAR_0, VAR_2 )) return;
    if (!(VAR_1 = FUNC_0(VAR_0))) return;
    VAR_1->hwndFocus = VAR_2;

}
