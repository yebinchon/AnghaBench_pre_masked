
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (double,double*) ;
 double FUNC_1 (char) ;

__attribute__((used)) static char *
FUNC_2(double VAR_0, int *VAR_1, char *VAR_2, char *VAR_3, char VAR_4, char *VAR_5)
{
    double VAR_6;

    if (VAR_0)
        (void)FUNC_0(VAR_0 * 10, &VAR_6);
    else
        VAR_6 = FUNC_1(VAR_4);
    if (VAR_6 > 4)
        for (;; --VAR_3) {
            if (*VAR_3 == '.')
                --VAR_3;
            if (++*VAR_3 <= '9')
                break;
            *VAR_3 = '0';
            if (VAR_3 == VAR_2) {
                if (VAR_1) {
                    *VAR_3 = '1';
                    ++*VAR_1;
                }
                else {
                *--VAR_3 = '1';
                --VAR_2;
                }
                break;
            }
        }

    else if (*VAR_5 == '-')
        for (;; --VAR_3) {
            if (*VAR_3 == '.')
                --VAR_3;
            if (*VAR_3 != '0')
                break;
            if (VAR_3 == VAR_2)
                *VAR_5 = 0;
        }
    return (VAR_2);
}
