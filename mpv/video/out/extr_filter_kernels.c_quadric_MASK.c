
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int params ;



__attribute__((used)) static double FUNC_0(params *VAR_0, double VAR_1)
{
    if (VAR_1 < 0.75) {
        return 0.75 - VAR_1 * VAR_1;
    } else if (VAR_1 < 1.5) {
        double VAR_2 = VAR_1 - 1.5;
        return 0.5 * VAR_2 * VAR_2;
    }
    return 0.0;
}
