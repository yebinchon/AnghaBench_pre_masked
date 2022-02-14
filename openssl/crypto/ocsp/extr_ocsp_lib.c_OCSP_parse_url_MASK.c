
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char const*) ;
 char* FUNC_3 (char*,char) ;
 scalar_t__ FUNC_4 (char*,char*) ;

int FUNC_5(const char *VAR_3, char **VAR_4, char **VAR_5, char **VAR_6,
                   int *VAR_7)
{
    char *VAR_8, *VAR_9;

    char *VAR_10, *VAR_11;

    *VAR_4 = ((void*)0);
    *VAR_5 = ((void*)0);
    *VAR_6 = ((void*)0);


    VAR_9 = FUNC_2(VAR_3);
    if (!VAR_9)
        goto mem_err;


    VAR_8 = FUNC_3(VAR_9, ':');
    if (VAR_8 == ((void*)0))
        goto parse_err;

    *(VAR_8++) = '\0';

    if (FUNC_4(VAR_9, "http") == 0) {
        *VAR_7 = 0;
        VAR_11 = "80";
    } else if (FUNC_4(VAR_9, "https") == 0) {
        *VAR_7 = 1;
        VAR_11 = "443";
    } else
        goto parse_err;


    if ((VAR_8[0] != '/') || (VAR_8[1] != '/'))
        goto parse_err;

    VAR_8 += 2;

    VAR_10 = VAR_8;


    VAR_8 = FUNC_3(VAR_8, '/');
    if (VAR_8 == ((void*)0))
        *VAR_6 = FUNC_2("/");
    else {
        *VAR_6 = FUNC_2(VAR_8);

        *VAR_8 = '\0';
    }

    if (*VAR_6 == ((void*)0))
        goto mem_err;

    VAR_8 = VAR_10;
    if (VAR_10[0] == '[') {

        VAR_10++;
        VAR_8 = FUNC_3(VAR_10, ']');
        if (VAR_8 == ((void*)0))
            goto parse_err;
        *VAR_8 = '\0';
        VAR_8++;
    }


    if ((VAR_8 = FUNC_3(VAR_8, ':'))) {
        *VAR_8 = 0;
        VAR_11 = VAR_8 + 1;
    }

    *VAR_5 = FUNC_2(VAR_11);
    if (*VAR_5 == ((void*)0))
        goto mem_err;

    *VAR_4 = FUNC_2(VAR_10);

    if (*VAR_4 == ((void*)0))
        goto mem_err;

    FUNC_1(VAR_9);

    return 1;

 mem_err:
    FUNC_0(VAR_1, VAR_0);
    goto err;

 parse_err:
    FUNC_0(VAR_1, VAR_2);

 err:
    FUNC_1(VAR_9);
    FUNC_1(*VAR_6);
    *VAR_6 = ((void*)0);
    FUNC_1(*VAR_5);
    *VAR_5 = ((void*)0);
    FUNC_1(*VAR_4);
    *VAR_4 = ((void*)0);
    return 0;

}
