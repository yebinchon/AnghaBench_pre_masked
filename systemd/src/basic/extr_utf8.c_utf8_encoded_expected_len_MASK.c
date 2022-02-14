
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



__attribute__((used)) static size_t FUNC_0(uint8_t VAR_0) {
        if (VAR_0 < 0x80)
                return 1;
        if ((VAR_0 & 0xe0) == 0xc0)
                return 2;
        if ((VAR_0 & 0xf0) == 0xe0)
                return 3;
        if ((VAR_0 & 0xf8) == 0xf0)
                return 4;
        if ((VAR_0 & 0xfc) == 0xf8)
                return 5;
        if ((VAR_0 & 0xfe) == 0xfc)
                return 6;

        return 0;
}
