
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*,unsigned long long) ;
 char* FUNC_1 (char*,unsigned long long) ;

inline char *FUNC_2(char *VAR_0, unsigned long long VAR_1) {






    do *VAR_0++ = (char)('0' + (VAR_1 % 10)); while(VAR_1 /= 10);


    return VAR_0;
}
