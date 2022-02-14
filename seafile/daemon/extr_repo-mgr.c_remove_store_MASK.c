
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GDir ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char const*,char const*,int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,int ,int *) ;
 char* FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (char*,char*) ;

__attribute__((used)) static int
FUNC_10 (const char *VAR_2, const char *VAR_3, int *VAR_4)
{
    char *VAR_5 = ((void*)0);
    GDir *VAR_6, *VAR_7;
    const char *VAR_8, *VAR_9;
    char *VAR_10, *VAR_11;

    VAR_5 = FUNC_0 (VAR_2, VAR_3, ((void*)0));

    VAR_6 = FUNC_2 (VAR_5, 0, ((void*)0));
    if (!VAR_6) {
        FUNC_4 (VAR_5);
        return 0;
    }

    FUNC_8 ("Removing store %s\n", VAR_5);

    while ((VAR_8 = FUNC_3(VAR_6)) != ((void*)0)) {
        VAR_10 = FUNC_0 (VAR_5, VAR_8, ((void*)0));

        VAR_7 = FUNC_2 (VAR_10, 0, ((void*)0));
        if (!VAR_7) {
            FUNC_9 ("Failed to open obj dir %s.\n", VAR_10);
            FUNC_1 (VAR_6);
            FUNC_4 (VAR_10);
            FUNC_4 (VAR_5);
            return -1;
        }

        while ((VAR_9 = FUNC_3(VAR_7)) != ((void*)0)) {
            VAR_11 = FUNC_0 (VAR_10, VAR_9, ((void*)0));
            FUNC_6 (VAR_11);



            if (++(*VAR_4) > VAR_1) {
                FUNC_7 (5 * VAR_0);
                *VAR_4 = 0;
            }

            FUNC_4 (VAR_11);
        }
        FUNC_1 (VAR_7);

        FUNC_5 (VAR_10);
        FUNC_4 (VAR_10);
    }

    FUNC_1 (VAR_6);
    FUNC_5 (VAR_5);
    FUNC_4 (VAR_5);

    return 0;
}
