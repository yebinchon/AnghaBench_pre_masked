
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int SYSKIND ;
typedef int LCID ;





 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,char const*,int ) ;
 int FUNC_2 (char*,char const*) ;

__attribute__((used)) static WCHAR *FUNC_3( LCID VAR_0, SYSKIND VAR_1, WCHAR *VAR_2 )
{
    static const WCHAR VAR_3[] = {'%','l','x','\\',0};
    static const WCHAR VAR_4[] = {'w','i','n','1','6',0};
    static const WCHAR VAR_5[] = {'w','i','n','3','2',0};
    static const WCHAR VAR_6[] = {'w','i','n','6','4',0};

    FUNC_1( VAR_2, VAR_3, VAR_0 );
    switch(VAR_1)
    {
    case 130: FUNC_2( VAR_2, VAR_4 ); break;
    case 129: FUNC_2( VAR_2, VAR_5 ); break;
    case 128: FUNC_2( VAR_2, VAR_6 ); break;
    default:
        FUNC_0("Typelib is for unsupported syskind %i\n", VAR_1);
        return ((void*)0);
    }
    return VAR_2;
}
