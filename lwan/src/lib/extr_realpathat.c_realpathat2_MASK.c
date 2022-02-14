
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
typedef int ptrdiff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_7 ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (int,struct stat*) ;
 scalar_t__ FUNC_7 (int,char*,struct stat*,int ) ;
 char* FUNC_8 (int) ;
 char* FUNC_9 (char*,char*,size_t) ;
 int FUNC_10 (char*,char const*,size_t) ;
 char* FUNC_11 (char*,char const*,size_t) ;
 char* FUNC_12 (char*,char) ;
 scalar_t__ FUNC_13 (int,char*,char*,int) ;
 scalar_t__ FUNC_14 (char*,size_t) ;
 char* FUNC_15 (char const*,char*) ;
 char* FUNC_16 (char*,char*) ;
 char* FUNC_17 (char*) ;
 size_t FUNC_18 (char const*) ;
 scalar_t__ FUNC_19 (char*,char*,size_t) ;

char *
FUNC_20(int VAR_8, char *VAR_9, const char *VAR_10, char *VAR_11,
        struct stat *VAR_12)
{
    char *VAR_13, *VAR_14, VAR_15[VAR_6];
    const char *VAR_16, *VAR_17, *VAR_18;
    int VAR_19 = 0;
    ptrdiff_t VAR_20;
    char *VAR_21;

    if (FUNC_3(VAR_10 == ((void*)0))) {




        VAR_7 = VAR_1;
        return ((void*)0);
    }




    if (FUNC_3(VAR_8 < 0 || VAR_9 == ((void*)0) || VAR_10[0] == '/'))
        return FUNC_15(VAR_10, VAR_11);

    if (VAR_10[0] == '\0') {
        if (FUNC_3(FUNC_6(VAR_8, VAR_12) < 0))
            return ((void*)0);
        if (FUNC_0(!VAR_11))
            return FUNC_17(VAR_9);
        return FUNC_16(VAR_11, VAR_9);
    }

    if (FUNC_0(!VAR_11)) {
        VAR_13 = FUNC_8(VAR_6);
        if (FUNC_3(!VAR_13))
            return ((void*)0);
    } else
        VAR_13 = VAR_11;
    VAR_18 = VAR_13 + VAR_6;

    FUNC_16(VAR_13, VAR_9);
    VAR_14 = FUNC_12(VAR_13, '\0');
    VAR_20 = VAR_14 - VAR_13;

    for (VAR_16 = VAR_17 = VAR_10; *VAR_16; VAR_16 = VAR_17) {
        int VAR_22;


        while (*VAR_16 == '/')
            ++VAR_16;


        for (VAR_17 = VAR_16; *VAR_17 && *VAR_17 != '/'; ++VAR_17)
                            ;

        if (VAR_17 - VAR_16 == 0)
            break;
        else if (VAR_17 - VAR_16 == 1 && VAR_16[0] == '.')
                          ;
        else if (VAR_17 - VAR_16 == 2 && VAR_16[0] == '.' && VAR_16[1] == '.') {

            if (VAR_14 > VAR_13 + 1)
                while ((--VAR_14)[-1] != '/');
        } else {
            size_t VAR_23;

            if (VAR_14[-1] != '/')
                *VAR_14++ = '/';

            if (VAR_14 + (VAR_17 - VAR_16) >= VAR_18) {
                ptrdiff_t VAR_24 = VAR_14 - VAR_13;
                char *VAR_25;

                if (FUNC_3(VAR_11 != ((void*)0))) {
                    VAR_7 = VAR_3;
                    if (VAR_14 > VAR_13 + 1)
                        VAR_14--;
                    *VAR_14 = '\0';
                    goto error;
                }

                VAR_23 = (size_t)(VAR_18 - VAR_13);
                if (VAR_17 - VAR_16 + 1 > VAR_6)
                    VAR_23 += (size_t)(VAR_17 - VAR_16 + 1);
                else
                    VAR_23 += VAR_6;
                VAR_25 = (char *) FUNC_14(VAR_13, VAR_23);
                if (FUNC_3(VAR_25 == ((void*)0)))
                    goto error;
                VAR_13 = VAR_25;
                VAR_18 = VAR_13 + VAR_23;

                VAR_14 = VAR_13 + VAR_24;
            }

            VAR_14 = FUNC_11(VAR_14, VAR_16, (size_t)(VAR_17 - VAR_16));
            *VAR_14 = '\0';

            if ((VAR_20 == 1 && *VAR_9 == '/') ||
                    FUNC_19(VAR_13, VAR_9, (size_t)VAR_20)) {
                VAR_21 = VAR_13;
            } else {
                VAR_21 = VAR_13 + VAR_20 + 1;
            }
            if (FUNC_3(*VAR_21 == '\0'))
                VAR_21 = VAR_13;

            if (FUNC_3(FUNC_7(VAR_8, VAR_21, VAR_12, VAR_0) < 0))
                goto error;

            if (FUNC_3(FUNC_2(VAR_12->st_mode))) {
                char VAR_26[VAR_6];
                size_t VAR_27;

                if (FUNC_3(++VAR_19 > VAR_5)) {
                    VAR_7 = VAR_2;
                    goto error;
                }

                VAR_22 = (int)FUNC_13(VAR_8, VAR_21, VAR_26, VAR_6 - 1);
                if (FUNC_3(VAR_22 < 0))
                    goto error;
                VAR_26[VAR_22] = '\0';

                VAR_27 = FUNC_18(VAR_17);
                if (FUNC_3((size_t)(VAR_6 - VAR_22) <= VAR_27)) {
                    VAR_7 = VAR_3;
                    goto error;
                }


                FUNC_10(&VAR_15[VAR_22], VAR_17, VAR_27 + 1);
                VAR_17 = FUNC_9(VAR_15, VAR_26, (size_t)VAR_22);

                if (VAR_26[0] == '/')
                    VAR_14 = VAR_13 + 1;
                else

                    if (VAR_14 > VAR_13 + 1)
                        while ((--VAR_14)[-1] != '/');
            } else if (FUNC_3(!FUNC_1(VAR_12->st_mode) && *VAR_17 != '\0')) {
                VAR_7 = VAR_4;
                goto error;
            }
        }
    }

    if (VAR_14 > VAR_13 + 1 && VAR_14[-1] == '/')
        --VAR_14;
    *VAR_14 = '\0';

    FUNC_4(VAR_11 == ((void*)0) || VAR_11 == VAR_13);
    return VAR_13;

  error:
    FUNC_4(VAR_11 == ((void*)0) || VAR_11 == VAR_13);
    if (VAR_11 == ((void*)0))
        FUNC_5(VAR_13);
    return ((void*)0);
}
