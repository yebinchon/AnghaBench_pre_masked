
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int char32_t ;



__attribute__((used)) static int FUNC_0(char32_t VAR_0) {

        if (VAR_0 < 0x80)
                return 1;
        if (VAR_0 < 0x800)
                return 2;
        if (VAR_0 < 0x10000)
                return 3;
        if (VAR_0 < 0x200000)
                return 4;
        if (VAR_0 < 0x4000000)
                return 5;

        return 6;
}
