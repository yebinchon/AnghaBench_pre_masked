
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * LPCWSTR ;
typedef int INT ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int,int) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (int *,int *,int) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int *) ;

__attribute__((used)) static INT FUNC_9( LPCWSTR VAR_0, INT VAR_1, LPCWSTR VAR_2 )
{
    int VAR_3, VAR_4;


    if (!VAR_0 || !*VAR_0)
        return 0;


    if (!VAR_2 || !*VAR_2)
        return 1;


    VAR_3 = FUNC_1(VAR_0);
    VAR_4 = FUNC_1(VAR_2);
    if (FUNC_3(VAR_0) && FUNC_3(VAR_2))
        return FUNC_2( VAR_3, VAR_1, VAR_4 );

    switch (VAR_1)
    {
    case 128:
        return FUNC_7( VAR_0, VAR_2 ) != 0;
    case 131:
        return FUNC_8( VAR_0, VAR_2 ) != 0;
    case 130:
    {
        int VAR_5 = FUNC_4( VAR_0 );
        int VAR_6 = FUNC_4( VAR_2 );
        if (VAR_6 > VAR_5) return 0;
        return !FUNC_5( VAR_0, VAR_2, VAR_6 );
    }
    case 129:
    {
        int VAR_7 = FUNC_4( VAR_0 );
        int VAR_8 = FUNC_4( VAR_2 );
        if (VAR_8 > VAR_7) return 0;
        return !FUNC_5( VAR_0 + (VAR_7 - VAR_8), VAR_2, VAR_8 );
    }
    case 133:
    {
        int VAR_9 = FUNC_4( VAR_0 );
        int VAR_10 = FUNC_4( VAR_2 );
        if (VAR_10 > VAR_9) return 0;
        return !FUNC_6( VAR_0, VAR_2, VAR_10 );
    }
    case 132:
    {
        int VAR_11 = FUNC_4( VAR_0 );
        int VAR_12 = FUNC_4( VAR_2 );
        if (VAR_12 > VAR_11) return 0;
        return !FUNC_6( VAR_0 + (VAR_11 - VAR_12), VAR_2, VAR_12 );
    }
    default:
        FUNC_0("invalid substring operator\n");
        return 0;
    }
    return 0;
}
