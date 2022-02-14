
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * NextStyle; int * ChildStyle; struct TYPE_4__* StyleName; int * DisplayName; } ;
typedef int THEME_STYLE ;
typedef TYPE_1__* PTHEME_STYLE ;
typedef int LPCWSTR ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static PTHEME_STYLE
FUNC_3(LPCWSTR VAR_0, LPCWSTR VAR_1)
{
    PTHEME_STYLE VAR_2;

    VAR_2 = (PTHEME_STYLE) FUNC_2(sizeof(THEME_STYLE));
    if (VAR_2 == ((void*)0)) return ((void*)0);

    VAR_2->StyleName = FUNC_0(VAR_0);
    if (VAR_2->StyleName == ((void*)0))
    {
        FUNC_1(VAR_2);
        return ((void*)0);
    }

    VAR_2->DisplayName = FUNC_0(VAR_1);
    if (VAR_2->DisplayName == ((void*)0))
    {
        FUNC_1(VAR_2->StyleName);
        FUNC_1(VAR_2);
        return ((void*)0);
    }

    VAR_2->ChildStyle = ((void*)0);
    VAR_2->NextStyle = ((void*)0);

    return VAR_2;
}
