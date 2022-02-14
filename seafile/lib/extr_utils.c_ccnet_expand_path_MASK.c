
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd {char const* pw_dir; } ;
typedef int new_path ;


 int VAR_0 ;
 char* FUNC_0 () ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 () ;
 struct passwd* FUNC_3 (char*) ;
 struct passwd* FUNC_4 (int ) ;
 int FUNC_5 (char*,char const*,int) ;
 int FUNC_6 (char*,int ,int) ;
 char* FUNC_7 (char*) ;
 int FUNC_8 (char const*) ;

char*
FUNC_9 (const char *VAR_1)
{
    const char *VAR_2, *VAR_3;
    char VAR_4[VAR_0 + 1];
    char *VAR_5;
    int VAR_6;


    if (!VAR_1 || *VAR_1 == '\0')
        return ((void*)0);
    if (FUNC_8(VAR_1) > VAR_0)
        return ((void*)0);

    VAR_2 = VAR_1;
    VAR_5 = VAR_4;
    *VAR_5 = '\0';

    if (*VAR_1 == '~') {

        struct passwd *VAR_7 = ((void*)0);

        for ( ; *VAR_2 != '/' && *VAR_2 != '\0'; VAR_2++) ;

        VAR_6 = VAR_2 - VAR_1;
        if (VAR_6 == 1) {
            VAR_7 = FUNC_4 (FUNC_2());
        } else {

            FUNC_5 (VAR_4, VAR_1, VAR_6);
            VAR_4[VAR_6] = '\0';
            VAR_7 = FUNC_3 (VAR_4 + 1);
        }
        if (VAR_7 == ((void*)0))
            return ((void*)0);

        VAR_6 = FUNC_8 (VAR_7->pw_dir);
        FUNC_5 (VAR_4, VAR_7->pw_dir, VAR_6);
        VAR_5 = VAR_4 + VAR_6;
        *VAR_5 = '\0';

        if (*VAR_2 == '\0')
            return FUNC_7 (VAR_4);
    } else if (*VAR_1 != '/') {
        FUNC_1 (VAR_4, VAR_0);
        for ( ; *VAR_5; VAR_5++) ;
    }

    while (*VAR_2 != '\0') {

        for (VAR_3 = VAR_2; *VAR_3 == '/'; VAR_3++) ;

        for (VAR_2 = VAR_3; *VAR_2 != '/'
                 && *VAR_2 != '\0'; VAR_2++) ;

        VAR_6 = VAR_2 - VAR_3;

        if (VAR_6 == 0) {

            *VAR_5++ = '/';
            *VAR_5 = '\0';
            break;
        }

        if (VAR_6 == 2 && VAR_3[0] == '.' && VAR_3[1] == '.')
        {

            for (; VAR_5 > VAR_4 && *VAR_5 != '/'; VAR_5--)
                ;
            *VAR_5 = '\0';
        } else if (VAR_3[0] != '.' || VAR_6 != 1) {

            *VAR_5++ = '/';
            FUNC_5 (VAR_5, VAR_3, VAR_6);
            VAR_5 += VAR_6;
            *VAR_5 = '\0';
        }
    }


    if (VAR_4[0] == '\0') {
        VAR_4[0] = '/';
        VAR_4[1] = '\0';
    }
    return FUNC_7 (VAR_4);

}
