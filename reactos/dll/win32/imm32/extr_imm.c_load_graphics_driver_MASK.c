
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int path ;
typedef int key_pathW ;
typedef char WCHAR ;
typedef int UINT ;
typedef int HMODULE ;
typedef int HKEY ;
typedef int DWORD ;
typedef int BYTE ;


 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char const*) ;
 int FUNC_3 (int ,char*,int) ;
 int VAR_0 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int VAR_1 ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,char*,int *) ;
 int FUNC_8 (int ,char const*,int *,int *,int *,int*) ;
 int FUNC_9 (char*,int ,int ) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*,char const*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*,char const*,int) ;

__attribute__((used)) static HMODULE FUNC_14(void)
{
    static const WCHAR VAR_2[] = {
        '_','_','w','i','n','e','_','d','i','s','p','l','a','y','_',
        'd','e','v','i','c','e','_','g','u','i','d',0 };
    static const WCHAR VAR_3[] = {
        'S','y','s','t','e','m','\\',
        'C','u','r','r','e','n','t','C','o','n','t','r','o','l','S','e','t','\\',
        'C','o','n','t','r','o','l','\\',
        'V','i','d','e','o','\\','{',0};
    static const WCHAR VAR_4[] = {'}','\\','0','0','0','0',0};
    static const WCHAR VAR_5[] = {'G','r','a','p','h','i','c','s','D','r','i','v','e','r',0};

    HMODULE VAR_6 = 0;
    HKEY VAR_7;
    DWORD VAR_8;
    WCHAR VAR_9[VAR_1];
    WCHAR VAR_10[FUNC_0( VAR_3 ) + FUNC_0( VAR_4 ) + 40];
    UINT VAR_11 = FUNC_4( FUNC_2( FUNC_1(), VAR_2 ));

    if (!VAR_11) return 0;
    FUNC_13( VAR_10, VAR_3, sizeof(VAR_3) );
    if (!FUNC_3( VAR_11, VAR_10 + FUNC_12(VAR_10), 40 )) return 0;
    FUNC_11( VAR_10, VAR_4 );
    if (FUNC_7( VAR_0, VAR_10, &VAR_7 )) return 0;
    VAR_8 = sizeof(VAR_9);
    if (!FUNC_8( VAR_7, VAR_5, ((void*)0), ((void*)0), (BYTE *)VAR_9, &VAR_8 )) VAR_6 = FUNC_5( VAR_9 );
    FUNC_6( VAR_7 );
    FUNC_9( "%s %p\n", FUNC_10(VAR_9), VAR_6 );
    return VAR_6;
}
