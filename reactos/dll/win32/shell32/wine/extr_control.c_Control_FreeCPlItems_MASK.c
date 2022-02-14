
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {unsigned int total_subprogs; } ;
struct TYPE_5__ {int cbSize; scalar_t__ dwItemData; int fMask; } ;
typedef TYPE_1__ MENUITEMINFOW ;
typedef int LPVOID ;
typedef int HWND ;
typedef int HMENU ;
typedef TYPE_2__ CPanel ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned int,int ,TYPE_1__*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 unsigned int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_5(HWND VAR_3, CPanel *VAR_4)
{
    HMENU VAR_5, VAR_6;
    MENUITEMINFOW VAR_7;
    unsigned int VAR_8;


    VAR_5 = FUNC_0(VAR_3);

    if (!VAR_5)
        return;

    VAR_6 = FUNC_3(VAR_5, 0);

    if (!VAR_6)
        return;


    for (VAR_8 = VAR_1; VAR_8 <= VAR_1 + VAR_4->total_subprogs; VAR_8++)
    {
        VAR_7.cbSize = sizeof(MENUITEMINFOW);
        VAR_7.fMask = VAR_2;

        if (!FUNC_1(VAR_6, VAR_8, VAR_0, &VAR_7))
            continue;

        FUNC_4(FUNC_2(), 0, (LPVOID) VAR_7.dwItemData);
    }
}
