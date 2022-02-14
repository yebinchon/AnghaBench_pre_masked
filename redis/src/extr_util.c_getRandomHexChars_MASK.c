
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char*,size_t) ;

void FUNC_1(char *VAR_0, size_t VAR_1) {
    char *VAR_2 = "0123456789abcdef";
    size_t VAR_3;

    FUNC_0((unsigned char*)VAR_0,VAR_1);
    for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) VAR_0[VAR_3] = VAR_2[VAR_0[VAR_3] & 0x0F];
}
