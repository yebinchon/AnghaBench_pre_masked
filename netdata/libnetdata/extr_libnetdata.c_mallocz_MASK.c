
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,size_t) ;
 void* FUNC_1 (size_t) ;
 scalar_t__ FUNC_2 (int) ;

void *FUNC_3(size_t VAR_0) {
    void *VAR_1 = FUNC_1(VAR_0);
    if (FUNC_2(!VAR_1)) FUNC_0("Cannot allocate %zu bytes of memory.", VAR_0);
    return VAR_1;
}
