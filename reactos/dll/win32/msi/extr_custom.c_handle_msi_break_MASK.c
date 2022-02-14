
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int LPWSTR ;
typedef int LPCWSTR ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (char const*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *,int ,char const*,int ) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (char*,int ) ;
 int FUNC_8 (int ,char const*,int ,int ) ;

__attribute__((used)) static void FUNC_9( LPCWSTR VAR_2 )
{
    LPWSTR VAR_3;
    WCHAR VAR_4[VAR_0];

    static const WCHAR VAR_5[] = { 'M','s','i','B','r','e','a','k',0 };
    static const WCHAR VAR_6[] = {
        'W','i','n','d','o','w','s',' ','I','n','s','t','a','l','l','e','r',0
    };

    static const WCHAR VAR_7[] = {
        'T','o',' ','d','e','b','u','g',' ','y','o','u','r',' ',
        'c','u','s','t','o','m',' ','a','c','t','i','o','n',',',' ',
        'a','t','t','a','c','h',' ','y','o','u','r',' ','d','e','b','u','g','g','e','r',' ',
        't','o',' ','p','r','o','c','e','s','s',' ','%','i',' ','(','0','x','%','X',')',' ',
        'a','n','d',' ','p','r','e','s','s',' ','O','K',0
    };

    if( !FUNC_2( VAR_5, VAR_4, VAR_0 ))
        return;

    if( FUNC_7( VAR_4, VAR_2 ))
        return;

    VAR_3 = FUNC_5( (FUNC_4(VAR_7) + 10) * sizeof(WCHAR) );
    if (!VAR_3)
        return;

    FUNC_8( VAR_3, VAR_7, FUNC_1(), FUNC_1());
    FUNC_3( ((void*)0), VAR_3, VAR_6, VAR_1);
    FUNC_6(VAR_3);
    FUNC_0();
}
