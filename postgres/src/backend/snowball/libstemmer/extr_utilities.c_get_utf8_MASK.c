
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int symbol ;



__attribute__((used)) static int FUNC_0(const symbol * VAR_0, int VAR_1, int VAR_2, int * VAR_3) {
    int VAR_4, VAR_5, VAR_6;
    if (VAR_1 >= VAR_2) return 0;
    VAR_4 = VAR_0[VAR_1++];
    if (VAR_4 < 0xC0 || VAR_1 == VAR_2) {
        *VAR_3 = VAR_4;
        return 1;
    }
    VAR_5 = VAR_0[VAR_1++] & 0x3F;
    if (VAR_4 < 0xE0 || VAR_1 == VAR_2) {
        *VAR_3 = (VAR_4 & 0x1F) << 6 | VAR_5;
        return 2;
    }
    VAR_6 = VAR_0[VAR_1++] & 0x3F;
    if (VAR_4 < 0xF0 || VAR_1 == VAR_2) {
        *VAR_3 = (VAR_4 & 0xF) << 12 | VAR_5 << 6 | VAR_6;
        return 3;
    }
    *VAR_3 = (VAR_4 & 0xE) << 18 | VAR_5 << 12 | VAR_6 << 6 | (VAR_0[VAR_1] & 0x3F);
    return 4;
}
