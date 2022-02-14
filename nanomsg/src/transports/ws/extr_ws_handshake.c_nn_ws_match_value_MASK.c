
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char const*) ;
 char* FUNC_2 (char const*,char const*) ;

__attribute__((used)) static int FUNC_3 (const char* VAR_2, const char **VAR_3,
    int VAR_4, int VAR_5, const char **VAR_6,
    size_t* const VAR_7)
{
    const char *VAR_8;
    const char *VAR_9;

    FUNC_0 (VAR_2 && *VAR_3);

    VAR_8 = *VAR_3;
    if (VAR_6)
        *VAR_6 = ((void*)0);
    if (VAR_7)
        *VAR_7 = 0;


    VAR_9 = FUNC_2 (VAR_8, VAR_2);


    if (VAR_9) {
        *VAR_3 = VAR_9 + FUNC_1 (VAR_2);
    }
    else {
        return VAR_1;
    }

    if (VAR_4) {
        while (*VAR_8 == '\x20' && VAR_8 < VAR_9) {
            VAR_8++;
        }
    }

    if (VAR_6)
        *VAR_6 = VAR_8;



    if (VAR_8 == VAR_9)
        return VAR_0;

    if (VAR_5) {
        while (*(VAR_9 - 1) == '\x20' && VAR_8 < VAR_9) {
            VAR_9--;
        }
    }

    if (VAR_7)
        *VAR_7 = VAR_9 - VAR_8;

    return VAR_0;
}
