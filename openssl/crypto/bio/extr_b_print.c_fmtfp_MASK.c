
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int iconvert ;
typedef int fconvert ;
typedef int econvert ;
typedef double LDOUBLE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 double VAR_9 ;
 double FUNC_0 (double) ;
 int FUNC_1 (char**,char**,size_t*,size_t*,char) ;
 double FUNC_2 (int) ;
 unsigned long FUNC_3 (double) ;

__attribute__((used)) static int
FUNC_4(char **VAR_10,
      char **VAR_11,
      size_t *VAR_12,
      size_t *VAR_13, LDOUBLE VAR_14, int VAR_15, int VAR_16, int VAR_17, int VAR_18)
{
    int VAR_19 = 0;
    LDOUBLE VAR_20;
    LDOUBLE VAR_21;
    char VAR_22[20];
    char VAR_23[20];
    char VAR_24[20];
    int VAR_25 = 0;
    int VAR_26 = 0;
    int VAR_27 = 0;
    int VAR_28 = 0;
    int VAR_29 = 0;
    long VAR_30 = 0;
    unsigned long VAR_31;
    unsigned long VAR_32;
    unsigned long VAR_33;
    int VAR_34;

    if (VAR_16 < 0)
        VAR_16 = 6;

    if (VAR_14 < 0)
        VAR_19 = '-';
    else if (VAR_17 & VAR_2)
        VAR_19 = '+';
    else if (VAR_17 & VAR_3)
        VAR_19 = ' ';






    if (VAR_18 == VAR_8) {
        if (VAR_14 == 0.0) {
            VAR_34 = VAR_7;
        } else if (VAR_14 < 0.0001) {
            VAR_34 = VAR_6;
        } else if ((VAR_16 == 0 && VAR_14 >= 10)
                    || (VAR_16 > 0 && VAR_14 >= FUNC_2(VAR_16))) {
            VAR_34 = VAR_6;
        } else {
            VAR_34 = VAR_7;
        }
    } else {
        VAR_34 = VAR_18;
    }

    if (VAR_18 != VAR_7) {
        VAR_21 = VAR_14;

        if (VAR_14 != 0.0) {
            while (VAR_21 < 1) {
                VAR_21 *= 10;
                VAR_30--;
            }
            while (VAR_21 > 10) {
                VAR_21 /= 10;
                VAR_30++;
            }
        }
        if (VAR_18 == VAR_8) {




            if (VAR_16 == 0)
                VAR_16 = 1;

            if (VAR_34 == VAR_7) {
                VAR_16 -= (VAR_30 + 1);
                if (VAR_16 < 0) {



                    return 0;
                }
            } else {





                VAR_16--;
            }
        }
        if (VAR_34 == VAR_6)
            VAR_14 = VAR_21;
    }
    VAR_20 = FUNC_0(VAR_14);
    if (VAR_20 > VAR_9) {

        return 0;
    }
    VAR_31 = (unsigned long)VAR_20;





    if (VAR_16 > 9)
        VAR_16 = 9;





    VAR_33 = FUNC_3(FUNC_2(VAR_16));
    VAR_32 = FUNC_3(FUNC_2(VAR_16) * (VAR_20 - VAR_31));

    if (VAR_32 >= VAR_33) {
        VAR_31++;
        VAR_32 -= VAR_33;
    }


    do {
        VAR_22[VAR_25++] = "0123456789"[VAR_31 % 10];
        VAR_31 = (VAR_31 / 10);
    } while (VAR_31 && (VAR_25 < (int)sizeof(VAR_22)));
    if (VAR_25 == sizeof(VAR_22))
        VAR_25--;
    VAR_22[VAR_25] = 0;


    while (VAR_26 < VAR_16) {
        if (VAR_18 == VAR_8 && VAR_26 == 0 && (VAR_32 % 10) == 0) {

            VAR_16--;
            VAR_32 = VAR_32 / 10;
            if (VAR_26 < VAR_16)
                continue;
            break;
        }
        VAR_23[VAR_26++] = "0123456789"[VAR_32 % 10];
        VAR_32 = (VAR_32 / 10);
    }

    if (VAR_26 == sizeof(VAR_23))
        VAR_26--;
    VAR_23[VAR_26] = 0;


    if (VAR_34 == VAR_6) {
        int VAR_35;
        if (VAR_30 < 0)
            VAR_35 = -VAR_30;
        else
            VAR_35 = VAR_30;

        do {
            VAR_24[VAR_27++] = "0123456789"[VAR_35 % 10];
            VAR_35 = (VAR_35 / 10);
        } while (VAR_35 > 0 && VAR_27 < (int)sizeof(VAR_24));

        if (VAR_35 > 0)
            return 0;

        if (VAR_27 == 1)
            VAR_24[VAR_27++] = '0';
    }





    VAR_28 = VAR_15 - VAR_25 - VAR_16 - (VAR_16 > 0 ? 1 : 0) - ((VAR_19) ? 1 : 0);

    if (VAR_34 == VAR_6)
        VAR_28 -= 2 + VAR_27;
    VAR_29 = VAR_16 - VAR_26;
    if (VAR_29 < 0)
        VAR_29 = 0;
    if (VAR_28 < 0)
        VAR_28 = 0;
    if (VAR_17 & VAR_0)
        VAR_28 = -VAR_28;

    if ((VAR_17 & VAR_5) && (VAR_28 > 0)) {
        if (VAR_19) {
            if (!FUNC_1(VAR_10, VAR_11, VAR_12, VAR_13, VAR_19))
                return 0;
            --VAR_28;
            VAR_19 = 0;
        }
        while (VAR_28 > 0) {
            if (!FUNC_1(VAR_10, VAR_11, VAR_12, VAR_13, '0'))
                return 0;
            --VAR_28;
        }
    }
    while (VAR_28 > 0) {
        if (!FUNC_1(VAR_10, VAR_11, VAR_12, VAR_13, ' '))
            return 0;
        --VAR_28;
    }
    if (VAR_19 && !FUNC_1(VAR_10, VAR_11, VAR_12, VAR_13, VAR_19))
        return 0;

    while (VAR_25 > 0) {
        if (!FUNC_1(VAR_10, VAR_11, VAR_12, VAR_13, VAR_22[--VAR_25]))
            return 0;
    }





    if (VAR_16 > 0 || (VAR_17 & VAR_1)) {
        if (!FUNC_1(VAR_10, VAR_11, VAR_12, VAR_13, '.'))
            return 0;

        while (VAR_26 > 0) {
            if (!FUNC_1(VAR_10, VAR_11, VAR_12, VAR_13,
                             VAR_23[--VAR_26]))
                return 0;
        }
    }
    while (VAR_29 > 0) {
        if (!FUNC_1(VAR_10, VAR_11, VAR_12, VAR_13, '0'))
            return 0;
        --VAR_29;
    }
    if (VAR_34 == VAR_6) {
        char VAR_36;

        if ((VAR_17 & VAR_4) == 0)
            VAR_36 = 'e';
        else
            VAR_36 = 'E';
        if (!FUNC_1(VAR_10, VAR_11, VAR_12, VAR_13, VAR_36))
                return 0;
        if (VAR_30 < 0) {
            if (!FUNC_1(VAR_10, VAR_11, VAR_12, VAR_13, '-'))
                    return 0;
        } else {
            if (!FUNC_1(VAR_10, VAR_11, VAR_12, VAR_13, '+'))
                    return 0;
        }
        while (VAR_27 > 0) {
            if (!FUNC_1(VAR_10, VAR_11, VAR_12, VAR_13,
                             VAR_24[--VAR_27]))
                return 0;
        }
    }

    while (VAR_28 < 0) {
        if (!FUNC_1(VAR_10, VAR_11, VAR_12, VAR_13, ' '))
            return 0;
        ++VAR_28;
    }
    return 1;
}
