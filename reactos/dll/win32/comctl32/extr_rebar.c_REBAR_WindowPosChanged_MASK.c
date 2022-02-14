
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WPARAM ;
struct TYPE_3__ {int hwndSelf; } ;
typedef int RECT ;
typedef TYPE_1__ REBAR_INFO ;
typedef int LRESULT ;
typedef int LPARAM ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (char*,int ,int ) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;

__attribute__((used)) static LRESULT
FUNC_4 (const REBAR_INFO *VAR_1, WPARAM VAR_2, LPARAM VAR_3)
{
    LRESULT VAR_4;
    RECT VAR_5;

    VAR_4 = FUNC_0(VAR_1->hwndSelf, VAR_0,
    VAR_2, VAR_3);
    FUNC_1(VAR_1->hwndSelf, &VAR_5);
    FUNC_2("hwnd %p new pos (%s)\n", VAR_1->hwndSelf, FUNC_3(&VAR_5));
    return VAR_4;
}
