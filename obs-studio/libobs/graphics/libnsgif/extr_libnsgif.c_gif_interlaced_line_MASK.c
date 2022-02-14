
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned int FUNC_0(int VAR_0, int VAR_1) {
    if ((VAR_1 << 3) < VAR_0) return (VAR_1 << 3);
    VAR_1 -= ((VAR_0 + 7) >> 3);
    if ((VAR_1 << 3) < (VAR_0 - 4)) return (VAR_1 << 3) + 4;
    VAR_1 -= ((VAR_0 + 3) >> 3);
    if ((VAR_1 << 2) < (VAR_0 - 2)) return (VAR_1 << 2) + 2;
    VAR_1 -= ((VAR_0 + 1) >> 2);
    return (VAR_1 << 1) + 1;
}
