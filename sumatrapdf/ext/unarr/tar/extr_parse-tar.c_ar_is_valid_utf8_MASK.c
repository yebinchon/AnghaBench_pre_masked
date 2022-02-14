
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static bool FUNC_0(const char *VAR_0)
{
    const unsigned char *VAR_1;
    for (VAR_1 = (const unsigned char *)VAR_0; *VAR_1; VAR_1++) {
        int VAR_2 = *VAR_1 < 0x80 ? 0 :
                   *VAR_1 < 0xC0 ? -1 :
                   *VAR_1 < 0xE0 ? 1 :
                   *VAR_1 < 0xF0 ? 2 :
                   *VAR_1 < 0xF5 ? 3 : -1;
        if (VAR_2 < 0)
            return 0;
        while (VAR_2-- > 0) {
            if ((*++VAR_1 & 0xC0) != 0x80)
                return 0;
        }
    }
    return 1;
}
