
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*,unsigned long long) ;

inline char *FUNC_1(char *VAR_0, unsigned long long VAR_1) {
    char *VAR_2 = VAR_0;


    do *VAR_2++ = (char)('0' + (VAR_1 % 10)); while((VAR_1 /= 10) && VAR_1 > (unsigned long long)0xffffffff);
    if(VAR_1) return FUNC_0(VAR_2, VAR_1);
    return VAR_2;
}
