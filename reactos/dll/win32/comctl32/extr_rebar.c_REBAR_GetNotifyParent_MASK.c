
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int hwndSelf; scalar_t__ hwndNotify; } ;
typedef TYPE_1__ REBAR_INFO ;
typedef scalar_t__ HWND ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static HWND
FUNC_2 (const REBAR_INFO *VAR_1)
{
    HWND VAR_2, VAR_3;

    VAR_2 = VAR_1->hwndNotify;
    if (!VAR_2) {
        VAR_2 = FUNC_0 (VAR_1->hwndSelf);
 VAR_3 = FUNC_1 (VAR_1->hwndSelf, VAR_0);
 if (VAR_3) VAR_2 = VAR_3;
    }
    return VAR_2;
}
