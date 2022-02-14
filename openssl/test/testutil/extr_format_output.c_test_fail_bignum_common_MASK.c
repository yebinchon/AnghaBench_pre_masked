
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BIGNUM ;


 int FUNC_0 (int const*,unsigned char*,size_t) ;
 scalar_t__ FUNC_1 (int const*,int const*) ;
 scalar_t__ FUNC_2 (int const*) ;
 size_t FUNC_3 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (unsigned char*) ;
 unsigned char* FUNC_5 (size_t) ;
 size_t VAR_2 ;
 size_t FUNC_6 (unsigned char*,size_t const,char*,int*,int const*) ;
 int FUNC_7 () ;
 int FUNC_8 (int const*,char) ;
 int FUNC_9 (char const*,char const*) ;
 int FUNC_10 (char const*,char const*,int,char const*,char const*,char const*,char const*) ;
 int FUNC_11 () ;
 int FUNC_12 (char*,...) ;

__attribute__((used)) static void FUNC_13(const char *VAR_3, const char *VAR_4,
                                    int VAR_5, const char *VAR_6,
                                    const char *VAR_7, const char *VAR_8,
                                    const char *VAR_9,
                                    const BIGNUM *VAR_10, const BIGNUM *VAR_11)
{
    const size_t VAR_12 = VAR_2;
    char VAR_13[VAR_0 + 1], VAR_14[VAR_0 + 1];
    char *VAR_15, VAR_16[VAR_0 + 1];
    size_t VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22;
    unsigned int VAR_23, VAR_24, VAR_25;
    unsigned char *VAR_26 = ((void*)0), *VAR_27 = ((void*)0);
    int VAR_28 = 1, VAR_29 = 1;
    unsigned char VAR_30[VAR_1 * 2], *VAR_31 = VAR_30;

    FUNC_10(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
    VAR_17 = VAR_10 == ((void*)0) ? 0 : (FUNC_3(VAR_10) + (FUNC_2(VAR_10) ? 1 : 0));
    VAR_18 = VAR_11 == ((void*)0) ? 0 : (FUNC_3(VAR_11) + (FUNC_2(VAR_11) ? 1 : 0));
    if (VAR_17 == 0 && VAR_18 == 0) {
        if ((VAR_10 == ((void*)0)) == (VAR_11 == ((void*)0))) {
            FUNC_7();
            FUNC_8(VAR_10, ' ');
        } else {
            FUNC_9(VAR_7, VAR_8);
            FUNC_7();
            FUNC_8(VAR_10, '-');
            FUNC_8(VAR_11, '+');
        }
        goto fin;
    }

    if (VAR_17 != VAR_18 || VAR_10 == ((void*)0) || VAR_11 == ((void*)0) || FUNC_1(VAR_10, VAR_11) != 0)
        FUNC_9(VAR_7, VAR_8);
    FUNC_7();

    VAR_22 = ((VAR_17 > VAR_18 ? VAR_17 : VAR_18) + VAR_12 - 1) / VAR_12 * VAR_12;

    if (VAR_22 > VAR_1 && (VAR_31 = FUNC_5(VAR_22 * 2)) == ((void*)0)) {
        VAR_31 = VAR_30;
        VAR_22 = VAR_1;
        FUNC_12("WARNING: these BIGNUMs have been truncated\n");
    }

    if (VAR_10 != ((void*)0)) {
        VAR_26 = VAR_31;
        FUNC_0(VAR_10, VAR_26, VAR_22);
    }
    if (VAR_11 != ((void*)0)) {
        VAR_27 = VAR_31 + VAR_22;
        FUNC_0(VAR_11, VAR_27, VAR_22);
    }

    while (VAR_22 > 0) {
        VAR_23 = 8 * (VAR_22 - VAR_12);
        VAR_19 = FUNC_6(VAR_26, VAR_12, VAR_13, &VAR_28, VAR_10);
        VAR_20 = FUNC_6(VAR_27, VAR_12, VAR_14, &VAR_29, VAR_11);

        VAR_24 = VAR_25 = 0;
        VAR_21 = 0;
        VAR_15 = VAR_16;
        for (VAR_21=0; VAR_13[VAR_21] != '\0'; VAR_21++)
            if (VAR_13[VAR_21] == VAR_14[VAR_21] || VAR_13[VAR_21] == ' ' || VAR_14[VAR_21] == ' ') {
                *VAR_15++ = ' ';
                VAR_24 |= VAR_13[VAR_21] != VAR_14[VAR_21];
            } else {
                *VAR_15++ = '^';
                VAR_25 = VAR_24 = 1;
            }
        *VAR_15++ = '\0';
        if (!VAR_24) {
            FUNC_12(" %s:% 5d\n", VAR_20 > VAR_19 ? VAR_14 : VAR_13, VAR_23);
        } else {
            if (VAR_23 == 0 && VAR_10 == ((void*)0))
                FUNC_12("-%s\n", VAR_13);
            else if (VAR_23 == 0 || VAR_19 > 0)
                FUNC_12("-%s:% 5d\n", VAR_13, VAR_23);
            if (VAR_23 == 0 && VAR_11 == ((void*)0))
                FUNC_12("+%s\n", VAR_14);
            else if (VAR_23 == 0 || VAR_20 > 0)
                FUNC_12("+%s:% 5d\n", VAR_14, VAR_23);
            if (VAR_25 && (VAR_23 == 0 || (VAR_19 > 0 && VAR_20 > 0))
                    && VAR_10 != ((void*)0) && VAR_11 != ((void*)0))
                FUNC_12(" %s\n", VAR_16);
        }
        if (VAR_26 != ((void*)0))
            VAR_26 += VAR_12;
        if (VAR_27 != ((void*)0))
            VAR_27 += VAR_12;
        VAR_22 -= VAR_12;
    }
fin:
    FUNC_11();
    if (VAR_31 != VAR_30)
        FUNC_4(VAR_31);
}
