
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char const*,char const*) ;
 int FUNC_5 (char*,char const*) ;

int FUNC_6(int VAR_3, WCHAR *VAR_4[])
{
    static const WCHAR VAR_5[] = {'g','e','t',0};
    static const WCHAR VAR_6[] = {'q','u','i','t',0};
    static const WCHAR VAR_7[] = {'e','x','i','t',0};
    static const WCHAR VAR_8[] = {'p','a','t','h',0};
    static const WCHAR VAR_9[] = {'c','l','a','s','s',0};
    static const WCHAR VAR_10[] = {'c','o','n','t','e','x','t',0};
    const WCHAR *VAR_11, *VAR_12;
    int VAR_13;

    for (VAR_13 = 1; VAR_13 < VAR_3 && VAR_4[VAR_13][0] == '/'; VAR_13++)
        FUNC_0( "command line switch %s not supported\n", FUNC_1(VAR_4[VAR_13]) );

    if (VAR_13 >= VAR_3)
        goto not_supported;

    if (!FUNC_5( VAR_4[VAR_13], VAR_6 ) ||
        !FUNC_5( VAR_4[VAR_13], VAR_7 ))
    {
        return 0;
    }

    if (!FUNC_5( VAR_4[VAR_13], VAR_9) ||
        !FUNC_5( VAR_4[VAR_13], VAR_10 ))
    {
        FUNC_0( "command %s not supported\n", FUNC_1(VAR_4[VAR_13]) );
        goto not_supported;
    }

    if (!FUNC_5( VAR_4[VAR_13], VAR_8 ))
    {
        if (++VAR_13 >= VAR_3)
        {
            FUNC_3( VAR_2 );
            return 1;
        }
        VAR_11 = VAR_4[VAR_13];
    }
    else
    {
        VAR_11 = FUNC_2( VAR_4[VAR_13] );
        if (!VAR_11)
        {
            FUNC_3( VAR_0 );
            return 1;
        }
    }

    if (++VAR_13 >= VAR_3)
        goto not_supported;

    if (!FUNC_5( VAR_4[VAR_13], VAR_5 ))
    {
        if (++VAR_13 >= VAR_3)
            goto not_supported;
        VAR_12 = VAR_4[VAR_13];
        return FUNC_4( VAR_11, VAR_12 );
    }

not_supported:
    FUNC_3( VAR_1 );
    return 1;
}
