
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Flags; int lpstrFindWhat; } ;
typedef int * LPCTSTR ;
typedef TYPE_1__ FINDREPLACE ;
typedef size_t DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,size_t) ;
 int FUNC_3 (int *,int ,size_t) ;

__attribute__((used)) static BOOL
FUNC_4(FINDREPLACE *VAR_3, LPCTSTR VAR_4, int VAR_5, DWORD VAR_6)
{
    BOOL VAR_7;
    size_t VAR_8;

    if ((!VAR_3) || (!VAR_4))
    {
        return VAR_0;
    }

    VAR_8 = FUNC_1(VAR_3->lpstrFindWhat);


    if (VAR_3->Flags & VAR_1)
        VAR_7 = !FUNC_2(&VAR_4[VAR_6], VAR_3->lpstrFindWhat, VAR_8);
    else
        VAR_7 = !FUNC_3(&VAR_4[VAR_6], VAR_3->lpstrFindWhat, VAR_8);

    if (VAR_7 && VAR_3->Flags & VAR_2)
    {
        if ((VAR_6 > 0) && !FUNC_0(VAR_4[VAR_6-1]))
            VAR_7 = VAR_0;
        if ((VAR_6 < (DWORD) VAR_5 - 1) && !FUNC_0(VAR_4[VAR_6+1]))
            VAR_7 = VAR_0;
    }

    return VAR_7;
}
