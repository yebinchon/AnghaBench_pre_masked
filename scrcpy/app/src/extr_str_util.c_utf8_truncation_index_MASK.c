
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (char const*) ;

size_t
FUNC_1(const char *VAR_0, size_t VAR_1) {
    size_t VAR_2 = FUNC_0(VAR_0);
    if (VAR_2 <= VAR_1) {
        return VAR_2;
    }
    VAR_2 = VAR_1;

    while ((VAR_0[VAR_2] & 0x80) != 0 && (VAR_0[VAR_2] & 0xc0) != 0xc0) {


        VAR_2--;
    }
    return VAR_2;
}
