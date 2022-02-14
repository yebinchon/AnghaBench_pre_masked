
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int npy_datetime ;



__attribute__((used)) static int
FUNC_0(npy_datetime VAR_0)
{
    int VAR_1;


    VAR_1 = (int)((VAR_0 - 4) % 7);
    if (VAR_1 < 0) {
        VAR_1 += 7;
    }

    return VAR_1;
}
