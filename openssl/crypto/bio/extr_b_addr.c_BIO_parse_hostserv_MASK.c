
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum BIO_hostserv_priorities { ____Placeholder_BIO_hostserv_priorities } BIO_hostserv_priorities ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int VAR_4 ;
 char* FUNC_1 (char const*,size_t) ;
 char* FUNC_2 (char const*,char) ;
 size_t FUNC_3 (char const*) ;
 char* FUNC_4 (char const*,char) ;

int FUNC_5(const char *VAR_5, char **VAR_6, char **VAR_7,
                       enum BIO_hostserv_priorities VAR_8)
{
    const char *VAR_9 = ((void*)0); size_t VAR_10 = 0;
    const char *VAR_11 = ((void*)0); size_t VAR_12 = 0;

    if (*VAR_5 == '[') {
        if ((VAR_11 = FUNC_2(VAR_5, ']')) == ((void*)0))
            goto spec_err;
        VAR_9 = VAR_5 + 1;
        VAR_10 = VAR_11 - VAR_9;
        VAR_11++;
        if (*VAR_11 == '\0')
            VAR_11 = ((void*)0);
        else if (*VAR_11 != ':')
            goto spec_err;
        else {
            VAR_11++;
            VAR_12 = FUNC_3(VAR_11);
        }
    } else {
        const char *VAR_13 = FUNC_4(VAR_5, ':');
        VAR_11 = FUNC_2(VAR_5, ':');
        if (VAR_11 != VAR_13)
            goto amb_err;

        if (VAR_11 != ((void*)0)) {
            VAR_9 = VAR_5;
            VAR_10 = VAR_11 - VAR_9;
            VAR_11++;
            VAR_12 = FUNC_3(VAR_11);
        } else if (VAR_8 == VAR_1) {
            VAR_9 = VAR_5;
            VAR_10 = FUNC_3(VAR_9);
        } else {
            VAR_11 = VAR_5;
            VAR_12 = FUNC_3(VAR_11);
        }
    }

    if (VAR_11 != ((void*)0) && FUNC_2(VAR_11, ':'))
        goto spec_err;

    if (VAR_9 != ((void*)0) && VAR_6 != ((void*)0)) {
        if (VAR_10 == 0
            || (VAR_10 == 1 && VAR_9[0] == '*')) {
            *VAR_6 = ((void*)0);
        } else {
            *VAR_6 = FUNC_1(VAR_9, VAR_10);
            if (*VAR_6 == ((void*)0))
                goto memerr;
        }
    }
    if (VAR_11 != ((void*)0) && VAR_7 != ((void*)0)) {
        if (VAR_12 == 0
            || (VAR_12 == 1 && VAR_11[0] == '*')) {
            *VAR_7 = ((void*)0);
        } else {
            *VAR_7 = FUNC_1(VAR_11, VAR_12);
            if (*VAR_7 == ((void*)0))
                goto memerr;
        }
    }

    return 1;
 amb_err:
    FUNC_0(VAR_0, VAR_2);
    return 0;
 spec_err:
    FUNC_0(VAR_0, VAR_3);
    return 0;
 memerr:
    FUNC_0(VAR_0, VAR_4);
    return 0;
}
