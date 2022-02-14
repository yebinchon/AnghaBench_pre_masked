
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double rtype ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 char* FUNC_1 (double,int*,char*,char*,char,char*) ;
 char* FUNC_2 (char*,int,int) ;
 double FUNC_3 (double,double*) ;
 void* FUNC_4 (int) ;

__attribute__((used)) static int
FUNC_5(rtype VAR_1, int VAR_2, char *VAR_3, int VAR_4, char *VAR_5, char *VAR_6)
{
    register char *VAR_7, *VAR_8;
    register double VAR_9;
    double VAR_10, VAR_11;
    int VAR_12, VAR_13, VAR_14;

    VAR_12 = VAR_13 = VAR_14 = 0;
    if (VAR_1 < 0) {
        VAR_1 = -VAR_1;
        *VAR_3 = '-';
    } else
        *VAR_3 = 0;

    VAR_9 = FUNC_3(VAR_1, &VAR_10);


    VAR_8 = ++VAR_5;





    for (VAR_7 = VAR_6 - 1; VAR_10; ++VAR_13) {
        VAR_11 = FUNC_3(VAR_10 / 10, &VAR_10);
        *VAR_7-- = FUNC_4((int)((VAR_11 + .01) * 10));
    }
    switch (VAR_4) {
    case 'f':

        if (VAR_13)
            for (; ++VAR_7 < VAR_6; *VAR_8++ = *VAR_7);
        else
            *VAR_8++ = '0';




        if (VAR_2 || FUNC_0(VAR_0))
            *VAR_8++ = '.';

        if (VAR_9) {
            if (VAR_2)
                do {
                    VAR_9 = FUNC_3(VAR_9 * 10, &VAR_11);
                    *VAR_8++ = FUNC_4((int)VAR_11);
                } while (--VAR_2 && VAR_9);
            if (VAR_9)
                VAR_5 = FUNC_1(VAR_9, (int *)((void*)0), VAR_5,
                    VAR_8 - 1, (char)0, VAR_3);
        }
        for (; VAR_2--; *VAR_8++ = '0');
        break;
    case 'e':
    case 'E':
eformat: if (VAR_13) {
            *VAR_8++ = *++VAR_7;
            if (VAR_2 || FUNC_0(VAR_0))
                *VAR_8++ = '.';

            for (; VAR_2 && ++VAR_7 < VAR_6; --VAR_2)
                *VAR_8++ = *VAR_7;





            if (!VAR_2 && ++VAR_7 < VAR_6) {
                VAR_9 = 0;
                VAR_5 = FUNC_1((double)0, &VAR_13, VAR_5,
                    VAR_8 - 1, *VAR_7, VAR_3);
            }

            --VAR_13;
        }

        else if (VAR_9) {

            for (VAR_13 = -1;; --VAR_13) {
                VAR_9 = FUNC_3(VAR_9 * 10, &VAR_11);
                if (VAR_11)
                    break;
            }
            *VAR_8++ = FUNC_4((int)VAR_11);
            if (VAR_2 || FUNC_0(VAR_0))
                *VAR_8++ = '.';
        }
        else {
            *VAR_8++ = '0';
            if (VAR_2 || FUNC_0(VAR_0))
                *VAR_8++ = '.';
        }

        if (VAR_9) {
            if (VAR_2)
                do {
                    VAR_9 = FUNC_3(VAR_9 * 10, &VAR_11);
                    *VAR_8++ = FUNC_4((int)VAR_11);
                } while (--VAR_2 && VAR_9);
            if (VAR_9)
                VAR_5 = FUNC_1(VAR_9, &VAR_13, VAR_5,
                    VAR_8 - 1, (char)0, VAR_3);
        }

        for (; VAR_2--; *VAR_8++ = '0');


        if (VAR_14 && !FUNC_0(VAR_0)) {
            while (VAR_8 > VAR_5 && *--VAR_8 == '0');
            if (*VAR_8 == '.')
                --VAR_8;
            ++VAR_8;
        }
        VAR_8 = FUNC_2(VAR_8, VAR_13, VAR_4);
        break;
    case 'g':
    case 'G':

        if (!VAR_2)
            ++VAR_2;






        if (VAR_13 > VAR_2 || (!VAR_13 && VAR_9 && VAR_9 < .0001)) {







            --VAR_2;
            VAR_4 -= 2;
            VAR_14 = 1;
            goto eformat;
        }




        if (VAR_13)
            for (; ++VAR_7 < VAR_6; *VAR_8++ = *VAR_7, --VAR_2);
        else
            *VAR_8++ = '0';




        if (VAR_2 || FUNC_0(VAR_0)) {
            VAR_12 = 1;
            *VAR_8++ = '.';
        }
        else
            VAR_12 = 0;

        if (VAR_9) {
            if (VAR_2) {
                    do {
                    VAR_9 = FUNC_3(VAR_9 * 10, &VAR_11);
                    *VAR_8++ = FUNC_4((int)VAR_11);
                } while(!VAR_11 && !VAR_13);
                while (--VAR_2 && VAR_9) {
                    VAR_9 = FUNC_3(VAR_9 * 10, &VAR_11);
                    *VAR_8++ = FUNC_4((int)VAR_11);
                }
            }
            if (VAR_9)
                VAR_5 = FUNC_1(VAR_9, (int *)((void*)0), VAR_5,
                    VAR_8 - 1, (char)0, VAR_3);
        }

        if (FUNC_0(VAR_0))
            for (; VAR_2--; *VAR_8++ = '0');
        else if (VAR_12) {
            while (VAR_8 > VAR_5 && *--VAR_8 == '0');
            if (*VAR_8 != '.')
                ++VAR_8;
        }
    }
    return (VAR_8 - VAR_5);
}
