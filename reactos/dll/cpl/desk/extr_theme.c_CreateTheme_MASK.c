
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* DisplayName; int * ThemeFileName; int * SizesList; int * NextTheme; int * ColoursList; } ;
typedef TYPE_1__ THEME ;
typedef TYPE_1__* PTHEME ;
typedef int * LPCWSTR ;


 void* FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static THEME*
FUNC_3(LPCWSTR VAR_0, LPCWSTR VAR_1)
{
    PTHEME VAR_2;

    VAR_2 = (PTHEME) FUNC_2(sizeof(THEME));
    if (VAR_2 == ((void*)0)) return ((void*)0);

    VAR_2->DisplayName = FUNC_0(VAR_1);
    if (VAR_2->DisplayName == ((void*)0))
    {
        FUNC_1(VAR_2);
        return ((void*)0);
    }

    VAR_2->ColoursList = ((void*)0);
    VAR_2->NextTheme = ((void*)0);
    VAR_2->SizesList = ((void*)0);

    if (VAR_0 == ((void*)0))
    {
        VAR_2->ThemeFileName = ((void*)0);
        return VAR_2;
    }

    VAR_2->ThemeFileName = FUNC_0(VAR_0);
    if (VAR_2->ThemeFileName == ((void*)0))
    {
        FUNC_1(VAR_2->DisplayName);
        FUNC_1(VAR_2);
        return ((void*)0);
    }

    return VAR_2;
}
