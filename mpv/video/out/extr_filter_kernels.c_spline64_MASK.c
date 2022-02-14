
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int params ;



__attribute__((used)) static double FUNC_0(params *VAR_0, double VAR_1)
{
    if (VAR_1 < 1.0) {
        return ((49.0/41.0 * VAR_1 - 6387.0/2911.0) * VAR_1 - 3.0/2911.0) * VAR_1 + 1.0;
    } else if (VAR_1 < 2.0) {
        return ((-24.0/41.0 * (VAR_1-1) + 4032.0/2911.0) * (VAR_1-1) - 2328.0/2911.0) * (VAR_1-1);
    } else if (VAR_1 < 3.0) {
        return ((6.0/41.0 * (VAR_1-2) - 1008.0/2911.0) * (VAR_1-2) + 582.0/2911.0) * (VAR_1-2);
    } else {
        return ((-1.0/41.0 * (VAR_1-3) + 168.0/2911.0) * (VAR_1-3) - 97.0/2911.0) * (VAR_1-3);
    }
}
