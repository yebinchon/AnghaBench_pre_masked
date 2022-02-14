
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ composition_len; scalar_t__ selection_start; scalar_t__ selection_end; scalar_t__ composition_start; int flags; } ;
typedef int LPARAM ;
typedef int HWND ;
typedef int HIMC ;
typedef TYPE_1__ EDITSTATE ;


 int FUNC_0 (TYPE_1__*,int ,int ,int ,int ) ;
 int FUNC_1 (int ,int,TYPE_1__*) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,scalar_t__,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_7(HWND VAR_6, LPARAM VAR_7, EDITSTATE *VAR_8)
{
    HIMC VAR_9;
    int VAR_10;

    if (VAR_8->composition_len == 0 && VAR_8->selection_start != VAR_8->selection_end)
    {
        FUNC_0(VAR_8, VAR_4, VAR_5, VAR_4, VAR_4);
        VAR_8->composition_start = VAR_8->selection_end;
    }

    VAR_9 = FUNC_5(VAR_6);
    if (!VAR_9)
        return;

    if (VAR_7 & VAR_3)
    {
        FUNC_2(VAR_9, VAR_8);
        VAR_10 = 0;
    }
    else
    {
        if (VAR_7 & VAR_1)
            FUNC_1(VAR_9, VAR_7, VAR_8);
        VAR_10 = FUNC_4(VAR_9, VAR_2, 0, 0);
    }
    FUNC_6(VAR_6, VAR_9);
    FUNC_3(VAR_8, VAR_8->selection_start + VAR_10, VAR_8->flags & VAR_0);
}
