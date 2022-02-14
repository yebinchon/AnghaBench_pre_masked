
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ npy_bool ;



__attribute__((used)) static int
FUNC_0(int VAR_0, const npy_bool *VAR_1)
{
    int VAR_2;
    int VAR_3 = 0;

    for (VAR_2 = 0; VAR_2 < VAR_0; ++VAR_2) {
        if (VAR_1[VAR_2]) {
            VAR_3++;
        }
    }
    return VAR_3;
}
