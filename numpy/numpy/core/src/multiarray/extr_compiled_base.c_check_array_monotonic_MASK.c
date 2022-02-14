
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t npy_intp ;



__attribute__((used)) static int
FUNC_0(const double *VAR_0, npy_intp VAR_1)
{
    npy_intp VAR_2;
    double VAR_3;
    double VAR_4;

    if (VAR_1 == 0) {

        return 1;
    }
    VAR_4 = VAR_0[0];


    for (VAR_2 = 1; (VAR_2 < VAR_1) && (VAR_0[VAR_2] == VAR_4); VAR_2++);

    if (VAR_2 == VAR_1) {

        return 1;
    }

    VAR_3 = VAR_0[VAR_2];
    if (VAR_4 < VAR_3) {

        for (VAR_2 += 1; VAR_2 < VAR_1; VAR_2++) {
            VAR_4 = VAR_3;
            VAR_3 = VAR_0[VAR_2];
            if (VAR_4 > VAR_3) {
                return 0;
            }
        }
        return 1;
    }
    else {

        for (VAR_2 += 1; VAR_2 < VAR_1; VAR_2++) {
            VAR_4 = VAR_3;
            VAR_3 = VAR_0[VAR_2];
            if (VAR_4 < VAR_3) {
                return 0;
            }
        }
        return -1;
    }
}
