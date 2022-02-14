
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(unsigned int VAR_0, unsigned int VAR_1, int VAR_2, char* VAR_3) {
    int VAR_4 = 0;
    unsigned int VAR_5 = 1;
    while (VAR_0 / VAR_5 >= VAR_1) VAR_5 *= VAR_1;
    while (VAR_5 != 0) {
        int VAR_6 = VAR_0 / VAR_5;
        VAR_0 %= VAR_5;
        VAR_5 /= VAR_1;
        if (VAR_4 || VAR_6 > 0 || VAR_5 == 0) {
            *VAR_3++ = VAR_6 + (VAR_6 < 10 ? '0' : (VAR_2 ? 'A' : 'a') - 10);
            ++VAR_4;
        }
    }
    *VAR_3 = 0;
}
