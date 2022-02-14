
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int symbol ;



extern int FUNC_0(const symbol * VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4) {
    int VAR_5;
    if (VAR_4 >= 0) {
        for (; VAR_4 > 0; VAR_4--) {
            if (VAR_1 >= VAR_3) return -1;
            VAR_5 = VAR_0[VAR_1++];
            if (VAR_5 >= 0xC0) {
                while (VAR_1 < VAR_3) {
                    VAR_5 = VAR_0[VAR_1];
                    if (VAR_5 >= 0xC0 || VAR_5 < 0x80) break;

                    VAR_1++;
                }
            }
        }
    } else {
        for (; VAR_4 < 0; VAR_4++) {
            if (VAR_1 <= VAR_2) return -1;
            VAR_5 = VAR_0[--VAR_1];
            if (VAR_5 >= 0x80) {
                while (VAR_1 > VAR_2) {
                    VAR_5 = VAR_0[VAR_1];
                    if (VAR_5 >= 0xC0) break;
                    VAR_1--;
                }
            }
        }
    }
    return VAR_1;
}
