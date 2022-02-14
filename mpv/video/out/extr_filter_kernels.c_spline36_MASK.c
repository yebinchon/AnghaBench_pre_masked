
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int params ;



__attribute__((used)) static double FUNC_0(params *VAR_0, double VAR_1)
{
    if (VAR_1 < 1.0) {
        return ((13.0/11.0 * VAR_1 - 453.0/209.0) * VAR_1 - 3.0/209.0) * VAR_1 + 1.0;
    } else if (VAR_1 < 2.0) {
        return ((-6.0/11.0 * (VAR_1-1) + 270.0/209.0) * (VAR_1-1) - 156.0/ 209.0) * (VAR_1-1);
    } else {
        return ((1.0/11.0 * (VAR_1-2) - 45.0/209.0) * (VAR_1-2) + 26.0/209.0) * (VAR_1-2);
    }
}
