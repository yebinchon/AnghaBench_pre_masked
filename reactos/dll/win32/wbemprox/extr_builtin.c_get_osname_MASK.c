
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int partitionW ;
typedef char WCHAR ;


 char* FUNC_0 (int) ;
 int FUNC_1 (char*,char const*,int) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static WCHAR *FUNC_3( const WCHAR *VAR_0 )
{
    static const WCHAR VAR_1[] =
        {'|','C',':','\\','W','I','N','D','O','W','S','|','\\','D','e','v','i','c','e','\\',
         'H','a','r','d','d','i','s','k','0','\\','P','a','r','t','i','t','i','o','n','1',0};
    int VAR_2 = FUNC_2( VAR_0 );
    WCHAR *VAR_3;

    if (!(VAR_3 = FUNC_0( VAR_2 * sizeof(WCHAR) + sizeof(VAR_1) ))) return ((void*)0);
    FUNC_1( VAR_3, VAR_0, VAR_2 * sizeof(WCHAR) );
    FUNC_1( VAR_3 + VAR_2, VAR_1, sizeof(VAR_1) );
    return VAR_3;
}
