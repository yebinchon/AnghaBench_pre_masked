
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static double FUNC_0(double VAR_0)
{
    double VAR_1 = 1.0;
    double VAR_2 = VAR_0 * VAR_0 / 4.0;
    double VAR_3 = VAR_2;
    int VAR_4 = 2;
    while (VAR_3 > 1e-12) {
        VAR_1 += VAR_3;
        VAR_3 *= VAR_2 / (VAR_4 * VAR_4);
        VAR_4 += 1;
    }
    return VAR_1;
}
