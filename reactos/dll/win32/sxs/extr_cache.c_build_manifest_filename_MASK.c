
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;


 int FUNC_0 (char const*) ;
 int FUNC_1 () ;
 char* FUNC_2 (int ,int ,unsigned int) ;
 int FUNC_3 (int ,int ,char*) ;
 int VAR_0 ;
 char* FUNC_4 (char const*,char const*,char const*,char const*,unsigned int*) ;
 scalar_t__ FUNC_5 (char*) ;
 int FUNC_6 (char*,char const*) ;
 int FUNC_7 (char*,char*) ;

__attribute__((used)) static WCHAR *FUNC_8( const WCHAR *VAR_1, const WCHAR *VAR_2, const WCHAR *VAR_3,
                                       const WCHAR *VAR_4 )
{
    static const WCHAR VAR_5[] = {'m','a','n','i','f','e','s','t','s','\\',0};
    static const WCHAR VAR_6[] = {'.','m','a','n','i','f','e','s','t',0};
    WCHAR VAR_7[VAR_0], *VAR_8, *VAR_9;
    unsigned int VAR_10;

    if (!(VAR_9 = FUNC_4( VAR_1, VAR_2, VAR_3, VAR_4, &VAR_10 ))) return ((void*)0);
    VAR_10 += FUNC_5( VAR_7 );
    VAR_10 += FUNC_0(VAR_5) - 1;
    VAR_10 += FUNC_0(VAR_6) - 1;
    if (!(VAR_8 = FUNC_2( FUNC_1(), 0, (VAR_10 + 1) * sizeof(WCHAR) )))
    {
        FUNC_3( FUNC_1(), 0, VAR_9 );
        return ((void*)0);
    }
    FUNC_7( VAR_8, VAR_7 );
    FUNC_6( VAR_8, VAR_5 );
    FUNC_6( VAR_8, VAR_9 );
    FUNC_6( VAR_8, VAR_6 );

    FUNC_3( FUNC_1(), 0, VAR_9 );
    return VAR_8;
}
