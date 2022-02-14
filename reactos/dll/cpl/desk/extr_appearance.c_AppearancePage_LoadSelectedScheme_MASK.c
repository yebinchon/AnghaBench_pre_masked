
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ ThemeActive; } ;
struct TYPE_10__ {int * crColor; } ;
struct TYPE_9__ {int desktop_color; } ;
struct TYPE_8__ {TYPE_3__ Scheme; TYPE_4__ ActiveTheme; } ;
typedef int HWND ;
typedef TYPE_1__ GLOBALS ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_1 (TYPE_3__*,TYPE_4__*) ;
 TYPE_2__ VAR_2 ;

__attribute__((used)) static void
FUNC_2(HWND VAR_3, GLOBALS *VAR_4)
{
    if (VAR_4->ActiveTheme.ThemeActive == VAR_1 )
    {
        FUNC_0(&VAR_4->Scheme, &VAR_4->ActiveTheme);
    }
    else
    {
        FUNC_1(&VAR_4->Scheme, &VAR_4->ActiveTheme);
    }

    VAR_2.desktop_color = VAR_4->Scheme.crColor[VAR_0];
}
