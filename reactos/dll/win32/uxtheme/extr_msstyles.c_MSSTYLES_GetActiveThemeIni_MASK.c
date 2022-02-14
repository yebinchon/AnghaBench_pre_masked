
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef float WCHAR ;
struct TYPE_3__ {int hTheme; int pszSelectedSize; scalar_t__* pszAvailSizes; int pszSelectedColor; scalar_t__* pszAvailColors; } ;
typedef int * PUXINI_FILE ;
typedef TYPE_1__* PTHEME_FILE ;
typedef scalar_t__* LPWSTR ;
typedef int HRSRC ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (int ,int ,float const*) ;
 scalar_t__* FUNC_1 (int ,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 int * FUNC_4 (int ,scalar_t__*) ;
 int FUNC_5 (int ,scalar_t__*) ;
 scalar_t__ FUNC_6 (scalar_t__*) ;

__attribute__((used)) static PUXINI_FILE FUNC_7(PTHEME_FILE VAR_0)
{
    static const WCHAR VAR_1[] = {
        'F','I','L','E','R','E','S','N','A','M','E','S','\0'
    };
    DWORD VAR_2 = 0;
    DWORD VAR_3 = 0;
    DWORD VAR_4 = 0;
    DWORD VAR_5 = 0;
    DWORD VAR_6;
    DWORD VAR_7;
    LPWSTR VAR_8;
    HRSRC VAR_9;




    VAR_8 = VAR_0->pszAvailColors;
    while(*VAR_8) {
        if(!FUNC_5(VAR_0->pszSelectedColor, VAR_8))
            VAR_4 = VAR_2;
        VAR_8 += FUNC_6(VAR_8)+1;
        VAR_2++;
    }
    VAR_8 = VAR_0->pszAvailSizes;
    while(*VAR_8) {
        if(!FUNC_5(VAR_0->pszSelectedSize, VAR_8))
            VAR_5 = VAR_3;
        VAR_8 += FUNC_6(VAR_8)+1;
        VAR_3++;
    }

    if(!(VAR_9 = FUNC_0(VAR_0->hTheme, FUNC_2(1), VAR_1))) {
        FUNC_3("FILERESNAMES map not found\n");
        return ((void*)0);
    }
    VAR_8 = FUNC_1(VAR_0->hTheme, VAR_9);
    VAR_7 = (VAR_3 * VAR_4) + VAR_5;
    for(VAR_6=0; VAR_6 < VAR_7; VAR_6++) {
        VAR_8 += FUNC_6(VAR_8)+1;
    }
    return FUNC_4(VAR_0->hTheme, VAR_8);
}
