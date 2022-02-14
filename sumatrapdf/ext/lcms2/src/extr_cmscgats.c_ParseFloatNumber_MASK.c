
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double cmsInt32Number ;
typedef double cmsFloat64Number ;


 scalar_t__ FUNC_0 (int) ;
 char FUNC_1 (char const) ;
 double FUNC_2 (int) ;

__attribute__((used)) static
cmsFloat64Number FUNC_3(const char *VAR_0)
{
    cmsFloat64Number VAR_1 = 0.0;
    int VAR_2 = 1;


    if (VAR_0 == ((void*)0)) return 0.0;

    if (*VAR_0 == '-' || *VAR_0 == '+') {

        VAR_2 = (*VAR_0 == '-') ? -1 : 1;
        VAR_0++;
    }


    while (*VAR_0 && FUNC_0((int)*VAR_0)) {

        VAR_1 = VAR_1 * 10.0 + (*VAR_0 - '0');
        if (*VAR_0) VAR_0++;
    }

    if (*VAR_0 == '.') {

        cmsFloat64Number VAR_3 = 0.0;
        int VAR_4 = 0;

        if (*VAR_0) VAR_0++;

        while (*VAR_0 && FUNC_0((int)*VAR_0)) {

            VAR_3 = VAR_3 * 10.0 + (*VAR_0 - '0');
            VAR_4++;
            if (*VAR_0) VAR_0++;
        }

        VAR_1 = VAR_1 + (VAR_3 / FUNC_2(VAR_4));
    }


    if (*VAR_0 && FUNC_1(*VAR_0) == 'E') {

        int VAR_5;
        int VAR_6;

        if (*VAR_0) VAR_0++;
        VAR_6 = 1;

        if (*VAR_0 == '-') {

            VAR_6 = -1;
            if (*VAR_0) VAR_0++;
        }
        else
            if (*VAR_0 == '+') {

                VAR_6 = +1;
                if (*VAR_0) VAR_0++;
            }

        VAR_5 = 0;
        while (*VAR_0 && FUNC_0((int)*VAR_0)) {

            cmsInt32Number VAR_7 = (*VAR_0 - '0');

            if ((cmsFloat64Number)VAR_5 * 10.0 + VAR_7 < (cmsFloat64Number)+2147483647.0)
                VAR_5 = VAR_5 * 10 + VAR_7;

            if (*VAR_0) VAR_0++;
        }

        VAR_5 = VAR_6*VAR_5;
        VAR_1 = VAR_1 * FUNC_2(VAR_5);
    }

    return VAR_2 * VAR_1;
}
