
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (unsigned char const*,size_t,char*,int) ;
 scalar_t__ FUNC_1 (unsigned char const*,unsigned char const*,size_t) ;
 int FUNC_2 (char const*,char const*) ;
 int FUNC_3 (char const*,char const*,int,char const*,char const*,char const*,char const*) ;
 int FUNC_4 () ;
 int FUNC_5 (unsigned char const*,char) ;
 int FUNC_6 (char*,...) ;

__attribute__((used)) static void FUNC_7(const char *VAR_1, const char *VAR_2,
                                    int VAR_3, const char *VAR_4,
                                    const char *VAR_5, const char *VAR_6,
                                    const char *VAR_7,
                                    const unsigned char *VAR_8, size_t VAR_9,
                                    const unsigned char *VAR_10, size_t VAR_11)
{
    const size_t VAR_12 = (VAR_0 - 9) / 17 * 8;
    char VAR_13[VAR_0 + 1], VAR_14[VAR_0 + 1];
    char *VAR_15, VAR_16[VAR_0 + 1];
    size_t VAR_17, VAR_18, VAR_19;
    unsigned int VAR_20 = 0, VAR_21;

    FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
    if (VAR_8 == ((void*)0))
        VAR_9 = 0;
    if (VAR_10 == ((void*)0))
        VAR_11 = 0;
    if (VAR_9 == 0 && VAR_11 == 0) {
        if ((VAR_8 == ((void*)0)) == (VAR_10 == ((void*)0))) {
            FUNC_5(VAR_8, ' ');
        } else {
            FUNC_2(VAR_5, VAR_6);
            FUNC_5(VAR_8, '-');
            FUNC_5(VAR_10, '+');
        }
        goto fin;
    }

    if (VAR_9 != VAR_11 || (VAR_8 != VAR_10 && FUNC_1(VAR_8, VAR_10, VAR_9) != 0))
        FUNC_2(VAR_5, VAR_6);

    while (VAR_9 > 0 || VAR_11 > 0) {
        VAR_17 = VAR_18 = 0;
        if (VAR_9 > 0) {
            VAR_17 = VAR_9 > VAR_12 ? VAR_12 : VAR_9;
            FUNC_0(VAR_8, VAR_17, VAR_13, 8);
        }
        if (VAR_11 > 0) {
            VAR_18 = VAR_11 > VAR_12 ? VAR_12 : VAR_11;
            FUNC_0(VAR_10, VAR_18, VAR_14, 8);
        }

        VAR_21 = 0;
        VAR_19 = 0;
        VAR_15 = VAR_16;
        if (VAR_17 > 0 && VAR_18 > 0) {
            const size_t VAR_22 = VAR_17 < VAR_18 ? VAR_17 : VAR_18;

            for (; VAR_19 < VAR_22; VAR_19++) {
                if (VAR_8[VAR_19] == VAR_10[VAR_19]) {
                    *VAR_15++ = ' ';
                    *VAR_15++ = ' ';
                } else {
                    *VAR_15++ = '^';
                    *VAR_15++ = '^';
                    VAR_21 = 1;
                }
                if (VAR_19 % 8 == 7 && VAR_19 != VAR_22 - 1)
                    *VAR_15++ = ' ';
            }
            *VAR_15++ = '\0';
        }

        if (VAR_17 == VAR_18 && !VAR_21) {
            FUNC_6("%04x: %s\n", VAR_20, VAR_13);
        } else {
            if (VAR_20 == 0 && (VAR_8 == ((void*)0) || VAR_9 == 0))
                FUNC_5(VAR_8, '-');
            else if (VAR_17 > 0)
                FUNC_6("%04x:-%s\n", VAR_20, VAR_13);
            if (VAR_20 == 0 && (VAR_10 == ((void*)0) || VAR_11 == 0))
                FUNC_5(VAR_10, '+');
            else if (VAR_18 > 0)
                FUNC_6("%04x:+%s\n", VAR_20, VAR_14);
            if (VAR_21 && VAR_19 > 0)
                FUNC_6("%4s  %s\n", "", VAR_16);
        }
        VAR_8 += VAR_17;
        VAR_10 += VAR_18;
        VAR_9 -= VAR_17;
        VAR_11 -= VAR_18;
        VAR_20 += VAR_12;
    }
fin:
    FUNC_4();
}
