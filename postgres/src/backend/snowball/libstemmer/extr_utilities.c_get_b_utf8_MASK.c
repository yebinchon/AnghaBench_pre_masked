
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int symbol ;



__attribute__((used)) static int FUNC_0(const symbol * VAR_0, int VAR_1, int VAR_2, int * VAR_3) {
    int VAR_4, VAR_5;
    if (VAR_1 <= VAR_2) return 0;
    VAR_5 = VAR_0[--VAR_1];
    if (VAR_5 < 0x80 || VAR_1 == VAR_2) {
        *VAR_3 = VAR_5;
        return 1;
    }
    VAR_4 = VAR_5 & 0x3F;
    VAR_5 = VAR_0[--VAR_1];
    if (VAR_5 >= 0xC0 || VAR_1 == VAR_2) {
        *VAR_3 = (VAR_5 & 0x1F) << 6 | VAR_4;
        return 2;
    }
    VAR_4 |= (VAR_5 & 0x3F) << 6;
    VAR_5 = VAR_0[--VAR_1];
    if (VAR_5 >= 0xE0 || VAR_1 == VAR_2) {
        *VAR_3 = (VAR_5 & 0xF) << 12 | VAR_4;
        return 3;
    }
    *VAR_3 = (VAR_0[--VAR_1] & 0xE) << 18 | (VAR_5 & 0x3F) << 12 | VAR_4;
    return 4;
}
