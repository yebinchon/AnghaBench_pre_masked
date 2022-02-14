
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static double
FUNC_0(int VAR_0)
{
    static const double VAR_1[] = {1e0, 1e1, 1e2, 1e3, 1e4, 1e5, 1e6, 1e7, 1e8};
    double VAR_2;
    if (VAR_0 < 9) {
        VAR_2 = VAR_1[VAR_0];
    }
    else {
        VAR_2 = 1e9;
        while (VAR_0-- > 9) {
            VAR_2 *= 10.;
        }
    }
    return VAR_2;
}
