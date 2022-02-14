
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int winxpW ;
typedef int winxp64W ;
typedef int windowsW ;
typedef int win8W ;
typedef int win81W ;
typedef int win7W ;
typedef int win2008r2W ;
typedef int win2008W ;
typedef int win2003W ;
typedef int win2000W ;
typedef int win10W ;
typedef int vistaW ;
typedef char WCHAR ;
struct TYPE_3__ {int dwMajorVersion; int dwMinorVersion; scalar_t__ wProductType; } ;
typedef TYPE_1__ OSVERSIONINFOEXW ;


 int FUNC_0 (char const*) ;
 scalar_t__ VAR_0 ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char*,char const*,int) ;

__attribute__((used)) static WCHAR *FUNC_3( OSVERSIONINFOEXW *VAR_1 )
{
    static const WCHAR VAR_2[] =
        {'M','i','c','r','o','s','o','f','t',' ','W','i','n','d','o','w','s',' '};
    static const WCHAR VAR_3[] =
        {'2','0','0','0',' ','P','r','o','f','e','s','s','i','o','n','a','l',0};
    static const WCHAR VAR_4[] =
        {'S','e','r','v','e','r',' ','2','0','0','3',' ','S','t','a','n','d','a','r','d',' ','E','d','i','t','i','o','n',0};
    static const WCHAR VAR_5[] =
        {'X','P',' ','P','r','o','f','e','s','s','i','o','n','a','l',0};
    static const WCHAR VAR_6[] =
        {'X','P',' ','P','r','o','f','e','s','s','i','o','n','a','l',' ','x','6','4',' ','E','d','i','t','i','o','n',0};
    static const WCHAR VAR_7[] =
        {'V','i','s','t','a',' ','U','l','t','i','m','a','t','e',0};
    static const WCHAR VAR_8[] =
        {'S','e','r','v','e','r',' ','2','0','0','8',' ','S','t','a','n','d','a','r','d',0};
    static const WCHAR VAR_9[] =
        {'7',' ','P','r','o','f','e','s','s','i','o','n','a','l',0};
    static const WCHAR VAR_10[] =
        {'S','e','r','v','e','r',' ','2','0','0','8',' ','R','2',' ','S','t','a','n','d','a','r','d',0};
    static const WCHAR VAR_11[] =
        {'8',' ','P','r','o',0};
    static const WCHAR VAR_12[] =
        {'8','.','1',' ','P','r','o',0};
    static const WCHAR VAR_13[] =
        {'1','0',' ','P','r','o',0};
    int VAR_14 = FUNC_0( VAR_2 );
    WCHAR *VAR_15;

    if (!(VAR_15 = FUNC_1( VAR_14 * sizeof(WCHAR) + sizeof(VAR_4) ))) return ((void*)0);
    FUNC_2( VAR_15, VAR_2, sizeof(VAR_2) );
    if (VAR_1->dwMajorVersion == 10 && VAR_1->dwMinorVersion == 0) FUNC_2( VAR_15 + VAR_14, VAR_13, sizeof(VAR_13) );
    else if (VAR_1->dwMajorVersion == 6 && VAR_1->dwMinorVersion == 3) FUNC_2( VAR_15 + VAR_14, VAR_11, sizeof(VAR_11) );
    else if (VAR_1->dwMajorVersion == 6 && VAR_1->dwMinorVersion == 2) FUNC_2( VAR_15 + VAR_14, VAR_12, sizeof(VAR_12) );
    else if (VAR_1->dwMajorVersion == 6 && VAR_1->dwMinorVersion == 1)
    {
        if (VAR_1->wProductType == VAR_0) FUNC_2( VAR_15 + VAR_14, VAR_9, sizeof(VAR_9) );
        else FUNC_2( VAR_15 + VAR_14, VAR_10, sizeof(VAR_10) );
    }
    else if (VAR_1->dwMajorVersion == 6 && VAR_1->dwMinorVersion == 0)
    {
        if (VAR_1->wProductType == VAR_0) FUNC_2( VAR_15 + VAR_14, VAR_7, sizeof(VAR_7) );
        else FUNC_2( VAR_15 + VAR_14, VAR_8, sizeof(VAR_8) );
    }
    else if (VAR_1->dwMajorVersion == 5 && VAR_1->dwMinorVersion == 2)
    {
        if (VAR_1->wProductType == VAR_0) FUNC_2( VAR_15 + VAR_14, VAR_6, sizeof(VAR_6) );
        else FUNC_2( VAR_15 + VAR_14, VAR_4, sizeof(VAR_4) );
    }
    else if (VAR_1->dwMajorVersion == 5 && VAR_1->dwMinorVersion == 1) FUNC_2( VAR_15 + VAR_14, VAR_5, sizeof(VAR_5) );
    else FUNC_2( VAR_15 + VAR_14, VAR_3, sizeof(VAR_3) );
    return VAR_15;
}
