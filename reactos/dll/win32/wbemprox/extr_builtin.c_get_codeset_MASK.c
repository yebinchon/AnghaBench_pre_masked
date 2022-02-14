
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;


 int FUNC_0 () ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char*,char const*,int ) ;

__attribute__((used)) static WCHAR *FUNC_3(void)
{
    static const WCHAR VAR_0[] = {'%','u',0};
    WCHAR *VAR_1 = FUNC_1( 11 * sizeof(WCHAR) );
    if (VAR_1) FUNC_2( VAR_1, VAR_0, FUNC_0() );
    return VAR_1;
}
