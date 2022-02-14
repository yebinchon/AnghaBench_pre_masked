
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int npy_intp ;
typedef scalar_t__ npy_double ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__ const,scalar_t__ const*,int,int) ;

__attribute__((used)) static npy_intp
FUNC_1(const npy_double VAR_1, const npy_double *VAR_2,
                         npy_intp VAR_3, npy_intp VAR_4)
{
    npy_intp VAR_5 = 0;
    npy_intp VAR_6 = VAR_3;


    if (VAR_1 > VAR_2[VAR_3 - 1]) {
        return VAR_3;
    }
    else if (VAR_1 < VAR_2[0]) {
        return -1;
    }





    if (VAR_3 <= 4) {
        return FUNC_0(VAR_1, VAR_2, VAR_3, 1);
    }

    if (VAR_4 > VAR_3 - 3) {
        VAR_4 = VAR_3 - 3;
    }
    if (VAR_4 < 1) {
        VAR_4 = 1;
    }


    if (VAR_1 < VAR_2[VAR_4]) {
        if (VAR_1 < VAR_2[VAR_4 - 1]) {
            VAR_6 = VAR_4 - 1;

            if (VAR_4 > VAR_0 &&
                        VAR_1 >= VAR_2[VAR_4 - VAR_0]) {
                VAR_5 = VAR_4 - VAR_0;
            }
        }
        else {

            return VAR_4 - 1;
        }
    }
    else {

        if (VAR_1 < VAR_2[VAR_4 + 1]) {
            return VAR_4;
        }
        else {

            if (VAR_1 < VAR_2[VAR_4 + 2]) {
                return VAR_4 + 1;
            }
            else {

                VAR_5 = VAR_4 + 2;

                if (VAR_4 < VAR_3 - VAR_0 - 1 &&
                            VAR_1 < VAR_2[VAR_4 + VAR_0]) {
                    VAR_6 = VAR_4 + VAR_0;
                }
            }
        }
    }


    while (VAR_5 < VAR_6) {
        const npy_intp VAR_7 = VAR_5 + ((VAR_6 - VAR_5) >> 1);
        if (VAR_1 >= VAR_2[VAR_7]) {
            VAR_5 = VAR_7 + 1;
        }
        else {
            VAR_6 = VAR_7;
        }
    }
    return VAR_5 - 1;
}
