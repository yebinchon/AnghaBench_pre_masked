
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* FUNC_0 (size_t,size_t) ;
 int FUNC_1 (char*,size_t) ;
 scalar_t__ FUNC_2 (int) ;

void *FUNC_3(size_t VAR_0, size_t VAR_1) {
    void *VAR_2 = FUNC_0(VAR_0, VAR_1);
    if (FUNC_2(!VAR_2)) FUNC_1("Cannot allocate %zu bytes of memory.", VAR_0 * VAR_1);
    return VAR_2;
}
