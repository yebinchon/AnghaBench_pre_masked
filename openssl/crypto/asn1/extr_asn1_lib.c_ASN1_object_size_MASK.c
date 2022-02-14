
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

int FUNC_0(int VAR_1, int VAR_2, int VAR_3)
{
    int VAR_4 = 1;
    if (VAR_2 < 0)
        return -1;
    if (VAR_3 >= 31) {
        while (VAR_3 > 0) {
            VAR_3 >>= 7;
            VAR_4++;
        }
    }
    if (VAR_1 == 2) {
        VAR_4 += 3;
    } else {
        VAR_4++;
        if (VAR_2 > 127) {
            int VAR_5 = VAR_2;
            while (VAR_5 > 0) {
                VAR_5 >>= 8;
                VAR_4++;
            }
        }
    }
    if (VAR_4 >= VAR_0 - VAR_2)
        return -1;
    return VAR_4 + VAR_2;
}
