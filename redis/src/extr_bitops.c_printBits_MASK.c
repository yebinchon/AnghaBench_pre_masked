
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;

void FUNC_1(unsigned char *VAR_0, unsigned long VAR_1) {
    unsigned long VAR_2, VAR_3, VAR_4;

    for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
        VAR_4 = VAR_0[VAR_2];
        for (VAR_3 = 0x80; VAR_3 > 0; VAR_3 /= 2)
            FUNC_0("%c", (VAR_4 & VAR_3) ? '1' : '0');
        FUNC_0("|");
    }
    FUNC_0("\n");
}
