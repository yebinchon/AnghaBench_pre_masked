
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (char*,int *) ;
 int FUNC_2 () ;
 char* FUNC_3 (int ,int ,unsigned int) ;
 int FUNC_4 (int ,int ,char*) ;
 int VAR_0 ;
 char const* VAR_1 ;
 char* FUNC_5 (char const*,char const*,char const*,unsigned int*) ;
 scalar_t__ FUNC_6 (char*) ;
 int FUNC_7 (char*,char const*) ;
 int FUNC_8 (char*,char*) ;
 scalar_t__ FUNC_9 (char const*) ;

__attribute__((used)) static WCHAR *FUNC_10( const WCHAR *VAR_2, const WCHAR *VAR_3, const WCHAR *VAR_4,
                                     const WCHAR *VAR_5 )
{
    static const WCHAR VAR_6[] = {'p','o','l','i','c','i','e','s','\\',0};
    static const WCHAR VAR_7[] = {'.','p','o','l','i','c','y',0};
    WCHAR VAR_8[VAR_0], *VAR_9, *VAR_10;
    unsigned int VAR_11;

    if (!(VAR_10 = FUNC_5( VAR_2, VAR_3, VAR_4, &VAR_11 ))) return ((void*)0);
    VAR_11 += FUNC_6( VAR_8 );
    VAR_11 += FUNC_0(VAR_6) - 1;
    VAR_11 += FUNC_9( VAR_5 );
    VAR_11 += FUNC_0(VAR_7) - 1;
    if (!(VAR_9 = FUNC_3( FUNC_2(), 0, (VAR_11 + 1) * sizeof(WCHAR) )))
    {
        FUNC_4( FUNC_2(), 0, VAR_10 );
        return ((void*)0);
    }
    FUNC_8( VAR_9, VAR_8 );
    FUNC_7( VAR_9, VAR_6 );
    FUNC_1( VAR_9, ((void*)0) );
    FUNC_7( VAR_9, VAR_3 );
    FUNC_1( VAR_9, ((void*)0) );
    FUNC_7( VAR_9, VAR_1 );
    FUNC_7( VAR_9, VAR_5 );
    FUNC_7( VAR_9, VAR_7 );

    FUNC_4( FUNC_2(), 0, VAR_10 );
    return VAR_9;
}
