
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_4__ {scalar_t__ szThemeFile; scalar_t__ pszSelectedSize; scalar_t__ pszSelectedColor; } ;
typedef TYPE_1__* PTHEME_FILE ;
typedef int HRESULT ;
typedef int HKEY ;
typedef int BYTE ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ,int ,int const*,int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (TYPE_1__*) ;
 scalar_t__ VAR_2 ;
 int FUNC_10 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static HRESULT FUNC_11(PTHEME_FILE VAR_8)
{
    HKEY VAR_9;
    WCHAR VAR_10[2];
    HRESULT VAR_11;

    FUNC_5("UXTHEME_ApplyTheme\n");

    if (VAR_8 && !VAR_2)
    {
        FUNC_6();
    }

    VAR_11 = FUNC_9(VAR_8);
    if (FUNC_0(VAR_11))
        return VAR_11;

    if (!VAR_8)
    {
        FUNC_7();
    }

    FUNC_5("Writing theme config to registry\n");
    if(!FUNC_2(VAR_0, VAR_7, &VAR_9)) {
        VAR_10[0] = VAR_2 ? '1' : '0';
        VAR_10[1] = '\0';
        FUNC_4(VAR_9, VAR_6, 0, VAR_1, (const BYTE*)VAR_10, sizeof(WCHAR)*2);
        if (VAR_2) {
            FUNC_4(VAR_9, VAR_3, 0, VAR_1, (const BYTE*)VAR_8->pszSelectedColor,
  (FUNC_10(VAR_8->pszSelectedColor)+1)*sizeof(WCHAR));
            FUNC_4(VAR_9, VAR_5, 0, VAR_1, (const BYTE*)VAR_8->pszSelectedSize,
  (FUNC_10(VAR_8->pszSelectedSize)+1)*sizeof(WCHAR));
            FUNC_4(VAR_9, VAR_4, 0, VAR_1, (const BYTE*)VAR_8->szThemeFile,
  (FUNC_10(VAR_8->szThemeFile)+1)*sizeof(WCHAR));
        }
        else {
            FUNC_3(VAR_9, VAR_3);
            FUNC_3(VAR_9, VAR_5);
            FUNC_3(VAR_9, VAR_4);

        }
        FUNC_1(VAR_9);
    }
    else
        FUNC_5("Failed to open theme registry key\n");

    FUNC_8 ();

    return VAR_11;
}
