
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wineW ;
typedef char WCHAR ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 () ;
 char* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,char const*,int,char*,int) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (char*) ;
 int FUNC_6 (char*,char const*) ;
 int FUNC_7 (char*,char const*) ;
 int FUNC_8 (char*,char const*) ;
 int FUNC_9 (char const*) ;

const WCHAR *FUNC_10(void)
{
    static const BOOL VAR_1 = sizeof(void *) > sizeof(int);
    static const WCHAR VAR_2[] = {'w','i','n','e',0};
    static const WCHAR VAR_3[] = {'6','4',0};
    static const WCHAR *VAR_4;

    if (!VAR_4)
    {
        WCHAR *VAR_5, *VAR_6;
        const char *VAR_7;




        if ((VAR_7 = FUNC_5("WINELOADER")))
        {
            DWORD VAR_8 = 2 + FUNC_2( VAR_0, 0, VAR_7, -1, ((void*)0), 0 );
            VAR_6 = FUNC_1( FUNC_0(), 0, VAR_8 * sizeof(WCHAR) );
            FUNC_2( VAR_0, 0, VAR_7, -1, VAR_6, VAR_8 );
        }
        else
        {
            VAR_6 = FUNC_1( FUNC_0(), 0, sizeof(VAR_2) + 2 * sizeof(WCHAR) );
            FUNC_8( VAR_6, VAR_2 );
        }
        VAR_5 = VAR_6 + FUNC_9( VAR_6 ) - FUNC_9( VAR_3 );
        if (VAR_5 > VAR_6 && !FUNC_7( VAR_5, VAR_3 ))
        {
            if (!VAR_1) *VAR_5 = 0;
        }
        else if (VAR_1) FUNC_6( VAR_6, VAR_3 );

        FUNC_3( "returning %s\n", FUNC_4(VAR_6) );
        VAR_4 = VAR_6;
    }
    return VAR_4;
}
