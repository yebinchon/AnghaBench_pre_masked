
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int HKEY ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char const*,char const*) ;

__attribute__((used)) static HKEY FUNC_1( const WCHAR *VAR_4, HKEY VAR_5 )
{
    static const WCHAR VAR_6[] = {'H','K','C','R',0};
    static const WCHAR VAR_7[] = {'H','K','C','U',0};
    static const WCHAR VAR_8[] = {'H','K','L','M',0};
    static const WCHAR VAR_9[] = {'H','K','U',0};
    static const WCHAR VAR_10[] = {'H','K','R',0};

    if (!FUNC_0( VAR_4, VAR_6 )) return VAR_0;
    if (!FUNC_0( VAR_4, VAR_7 )) return VAR_1;
    if (!FUNC_0( VAR_4, VAR_8 )) return VAR_2;
    if (!FUNC_0( VAR_4, VAR_9 )) return VAR_3;
    if (!FUNC_0( VAR_4, VAR_10 )) return VAR_5;
    return 0;
}
