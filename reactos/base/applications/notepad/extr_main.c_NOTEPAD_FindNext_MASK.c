
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ WPARAM ;
struct TYPE_6__ {int hFindReplaceDlg; int hInstance; int hEdit; } ;
struct TYPE_5__ {int Flags; scalar_t__ lpstrFindWhat; scalar_t__ lpstrReplaceWith; } ;
typedef int TCHAR ;
typedef int * LPTSTR ;
typedef scalar_t__ LPARAM ;
typedef TYPE_1__ FINDREPLACE ;
typedef scalar_t__ DWORD ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int *,int) ;
 int FUNC_3 (int ) ;
 TYPE_4__ VAR_6 ;
 scalar_t__ FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,int ,int *) ;
 int FUNC_6 (int ,int ,int *,int ) ;
 int VAR_7 ;
 int FUNC_7 (int ,int *,int *,int ) ;
 scalar_t__ FUNC_8 (TYPE_1__*,int *,int,scalar_t__) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_9 (int ,int ,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_10 ;
 int FUNC_10 (int *,int ,int *,scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__) ;

BOOL FUNC_12(FINDREPLACE *VAR_11, BOOL VAR_12, BOOL VAR_13)
{
    int VAR_14, VAR_15;
    size_t VAR_16 = 0;
    LPTSTR VAR_17 = ((void*)0);
    DWORD VAR_18, VAR_19, VAR_20;
    BOOL VAR_21 = VAR_4;
    TCHAR VAR_22[128], VAR_23[128];
    BOOL VAR_24;

    VAR_15 = (int) FUNC_11(VAR_11->lpstrFindWhat);


    VAR_14 = FUNC_3(VAR_6.hEdit);
    if (VAR_14 > 0)
    {
        VAR_17 = (LPTSTR) FUNC_4(FUNC_1(), 0, (VAR_14 + 1) * sizeof(TCHAR));
        if (!VAR_17)
            return VAR_4;

        FUNC_2(VAR_6.hEdit, VAR_17, VAR_14 + 1);
    }

    FUNC_9(VAR_6.hEdit, VAR_0, (WPARAM) &VAR_19, (LPARAM) &VAR_20);
    if (VAR_12 && ((VAR_20 - VAR_19) == (DWORD) VAR_15))
    {
        if (FUNC_8(VAR_11, VAR_17, VAR_14, VAR_19))
        {
            FUNC_9(VAR_6.hEdit, VAR_1, VAR_10, (LPARAM) VAR_11->lpstrReplaceWith);
            VAR_16 = FUNC_11(VAR_11->lpstrReplaceWith) - (VAR_20 - VAR_19);
        }
    }

    if (VAR_11->Flags & VAR_5)
    {

        VAR_18 = VAR_20;
        while(VAR_18 < (DWORD) VAR_14)
        {
            VAR_21 = FUNC_8(VAR_11, VAR_17, VAR_14, VAR_18);
            if (VAR_21)
                break;
            VAR_18++;
        }
    }
    else
    {

        VAR_18 = VAR_19;
        while(VAR_18 > 0)
        {
            VAR_18--;
            VAR_21 = FUNC_8(VAR_11, VAR_17, VAR_14, VAR_18);
            if (VAR_21)
                break;
        }
    }

    if (VAR_21)
    {

        if (VAR_18 > VAR_19)
            VAR_18 += (DWORD) VAR_16;
        FUNC_9(VAR_6.hEdit, VAR_3, VAR_18, VAR_18 + VAR_15);
        FUNC_9(VAR_6.hEdit, VAR_2, 0, 0);
        VAR_24 = VAR_10;
    }
    else
    {

        if (VAR_13)
        {
            FUNC_6(VAR_6.hInstance, VAR_8, VAR_22, FUNC_0(VAR_22));
            FUNC_10(VAR_23, FUNC_0(VAR_23), VAR_22, VAR_11->lpstrFindWhat);
            FUNC_6(VAR_6.hInstance, VAR_9, VAR_22, FUNC_0(VAR_22));
            FUNC_7(VAR_6.hFindReplaceDlg, VAR_23, VAR_22, VAR_7);
        }
        VAR_24 = VAR_4;
    }

    if (VAR_17)
        FUNC_5(FUNC_1(), 0, VAR_17);
    return VAR_24;
}
