
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {size_t current_tab; TYPE_1__* tabs; int hwndTabCtrl; } ;
struct TYPE_3__ {int id; scalar_t__ hwnd; } ;
typedef int LRESULT ;
typedef int HWND ;
typedef TYPE_2__ HHInfo ;


 int FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (scalar_t__,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (char*,int ) ;

__attribute__((used)) static LRESULT FUNC_5(HWND VAR_4)
{
    HHInfo *VAR_5 = (HHInfo*)FUNC_1(VAR_4, 0);
    int VAR_6, VAR_7, VAR_8;

    FUNC_4("%p\n", VAR_4);

    if (!VAR_5)
        return 0;

    if(VAR_5->tabs[VAR_5->current_tab].hwnd)
        FUNC_3(VAR_5->tabs[VAR_5->current_tab].hwnd, VAR_0);

    VAR_6 = (int) FUNC_2(VAR_5->hwndTabCtrl, VAR_3, 0, 0);

    VAR_7 = -1;
    for (VAR_8=0; VAR_8<VAR_2; VAR_8++)
    {
        if (VAR_5->tabs[VAR_8].id == VAR_6)
        {
            VAR_7 = VAR_8;
            break;
        }
    }
    if (VAR_7 == -1)
    {
        FUNC_0("Tab ID %d does not correspond to a valid index in the tab list.\n", VAR_6);
        return 0;
    }
    VAR_5->current_tab = VAR_7;

    if(VAR_5->tabs[VAR_5->current_tab].hwnd)
        FUNC_3(VAR_5->tabs[VAR_5->current_tab].hwnd, VAR_1);

    return 0;
}
