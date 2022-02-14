
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char const*,int) ;
 int FUNC_3 (char*,int ) ;
 char* FUNC_4 (scalar_t__) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,char*) ;
 scalar_t__ FUNC_7 (char const*) ;
 char* FUNC_8 (char const*,char) ;

__attribute__((used)) static char *FUNC_9(const char *VAR_1, int VAR_2, const char *VAR_3,
                                char **VAR_4, int VAR_5)
{
    char *VAR_6;
    char *VAR_7;
    char *VAR_8;
    const char *VAR_9;
    int VAR_10, VAR_11;

    VAR_6 = FUNC_4(FUNC_7(VAR_1)+1);
    if(!VAR_6)
        return ((void*)0);
    VAR_7 = VAR_6;

    for(VAR_9 = VAR_1; *VAR_9; VAR_9++)
    {

        if(*VAR_9 == '\\') {

            if(VAR_9[1] == '\\')
                VAR_9++;
            *VAR_7 = '/';
        }else {
            *VAR_7 = *VAR_9;
        }
        VAR_7++;
    }
    *VAR_7 = '\0';

    if(VAR_2 && VAR_3)
    {

        const char *VAR_12;

        if ((VAR_12 = FUNC_8( VAR_3, '/' ))) VAR_12++;
        else VAR_12 = VAR_3;
        VAR_8 = FUNC_4( (VAR_12 - VAR_3) + FUNC_7(VAR_6) + 1 );
        if(!VAR_8)
        {
            FUNC_1(VAR_6);
            return ((void*)0);
        }
        FUNC_2( VAR_8, VAR_3, VAR_12 - VAR_3 );
        FUNC_6( VAR_8 + (VAR_12 - VAR_3), VAR_6 );
        VAR_11 = FUNC_3( VAR_8, VAR_0 );
        if (VAR_11 != -1)
        {
            FUNC_0( VAR_11 );
            FUNC_1( VAR_6 );
            return VAR_8;
        }
        FUNC_1( VAR_8 );
    }

    for(VAR_10 = 0; VAR_10 < VAR_5; VAR_10++)
    {
        VAR_8 = FUNC_4(FUNC_7(VAR_4[VAR_10]) + FUNC_7(VAR_6) + 2);
        if(!VAR_8)
        {
            FUNC_1(VAR_6);
            return ((void*)0);
        }
        FUNC_6(VAR_8, VAR_4[VAR_10]);
        FUNC_5(VAR_8, "/");
        FUNC_5(VAR_8, VAR_6);
        VAR_11 = FUNC_3( VAR_8, VAR_0 );
        if (VAR_11 != -1)
        {
            FUNC_0( VAR_11 );
            FUNC_1( VAR_6 );
            return VAR_8;
        }
        FUNC_1( VAR_8 );
    }
    FUNC_1( VAR_6 );
    return ((void*)0);
}
