
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
inline char *FUNC_0(char *VAR_0, unsigned long VAR_1) {
    char *VAR_2 = VAR_0;


    do *VAR_2++ = (char)('0' + (VAR_1 % 10)); while(VAR_1 /= 10);
    return VAR_2;
}
