
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_4__ {scalar_t__ selection_end; scalar_t__ composition_start; scalar_t__ selection_start; scalar_t__ composition_len; } ;
typedef int * LPWSTR ;
typedef int LONG ;
typedef int HIMC ;
typedef TYPE_1__ EDITSTATE ;


 int FUNC_0 (TYPE_1__*,int ,int *,int,int ,int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ,int *,int) ;
 int VAR_1 ;
 int * FUNC_3 (int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(HIMC VAR_2, EDITSTATE *VAR_3)
{
    LONG VAR_4;
    LPWSTR VAR_5;

    VAR_4 = FUNC_2(VAR_2, VAR_0, ((void*)0), 0);
    if (VAR_4 <= 0)
    {
        return;
    }

    VAR_5 = FUNC_3(VAR_4);
    if (!VAR_5)
    {
        FUNC_1("Unable to alloc buffer for IME string\n");
        return;
    }

    FUNC_2(VAR_2, VAR_0, VAR_5, VAR_4);


    if (VAR_3->selection_end < VAR_3->composition_start)
        VAR_3->composition_start = VAR_3->selection_end;

    VAR_3->selection_start = VAR_3->composition_start;
    VAR_3->selection_end = VAR_3->composition_start + VAR_3->composition_len;
    FUNC_0(VAR_3, VAR_1, VAR_5, VAR_4 / sizeof(WCHAR), VAR_1, VAR_1);
    VAR_3->composition_start = VAR_3->selection_end;
    VAR_3->composition_len = 0;

    FUNC_4(VAR_5);
}
