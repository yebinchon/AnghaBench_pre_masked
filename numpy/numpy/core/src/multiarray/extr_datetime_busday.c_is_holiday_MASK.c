
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ const npy_datetime ;



__attribute__((used)) static int
FUNC_0(npy_datetime VAR_0,
            npy_datetime *VAR_1, const npy_datetime *VAR_2)
{
    npy_datetime *VAR_3;


    while (VAR_1 < VAR_2) {
        VAR_3 = VAR_1 + (VAR_2 - VAR_1) / 2;

        if (VAR_0 < *VAR_3) {
            VAR_2 = VAR_3;
        }
        else if (VAR_0 > *VAR_3) {
            VAR_1 = VAR_3 + 1;
        }
        else {
            return 1;
        }
    }


    return 0;
}
