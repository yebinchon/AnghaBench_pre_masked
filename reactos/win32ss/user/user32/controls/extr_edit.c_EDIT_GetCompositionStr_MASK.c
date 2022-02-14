
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_4__ {scalar_t__ selection_end; scalar_t__ composition_start; scalar_t__ selection_start; scalar_t__ composition_len; } ;
typedef scalar_t__* LPWSTR ;
typedef scalar_t__* LPSTR ;
typedef int LPARAM ;
typedef int LONG ;
typedef int HIMC ;
typedef TYPE_1__ EDITSTATE ;
typedef int DWORD ;


 int FUNC_0 (TYPE_1__*,int ,scalar_t__*,int ,int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 () ;
 scalar_t__* FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,scalar_t__*) ;
 int FUNC_5 (int ,int,scalar_t__*,int) ;
 int VAR_3 ;
 scalar_t__ FUNC_6 (scalar_t__) ;

__attribute__((used)) static void FUNC_7(HIMC VAR_4, LPARAM VAR_5, EDITSTATE *VAR_6)
{
    LONG VAR_7;
    LPWSTR VAR_8;
    LPSTR VAR_9 = ((void*)0);
    DWORD VAR_10;

    VAR_7 = FUNC_5(VAR_4, VAR_2, ((void*)0), 0);

    if (VAR_7 < 0)
    {
        return;
    }

    VAR_8 = FUNC_3(FUNC_2(),0,VAR_7 + sizeof(WCHAR));
    if (!VAR_8)
    {
        FUNC_1("Unable to allocate IME CompositionString\n");
        return;
    }

    if (VAR_7)
        FUNC_5(VAR_4, VAR_2, VAR_8, VAR_7);
    VAR_8[VAR_7/sizeof(WCHAR)] = 0;

    if (VAR_5 & VAR_1)
    {




        VAR_10 = FUNC_5(VAR_4, VAR_1, ((void*)0), 0);
        if (VAR_10)
        {
            VAR_10 ++;
            VAR_9 = FUNC_3(FUNC_2(),0,VAR_10+1);
            if (!VAR_9)
            {
                FUNC_1("Unable to allocate IME Attribute String\n");
                FUNC_4(FUNC_2(),0,VAR_8);
                return;
            }
            FUNC_5(VAR_4,VAR_1, VAR_9,
                    VAR_10);
            VAR_9[VAR_10] = 0;
        }
    }


    if (VAR_6->selection_end < VAR_6->composition_start)
        VAR_6->composition_start = VAR_6->selection_end;


    VAR_6->selection_start = VAR_6->composition_start;

    if (VAR_6->composition_len > 0)
        VAR_6->selection_end = VAR_6->composition_start + VAR_6->composition_len;
    else
        VAR_6->selection_end = VAR_6->selection_start;

    FUNC_0(VAR_6, VAR_0, VAR_8, VAR_3, VAR_3);
    VAR_6->composition_len = FUNC_6(VAR_6->composition_start - VAR_6->selection_end);

    VAR_6->selection_start = VAR_6->composition_start;
    VAR_6->selection_end = VAR_6->selection_start + VAR_6->composition_len;

    FUNC_4(FUNC_2(),0,VAR_9);
    FUNC_4(FUNC_2(),0,VAR_8);
}
