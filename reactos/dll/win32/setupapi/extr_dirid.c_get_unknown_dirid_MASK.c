
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int UINT ;


 int FUNC_0 () ;
 int FUNC_1 (char*,int) ;
 char* FUNC_2 (int ,int ,int) ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static const WCHAR *FUNC_5(void)
{
    static WCHAR *VAR_0;
    static const WCHAR VAR_1[] = {'\\','u','n','k','n','o','w','n',0};

    if (!VAR_0)
    {
        UINT VAR_2 = FUNC_1( ((void*)0), 0 ) + FUNC_4(VAR_1);
        if (!(VAR_0 = FUNC_2( FUNC_0(), 0, VAR_2 * sizeof(WCHAR) ))) return ((void*)0);
        FUNC_1( VAR_0, VAR_2 );
        FUNC_3( VAR_0, VAR_1 );
    }
    return VAR_0;
}
