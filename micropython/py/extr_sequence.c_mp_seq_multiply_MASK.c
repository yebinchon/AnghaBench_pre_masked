
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (void*,void const*,size_t) ;

void FUNC_1(const void *VAR_0, size_t VAR_1, size_t VAR_2, size_t VAR_3, void *VAR_4) {
    for (size_t VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
        size_t VAR_6 = VAR_1 * VAR_2;
        FUNC_0(VAR_4, VAR_0, VAR_6);
        VAR_4 = (char*)VAR_4 + VAR_6;
    }
}
