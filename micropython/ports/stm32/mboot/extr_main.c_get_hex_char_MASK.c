
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static char FUNC_0(int VAR_0) {
    VAR_0 &= 0xf;
    if (VAR_0 <= 9) {
        return '0' + VAR_0;
    } else {
        return 'A' + VAR_0 - 10;
    }
}
