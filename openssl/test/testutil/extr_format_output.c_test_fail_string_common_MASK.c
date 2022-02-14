
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned char) ;
 scalar_t__ FUNC_1 (char const*,char const*) ;
 int FUNC_2 () ;
 int FUNC_3 (char const*,char const*) ;
 int FUNC_4 (char const*,char const*,int,char const*,char const*,char const*,char const*) ;
 int FUNC_5 () ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (char const*,char) ;

__attribute__((used)) static void FUNC_8(const char *VAR_1, const char *VAR_2,
                                    int VAR_3, const char *VAR_4,
                                    const char *VAR_5, const char *VAR_6,
                                    const char *VAR_7, const char *VAR_8, size_t VAR_9,
                                    const char *VAR_10, size_t VAR_11)
{
    const size_t VAR_12 = (VAR_0 - FUNC_2() - 12) / 16 * 16;
    char VAR_13[VAR_0 + 1], VAR_14[VAR_0 + 1];
    char VAR_15[VAR_0 + 1];
    size_t VAR_16, VAR_17, VAR_18;
    unsigned int VAR_19 = 0, VAR_20;

    FUNC_4(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
    if (VAR_8 == ((void*)0))
        VAR_9 = 0;
    if (VAR_10 == ((void*)0))
        VAR_11 = 0;
    if (VAR_9 == 0 && VAR_11 == 0) {
        if ((VAR_8 == ((void*)0)) == (VAR_10 == ((void*)0))) {
            FUNC_7(VAR_8, ' ');
        } else {
            FUNC_3(VAR_5, VAR_6);
            FUNC_7(VAR_8, '-');
            FUNC_7(VAR_10, '+');
        }
        goto fin;
    }

    if (VAR_9 != VAR_11 || FUNC_1(VAR_8, VAR_10) != 0)
        FUNC_3(VAR_5, VAR_6);

    while (VAR_9 > 0 || VAR_11 > 0) {
        VAR_16 = VAR_17 = 0;
        if (VAR_9 > 0) {
            VAR_13[VAR_16 = VAR_9 > VAR_12 ? VAR_12 : VAR_9] = 0;
            for (VAR_18 = 0; VAR_18 < VAR_16; VAR_18++)
                VAR_13[VAR_18] = FUNC_0((unsigned char)VAR_8[VAR_18]) ? VAR_8[VAR_18] : '.';
        }
        if (VAR_11 > 0) {
            VAR_14[VAR_17 = VAR_11 > VAR_12 ? VAR_12 : VAR_11] = 0;
            for (VAR_18 = 0; VAR_18 < VAR_17; VAR_18++)
                VAR_14[VAR_18] = FUNC_0((unsigned char)VAR_10[VAR_18]) ? VAR_10[VAR_18] : '.';
        }
        VAR_20 = 0;
        VAR_18 = 0;
        if (VAR_16 > 0 && VAR_17 > 0) {
            const size_t VAR_21 = VAR_16 < VAR_17 ? VAR_16 : VAR_17;

            for (; VAR_18 < VAR_21; VAR_18++)
                if (VAR_8[VAR_18] == VAR_10[VAR_18]) {
                    VAR_15[VAR_18] = ' ';
                } else {
                    VAR_15[VAR_18] = '^';
                    VAR_20 = 1;
                }
            VAR_15[VAR_18] = '\0';
        }
        if (VAR_16 == VAR_17 && !VAR_20) {
            FUNC_6("%4u:  '%s'\n", VAR_19, VAR_17 > VAR_16 ? VAR_14 : VAR_13);
        } else {
            if (VAR_19 == 0 && (VAR_8 == ((void*)0) || *VAR_8 == '\0'))
                FUNC_7(VAR_8, '-');
            else if (VAR_16 > 0)
                FUNC_6("%4u:- '%s'\n", VAR_19, VAR_13);
            if (VAR_19 == 0 && (VAR_10 == ((void*)0) || *VAR_10 == '\0'))
               FUNC_7(VAR_10, '+');
            else if (VAR_17 > 0)
                FUNC_6("%4u:+ '%s'\n", VAR_19, VAR_14);
            if (VAR_20 && VAR_18 > 0)
                FUNC_6("%4s    %s\n", "", VAR_15);
        }
        VAR_8 += VAR_16;
        VAR_10 += VAR_17;
        VAR_9 -= VAR_16;
        VAR_11 -= VAR_17;
        VAR_19 += VAR_12;
    }
fin:
    FUNC_5();
}
