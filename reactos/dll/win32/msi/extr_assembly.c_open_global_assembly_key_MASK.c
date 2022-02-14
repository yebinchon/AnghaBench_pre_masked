
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef scalar_t__ UINT ;
typedef int LONG ;
typedef int HKEY ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char const*,int *) ;

__attribute__((used)) static LONG FUNC_1( UINT VAR_3, BOOL VAR_4, HKEY *VAR_5 )
{
    static const WCHAR VAR_6[] =
        {'S','o','f','t','w','a','r','e','\\','M','i','c','r','o','s','o','f','t','\\',
         'I','n','s','t','a','l','l','e','r','\\','W','i','n','3','2','A','s','s','e','m','b','l','i','e','s','\\',
         'G','l','o','b','a','l',0};
    static const WCHAR VAR_7[] =
        {'S','o','f','t','w','a','r','e','\\','M','i','c','r','o','s','o','f','t','\\',
         'I','n','s','t','a','l','l','e','r','\\','A','s','s','e','m','b','l','i','e','s','\\',
         'G','l','o','b','a','l',0};
    static const WCHAR VAR_8[] =
        {'I','n','s','t','a','l','l','e','r','\\','W','i','n','3','2','A','s','s','e','m','b','l','i','e','s','\\',
         'G','l','o','b','a','l',0};
    static const WCHAR VAR_9[] =
        {'I','n','s','t','a','l','l','e','r','\\','A','s','s','e','m','b','l','i','e','s','\\','G','l','o','b','a','l',0};
    HKEY VAR_10;
    const WCHAR *VAR_11;

    if (VAR_3 == VAR_2)
    {
        VAR_10 = VAR_0;
        if (VAR_4) VAR_11 = VAR_8;
        else VAR_11 = VAR_9;
    }
    else
    {
        VAR_10 = VAR_1;
        if (VAR_4) VAR_11 = VAR_6;
        else VAR_11 = VAR_7;
    }
    return FUNC_0( VAR_10, VAR_11, VAR_5 );
}
