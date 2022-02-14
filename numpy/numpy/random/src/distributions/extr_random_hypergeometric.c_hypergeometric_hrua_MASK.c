
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double int64_t ;
typedef int bitgen_t ;


 double VAR_0 ;
 double VAR_1 ;
 double FUNC_0 (double,double) ;
 int FUNC_1 (int,double) ;
 double FUNC_2 (double) ;
 double FUNC_3 (double) ;
 double FUNC_4 (double) ;
 double FUNC_5 (int *) ;
 double FUNC_6 (double) ;

__attribute__((used)) static int64_t FUNC_7(bitgen_t *VAR_2,
                                   int64_t VAR_3, int64_t VAR_4, int64_t VAR_5)
{
    int64_t VAR_6, VAR_7, VAR_8;
    int64_t VAR_9;
    double VAR_10, VAR_11;
    double VAR_12, VAR_13;
    double VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
    int64_t VAR_19, VAR_20;

    VAR_8 = VAR_3 + VAR_4;
    VAR_9 = FUNC_1(VAR_5, VAR_8 - VAR_5);
    VAR_6 = FUNC_1(VAR_3, VAR_4);
    VAR_7 = FUNC_0(VAR_3, VAR_4);
    VAR_10 = ((double) VAR_6) / VAR_8;
    VAR_11 = ((double) VAR_7) / VAR_8;


    VAR_12 = VAR_9 * VAR_10;

    VAR_14 = VAR_12 + 0.5;


    VAR_13 = ((double)(VAR_8 - VAR_9) *
           VAR_9 * VAR_10 * VAR_11 / (VAR_8 - 1));

    VAR_15 = FUNC_6(VAR_13 + 0.5);







    VAR_17 = VAR_0*VAR_15 + VAR_1;

    VAR_19 = (int64_t) FUNC_2((double)(VAR_9 + 1) * (VAR_6 + 1) /
                        (VAR_8 + 2));

    VAR_18 = (FUNC_4(VAR_19) +
         FUNC_4(VAR_6 - VAR_19) +
         FUNC_4(VAR_9 - VAR_19) +
         FUNC_4(VAR_7 - VAR_9 + VAR_19));
    VAR_16 = FUNC_1(FUNC_1(VAR_9, VAR_6) + 1, FUNC_2(VAR_14 + 16*VAR_15));

    while (1) {
        double VAR_21, VAR_22, VAR_23, VAR_24;
        double VAR_25;
        VAR_21 = FUNC_5(VAR_2);
        VAR_22 = FUNC_5(VAR_2);
        VAR_23 = VAR_14 + VAR_17*(VAR_22 - 0.5) / VAR_21;


        if ((VAR_23 < 0.0) || (VAR_23 >= VAR_16)) {
            continue;
        }

        VAR_20 = (int64_t) FUNC_2(VAR_23);

        VAR_25 = (FUNC_4(VAR_20) +
              FUNC_4(VAR_6 - VAR_20) +
              FUNC_4(VAR_9 - VAR_20) +
              FUNC_4(VAR_7 - VAR_9 + VAR_20));

        VAR_24 = VAR_18 - VAR_25;


        if ((VAR_21*(4.0 - VAR_21) - 3.0) <= VAR_24) {
            break;
        }


        if (VAR_21*(VAR_21 - VAR_24) >= 1) {
            continue;
        }

        if (2.0*FUNC_3(VAR_21) <= VAR_24) {

            break;
        }
    }

    if (VAR_3 > VAR_4) {
        VAR_20 = VAR_9 - VAR_20;
    }

    if (VAR_9 < VAR_5) {
        VAR_20 = VAR_3 - VAR_20;
    }

    return VAR_20;
}
