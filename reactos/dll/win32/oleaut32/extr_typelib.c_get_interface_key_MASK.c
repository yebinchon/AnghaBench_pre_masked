
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int REFGUID ;
typedef int InterfaceW ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (char*,char const*,int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static WCHAR *FUNC_3( REFGUID VAR_0, WCHAR *VAR_1 )
{
    static const WCHAR VAR_2[] = {'I','n','t','e','r','f','a','c','e','\\',0};

    FUNC_1( VAR_1, VAR_2, sizeof(VAR_2) );
    FUNC_0( VAR_0, VAR_1 + FUNC_2(VAR_1), 40 );
    return VAR_1;
}
